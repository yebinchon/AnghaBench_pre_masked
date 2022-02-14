
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alternate_refs_data {void* data; int fn; } ;
typedef int alternate_ref_fn ;


 int FUNC_0 (int ,struct alternate_refs_data*) ;
 int VAR_0 ;

void FUNC_1(alternate_ref_fn VAR_1, void *VAR_2)
{
 struct alternate_refs_data VAR_3;
 VAR_3.fn = VAR_1;
 VAR_3.data = VAR_2;
 FUNC_0(VAR_0, &VAR_3);
}
