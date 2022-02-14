
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int **,int *,char*,char const*) ;

int FUNC_2(
 git_remote **VAR_0,
 git_repository *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 void *VAR_4)
{
 FUNC_0(VAR_2);
 FUNC_0(VAR_4);

 return FUNC_1(VAR_0, VAR_1, "my_origin", VAR_3);
}
