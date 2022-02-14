
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_odb_object ;
typedef int git_odb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int * FUNC_2 (int ,int const*) ;
 int FUNC_3 (char*,int const*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int const*,int) ;

int FUNC_8(git_odb_object **VAR_2, git_odb *VAR_3, const git_oid *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2 && VAR_3 && VAR_4);

 if (FUNC_5(VAR_4))
  return FUNC_1(VAR_0, "cannot read object");

 *VAR_2 = FUNC_2(FUNC_6(VAR_3), VAR_4);
 if (*VAR_2 != ((void*)0))
  return 0;

 VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4, 0);

 if (VAR_5 == VAR_0 && !FUNC_4(VAR_3))
  VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4, 1);

 if (VAR_5 == VAR_0)
  return FUNC_3("no match for id", VAR_4, VAR_1);

 return VAR_5;
}
