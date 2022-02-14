
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int drivers; } ;
typedef TYPE_1__ git_diff_driver_registry ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

git_diff_driver_registry *FUNC_3(void)
{
 git_diff_driver_registry *VAR_0 =
  FUNC_0(1, sizeof(git_diff_driver_registry));
 if (!VAR_0)
  return ((void*)0);

 if (FUNC_2(&VAR_0->drivers) < 0) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }

 return VAR_0;
}
