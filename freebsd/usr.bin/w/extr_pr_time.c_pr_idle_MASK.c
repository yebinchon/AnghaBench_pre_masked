
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (char*,...) ;

int
FUNC_1(time_t VAR_0)
{

 if (VAR_0 >= 36 * 3600) {
  int VAR_1 = VAR_0 / 86400;
  FUNC_0(" {:idle/%dday%s} ", VAR_1, VAR_1 > 1 ? "s" : " " );
  if (VAR_1 >= 100)
   return (2);
  if (VAR_1 >= 10)
   return (1);
 }


 else if (VAR_0 >= 3600)
  FUNC_0(" {:idle/%2d:%02d/} ",
      (int)(VAR_0 / 3600), (int)((VAR_0 % 3600) / 60));

 else if (VAR_0 / 60 == 0)
  FUNC_0("     - ");


 else
  FUNC_0("    {:idle/%2d} ", (int)(VAR_0 / 60));

 return (0);
}
