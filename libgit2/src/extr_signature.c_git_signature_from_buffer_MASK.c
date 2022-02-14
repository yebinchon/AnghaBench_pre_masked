
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const**,char const*,int *,char) ;
 int FUNC_5 (char const*) ;

int FUNC_6(git_signature **VAR_0, const char *VAR_1)
{
 git_signature *VAR_2;
 const char *VAR_3;
 int VAR_4;

 FUNC_1(VAR_0 && VAR_1);

 *VAR_0 = ((void*)0);

 VAR_2 = FUNC_2(1, sizeof(git_signature));
 FUNC_0(VAR_2);

 VAR_3 = VAR_1 + FUNC_5(VAR_1);
 VAR_4 = FUNC_4(VAR_2, &VAR_1, VAR_3, ((void*)0), '\0');

 if (VAR_4)
  FUNC_3(VAR_2);
 else
  *VAR_0 = VAR_2;

 return VAR_4;
}
