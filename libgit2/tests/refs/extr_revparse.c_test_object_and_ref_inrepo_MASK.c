
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 char const* FUNC_8 (int *) ;
 int FUNC_9 (int **,int **,int *,char const*) ;

__attribute__((used)) static void FUNC_10(
 const char *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 git_repository *VAR_3,
 bool VAR_4)
{
 char VAR_5[64] = {0};
 git_object *VAR_6 = ((void*)0);
 git_reference *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_8 = FUNC_9(&VAR_6, &VAR_7, VAR_3, VAR_0);

 if (VAR_1 != ((void*)0)) {
  FUNC_3(VAR_8);
  FUNC_6(VAR_5, FUNC_5(VAR_6));
  FUNC_1(VAR_5, VAR_1);
 } else
  FUNC_2(VAR_8);

 if (VAR_4) {
  if (VAR_2 == ((void*)0))
   FUNC_0(((void*)0) == VAR_7);
  else
   FUNC_1(VAR_2, FUNC_8(VAR_7));
 }

 FUNC_4(VAR_6);
 FUNC_7(VAR_7);
}
