
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_ht {int buckets; void** ht; int ofs; int entries; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct dn_ht *VAR_2, int (*VAR_3)(void *, void *), void *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 void **VAR_8, *VAR_9, *VAR_10;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return 0;
 for (VAR_5 = 0; VAR_5 <= VAR_2->buckets; VAR_5++) {
  VAR_8 = &VAR_2->ht[VAR_5];
  while ( (VAR_9 = *VAR_8) != ((void*)0)) {
   VAR_10 = *(void **)((char *)VAR_9 + VAR_2->ofs);
   VAR_6 = VAR_3(VAR_9, VAR_4);
   if (VAR_6 & VAR_0) {
    VAR_7++;
    VAR_2->entries--;
    *VAR_8 = VAR_10;
   } else {
    VAR_8 = (void **)((char *)VAR_9 + VAR_2->ofs);
   }
   if (VAR_6 & VAR_1)
    return VAR_7;
  }
 }
 return VAR_7;
}
