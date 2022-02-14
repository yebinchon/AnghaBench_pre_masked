
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int *,int,char**) ;

int FUNC_6(git_repository *VAR_1, int VAR_2, char **VAR_3)
{
 git_revwalk *VAR_4;
 git_oid VAR_5;
 char VAR_6[VAR_0+1];

 FUNC_0(FUNC_2(&VAR_4, VAR_1), "allocating revwalk", ((void*)0));
 FUNC_0(FUNC_5(VAR_1, VAR_4, VAR_2-1, VAR_3+1), "parsing options", ((void*)0));

 while (!FUNC_3(&VAR_5, VAR_4)) {
  FUNC_1(VAR_6, &VAR_5);
  VAR_6[VAR_0] = '\0';
  FUNC_4("%s\n", VAR_6);
 }

 return 0;
}
