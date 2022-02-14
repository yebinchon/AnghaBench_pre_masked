
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* configmap_cache; } ;
typedef TYPE_1__ git_repository ;
typedef scalar_t__ git_configmap_item ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int*,int *,scalar_t__) ;
 int FUNC_1 (int **,TYPE_1__*) ;

int FUNC_2(int *VAR_1, git_repository *VAR_2, git_configmap_item VAR_3)
{
 *VAR_1 = VAR_2->configmap_cache[(int)VAR_3];

 if (*VAR_1 == VAR_0) {
  int VAR_4;
  git_config *VAR_5;

  if ((VAR_4 = FUNC_1(&VAR_5, VAR_2)) < 0 ||
   (VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_3)) < 0)
   return VAR_4;

  VAR_2->configmap_cache[(int)VAR_3] = *VAR_1;
 }

 return 0;
}
