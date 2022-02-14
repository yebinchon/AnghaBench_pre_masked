
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_ht {int buckets; int (* hash ) (uintptr_t,int,void*) ;void** ht; int ofs; void* (* newh ) (uintptr_t,int,void*) ;int entries; scalar_t__ (* match ) (void*,uintptr_t,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (uintptr_t,int,void*) ;
 scalar_t__ FUNC_1 (void*,uintptr_t,int,void*) ;
 void* FUNC_2 (uintptr_t,int,void*) ;

void *
FUNC_3(struct dn_ht *VAR_3, uintptr_t VAR_4, int VAR_5, void *VAR_6)
{
 int VAR_7;
 void **VAR_8, *VAR_9;

 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_7 = (VAR_3->buckets == 1) ? 0 :
  (VAR_3->hash(VAR_4, VAR_5, VAR_6) & VAR_3->buckets);

 for (VAR_8 = &VAR_3->ht[VAR_7]; (VAR_9 = *VAR_8); VAR_8 = (void **)((char *)VAR_9 + VAR_3->ofs)) {
  if (VAR_5 & VAR_1) {
   if (VAR_4 == (uintptr_t)VAR_9)
    break;
  } else if (VAR_3->match(VAR_9, VAR_4, VAR_5, VAR_6))
   break;
 }
 if (VAR_9) {
  if (VAR_5 & VAR_2) {

   *VAR_8 = *(void **)((char *)VAR_9 + VAR_3->ofs);
   *(void **)((char *)VAR_9 + VAR_3->ofs) = ((void*)0);
   VAR_3->entries--;
  }
 } else if (VAR_5 & VAR_0) {


  VAR_9 = VAR_3->newh ? VAR_3->newh(VAR_4, VAR_5, VAR_6) : (void *)VAR_4;

  if (VAR_9) {
   VAR_3->entries++;
   *(void **)((char *)VAR_9 + VAR_3->ofs) = VAR_3->ht[VAR_7];
   VAR_3->ht[VAR_7] = VAR_9;
  }
 }
 return VAR_9;
}
