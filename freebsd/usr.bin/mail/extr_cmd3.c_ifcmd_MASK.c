
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;

int
FUNC_1(char **VAR_4)
{
 char *VAR_5;

 if (VAR_3 != VAR_0) {
  FUNC_0("Illegal nested \"if\"\n");
  return (1);
 }
 VAR_3 = VAR_0;
 VAR_5 = VAR_4[0];
 switch (*VAR_5) {
 case 'r': case 'R':
  VAR_3 = VAR_1;
  break;

 case 's': case 'S':
  VAR_3 = VAR_2;
  break;

 default:
  FUNC_0("Unrecognized if-keyword: \"%s\"\n", VAR_5);
  return (1);
 }
 return (0);
}
