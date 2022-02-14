
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_3__ {char** strings; scalar_t__ count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,void*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int *) ;

int FUNC_5(
 git_strarray *VAR_1,
 git_repository *VAR_2)
{
 git_vector VAR_3;

 FUNC_0(VAR_1 && VAR_2);

 VAR_1->strings = ((void*)0);
 VAR_1->count = 0;

 if (FUNC_4(&VAR_3, 8, ((void*)0)) < 0)
  return -1;

 if (FUNC_1(
   VAR_2, &VAR_0, (void *)&VAR_3) < 0) {
  FUNC_3(&VAR_3);
  return -1;
 }

 VAR_1->strings = (char **)FUNC_2(&VAR_1->count, ((void*)0), &VAR_3);

 return 0;
}
