
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0)
{
 int VAR_1;

 VAR_1 = 0;
 while (*VAR_0) {
  switch (*VAR_0) {
  case ':':
   if (!VAR_1)
    goto breakbreak;
   else
    VAR_0++;
   break;
  case '\\':
   VAR_0++;
   if (FUNC_0(*VAR_0)) {
    while (FUNC_0(*VAR_0++))
     ;
   } else
    VAR_0++;
  case '"':
   VAR_1 = (VAR_1 ? 1 : 0);
   VAR_0++;
   break;
  default:
   VAR_0++;
   break;
  }
 }
breakbreak:
 if (*VAR_0 == ':')
  VAR_0++;
 return (VAR_0);
}
