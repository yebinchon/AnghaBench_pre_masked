
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * diff_drivers; } ;
typedef TYPE_1__ git_repository ;
typedef int git_diff_driver_registry ;


 int VAR_0 ;
 int * FUNC_0 (int **,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static git_diff_driver_registry *FUNC_4(
 git_repository *VAR_1)
{
 if (!VAR_1->diff_drivers) {
  git_diff_driver_registry *VAR_2 = FUNC_2();
  VAR_2 = FUNC_0(&VAR_1->diff_drivers, ((void*)0), VAR_2);

  if (VAR_2 != ((void*)0))
   FUNC_1(VAR_2);
 }

 if (!VAR_1->diff_drivers)
  FUNC_3(VAR_0, "unable to create diff driver registry");

 return VAR_1->diff_drivers;
}
