
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int *,int const*,char const*,char const*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(
 git_repository *VAR_2,
 const git_oid *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 git_reference *VAR_6 = ((void*)0);
 int VAR_7;

 if (!FUNC_1(VAR_4, VAR_1))
  VAR_4 += FUNC_5(VAR_1);

 VAR_7 = FUNC_0(&VAR_6, VAR_2, VAR_3, VAR_4,
   VAR_5);

 if (!VAR_7)
  VAR_7 = FUNC_4(
   VAR_2, FUNC_3(VAR_6));

 FUNC_2(VAR_6);


 if (VAR_7 == VAR_0)
  VAR_7 = 0;

 return VAR_7;
}
