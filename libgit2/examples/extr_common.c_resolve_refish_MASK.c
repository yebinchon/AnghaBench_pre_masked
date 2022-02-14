
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,int *) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char const*) ;

int FUNC_8(git_annotated_commit **VAR_1, git_repository *VAR_2, const char *VAR_3)
{
 git_reference *VAR_4;
 git_object *VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_6 = FUNC_5(&VAR_4, VAR_2, VAR_3);
 if (VAR_6 == VAR_0) {
  FUNC_1(VAR_1, VAR_2, VAR_4);
  FUNC_6(VAR_4);
  return 0;
 }

 VAR_6 = FUNC_7(&VAR_5, VAR_2, VAR_3);
 if (VAR_6 == VAR_0) {
  VAR_6 = FUNC_2(VAR_1, VAR_2, FUNC_4(VAR_5));
  FUNC_3(VAR_5);
 }

 return VAR_6;
}
