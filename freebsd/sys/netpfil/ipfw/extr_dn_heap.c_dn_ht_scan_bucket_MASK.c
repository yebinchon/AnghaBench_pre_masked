
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_ht {int buckets; void** ht; int ofs; int entries; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct dn_ht *VAR_2, int *VAR_3, int (*VAR_4)(void *, void *),
   void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 void **VAR_9, *VAR_10, *VAR_11;

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
  return 0;
 if (*VAR_3 > VAR_2->buckets)
  *VAR_3 = 0;
 VAR_6 = *VAR_3;

 VAR_9 = &VAR_2->ht[VAR_6];
 while ( (VAR_10 = *VAR_9) != ((void*)0)) {
  VAR_11 = *(void **)((char *)VAR_10 + VAR_2->ofs);
  VAR_7 = VAR_4(VAR_10, VAR_5);
  if (VAR_7 & VAR_0) {
   VAR_8++;
   VAR_2->entries--;
   *VAR_9 = VAR_11;
  } else {
   VAR_9 = (void **)((char *)VAR_10 + VAR_2->ofs);
  }
  if (VAR_7 & VAR_1)
   return VAR_8;
 }
 return VAR_8;
}
