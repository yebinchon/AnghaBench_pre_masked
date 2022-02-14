
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;

int
FUNC_0(const char *VAR_3)
{
 int VAR_4;
 char *VAR_5;

 for (VAR_4 = 0, VAR_5 = VAR_2; *VAR_3 && (*VAR_3 &~ ' ') == (*VAR_5++ &~ ' ');
     ++VAR_3, ++VAR_4)
  continue;
 if (!*VAR_3) {
  VAR_2 += VAR_4;
  return (VAR_1);
 }
 return (VAR_0);
}
