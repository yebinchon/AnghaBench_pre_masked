
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const,char const) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1)
{
 if ('0' <= *VAR_1 && *VAR_1 <= '9')
  return (*VAR_1 - '0');

 if ('A' <= *VAR_1 && *VAR_1 <= 'F')
  return (*VAR_1 - 'A' + 0xa);

 if ('a' <= *VAR_1 && *VAR_1 <= 'f')
  return (*VAR_1 - 'a' + 0xa);

 FUNC_1(VAR_0, "Invalid hex character: '%c' (%#x)", *VAR_1, *VAR_1);
 FUNC_0(255);
}
