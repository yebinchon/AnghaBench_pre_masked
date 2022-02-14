
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
typedef int each_ref_fn ;


 int FUNC_0 (struct ref_store*,char*,int ,void*) ;

int FUNC_1(struct ref_store *VAR_0, each_ref_fn VAR_1, void *VAR_2)
{
 return FUNC_0(VAR_0, "refs/tags/", VAR_1, VAR_2);
}
