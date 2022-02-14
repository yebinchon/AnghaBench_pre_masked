
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int **,int *) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, git_repository *VAR_2)
{
 git_config *VAR_3;
 int VAR_4 = FUNC_1(&VAR_3, VAR_2);

 *VAR_1 = (VAR_4 != 0) ? ((void*)0) : FUNC_0(
  VAR_3, "core.notesref", VAR_0);

 return VAR_4;
}
