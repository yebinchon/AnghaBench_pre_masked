
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, int64_t *VAR_2)
{
 char *VAR_3;

 if (VAR_1 == ((void*)0))
  return (VAR_0);

 *VAR_2 = FUNC_1(VAR_1, &VAR_3, 10);
 if ((size_t)(VAR_3 - VAR_1) != FUNC_0(VAR_1))
  return (VAR_0);

 return (0);
}
