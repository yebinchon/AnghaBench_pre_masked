
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t const) ;
 size_t FUNC_2 (char const*) ;

int FUNC_3(
 git_oid *VAR_1, const char **VAR_2,
 const char *VAR_3, const char *VAR_4)
{
 const size_t VAR_5 = VAR_0;
 const size_t VAR_6 = FUNC_2(VAR_4);

 const char *VAR_7 = *VAR_2;

 if (VAR_7 + (VAR_6 + VAR_5 + 1) > VAR_3)
  return -1;

 if (FUNC_1(VAR_7, VAR_4, VAR_6) != 0)
  return -1;

 if (VAR_7[VAR_6 + VAR_5] != '\n')
  return -1;

 if (FUNC_0(VAR_1, VAR_7 + VAR_6) < 0)
  return -1;

 *VAR_2 = VAR_7 + (VAR_6 + VAR_5 + 1);

 return 0;
}
