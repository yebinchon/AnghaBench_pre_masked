
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (unsigned long*) ;

int
FUNC_2(phandle VAR_1, const char *VAR_2, char *VAR_3, int VAR_4)
{
 unsigned long VAR_5[8];

 if (VAR_4 == 0)
  return 0;
 if ((VAR_2 == 0) || (VAR_3 == 0))
  return 0;







 VAR_5[0] = (unsigned long) "setprop";
 VAR_5[1] = 4;
 VAR_5[2] = 1;
 VAR_5[3] = (unsigned int) VAR_1;
 VAR_5[4] = (unsigned long) VAR_2;
 VAR_5[5] = (unsigned long) VAR_3;
 VAR_5[6] = VAR_4;
 VAR_5[7] = (unsigned long) -1;

 FUNC_1(VAR_5);

 return (int) VAR_5[7];
}
