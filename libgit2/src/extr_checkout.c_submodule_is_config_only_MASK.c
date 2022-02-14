
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_submodule ;
struct TYPE_3__ {int repo; } ;
typedef TYPE_1__ checkout_data ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int*,int *) ;
 scalar_t__ FUNC_2 (int **,int ,char const*) ;

__attribute__((used)) static bool FUNC_3(
 checkout_data *VAR_1,
 const char *VAR_2)
{
 git_submodule *VAR_3 = ((void*)0);
 unsigned int VAR_4 = 0;
 bool VAR_5 = 0;

 if (FUNC_2(&VAR_3, VAR_1->repo, VAR_2) < 0)
  return 1;

 if (FUNC_1(&VAR_4, VAR_3) < 0 ||
  VAR_4 == VAR_0)
  VAR_5 = 1;

 FUNC_0(VAR_3);

 return VAR_5;
}
