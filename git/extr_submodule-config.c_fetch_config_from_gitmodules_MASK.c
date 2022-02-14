
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_config {int* max_children; int* recurse_submodules; } ;


 int FUNC_0 (int ,int ,struct fetch_config*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(int *VAR_2, int *VAR_3)
{
 struct fetch_config VAR_4 = {
  .max_children = VAR_2,
  .recurse_submodules = VAR_3
 };
 FUNC_0(VAR_0, VAR_1, &VAR_4);
}
