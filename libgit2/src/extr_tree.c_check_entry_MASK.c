
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef scalar_t__ git_filemode_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int const*,int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(git_repository *VAR_1, const char *VAR_2, const git_oid *VAR_3, git_filemode_t VAR_4)
{
 if (!FUNC_5(VAR_4))
  return FUNC_3("failed to insert entry: invalid filemode for file", VAR_2);

 if (!FUNC_4(VAR_1, VAR_2))
  return FUNC_3("failed to insert entry: invalid name for a tree entry", VAR_2);

 if (FUNC_1(VAR_3))
  return FUNC_3("failed to insert entry: invalid null OID", VAR_2);

 if (VAR_4 != VAR_0 &&
     !FUNC_0(VAR_1, VAR_3, FUNC_2(VAR_4)))
  return FUNC_3("failed to insert entry: invalid object specified", VAR_2);

 return 0;
}
