
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_3__ {char** strings; int count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int *) ;
 int FUNC_1 (int **,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;

int FUNC_6(git_strarray *VAR_4, git_repository *VAR_5)
{
 int VAR_6;
 git_config *VAR_7;
 git_vector VAR_8 = VAR_0;

 if ((VAR_6 = FUNC_1(&VAR_7, VAR_5)) < 0)
  return VAR_6;

 if ((VAR_6 = FUNC_4(&VAR_8, 4, VAR_2)) < 0)
  return VAR_6;

 VAR_6 = FUNC_0(
  VAR_7, "^remote\\..*\\.(push)?url$", VAR_3, &VAR_8);

 if (VAR_6 < 0) {
  FUNC_3(&VAR_8);
  return VAR_6;
 }

 FUNC_5(&VAR_8, VAR_1);

 VAR_4->strings =
  (char **)FUNC_2(&VAR_4->count, ((void*)0), &VAR_8);

 return 0;
}
