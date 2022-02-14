
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;
typedef int git_repository ;
typedef int git_reference ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int *,char const*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(git_repository *VAR_0, const char *VAR_1, void *VAR_2)
{
 git_vector *VAR_3 = (git_vector *) VAR_2;
 git_reference *VAR_4;

 FUNC_0(VAR_0);

 FUNC_1(FUNC_2(&VAR_4, VAR_0, VAR_1));

 FUNC_3(VAR_3, VAR_4);

 return 0;
}
