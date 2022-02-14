
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int drivers; } ;
typedef TYPE_1__ git_diff_driver_registry ;
typedef int git_diff_driver ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(git_diff_driver_registry *VAR_0)
{
 git_diff_driver *VAR_1;

 if (!VAR_0)
  return;

 FUNC_2(VAR_0->drivers, VAR_1, FUNC_1(VAR_1));
 FUNC_3(VAR_0->drivers);
 FUNC_0(VAR_0);
}
