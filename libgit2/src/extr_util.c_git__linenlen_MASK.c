
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char,size_t) ;

size_t FUNC_1(const char *VAR_0, size_t VAR_1)
{
 char *VAR_2 = FUNC_0(VAR_0, '\n', VAR_1);
 return VAR_2 ? (size_t)(VAR_2 - VAR_0) + 1 : VAR_1;
}
