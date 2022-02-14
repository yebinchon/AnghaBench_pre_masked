
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,char const*,char const**) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2, int *VAR_3)
{
 const char *VAR_4;
 char *VAR_5;

 if (!FUNC_1(VAR_1, VAR_2)) {
  *VAR_3 = 0;
  return 1;
 }
 if (!FUNC_0(VAR_1, VAR_2, &VAR_4) || *VAR_4 != '.')
  return 0;

 VAR_0 = 0;
 *VAR_3 = FUNC_2(VAR_4 + 1, &VAR_5, 10);
 if (VAR_0 || *VAR_5)
  return 0;
 return 1;
}
