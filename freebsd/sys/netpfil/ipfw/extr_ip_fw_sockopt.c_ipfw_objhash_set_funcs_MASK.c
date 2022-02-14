
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namedobj_instance {int * cmp_f; int * hash_f; } ;
typedef int objhash_hash_f ;
typedef int objhash_cmp_f ;



void
FUNC_0(struct namedobj_instance *VAR_0, objhash_hash_f *VAR_1,
    objhash_cmp_f *VAR_2)
{

 VAR_0->hash_f = VAR_1;
 VAR_0->cmp_f = VAR_2;
}
