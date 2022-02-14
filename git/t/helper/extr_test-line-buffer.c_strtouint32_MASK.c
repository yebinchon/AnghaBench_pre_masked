
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint32_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static uint32_t FUNC_2(const char *VAR_0)
{
 char *VAR_1;
 uintmax_t VAR_2 = FUNC_1(VAR_0, &VAR_1, 10);
 if (*VAR_0 == '\0' || *VAR_1 != '\0')
  FUNC_0("invalid count: %s", VAR_0);
 return (uint32_t) VAR_2;
}
