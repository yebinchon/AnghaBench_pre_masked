
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_1 = 0;
 VAR_2 = *VAR_0 == '-';
 if (VAR_2)
  VAR_0++;
 switch (FUNC_2(VAR_0)) {
 default:
  FUNC_1(1, "Invalid offset spec, must be [-][[HH]MM]SS");

 case 6:
  VAR_1 = FUNC_0(VAR_0);

 case 4:
  VAR_1 = VAR_1 * 60 + FUNC_0(VAR_0);

 case 2:
  VAR_1 = VAR_1 * 60 + FUNC_0(VAR_0);
 }
 if (VAR_2)
  return (-VAR_1);
 else
  return (VAR_1);
}
