
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char const*,int *,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,char const*) ;

__attribute__((used)) static int FUNC_5(
 git_repository *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 git_oid *VAR_4,
 git_oid *VAR_5)
{
 int VAR_6;
 git_reference *VAR_7 = ((void*)0);


 if (VAR_2[0] != '\0') {

  VAR_6 = FUNC_1(((void*)0), VAR_1, VAR_3, VAR_4,
          !FUNC_0(VAR_5), ((void*)0));
 } else {

  if ((VAR_6 = FUNC_4(&VAR_7, VAR_1, VAR_3)) < 0) {
   if (VAR_6 == VAR_0)
    VAR_6 = 0;
   return VAR_6;
  }

  VAR_6 = FUNC_2(VAR_7);
  FUNC_3(VAR_7);
 }

 return VAR_6;
}
