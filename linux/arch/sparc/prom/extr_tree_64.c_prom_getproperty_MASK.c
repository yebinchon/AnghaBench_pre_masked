
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle ;


 int FUNC_0 (unsigned long*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,char const*) ;

int FUNC_2(phandle VAR_1, const char *VAR_2,
       char *VAR_3, int VAR_4)
{
 unsigned long VAR_5[8];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if ((VAR_6 > VAR_4) || (VAR_6 == 0) || (VAR_6 == -1))
  return -1;

 VAR_5[0] = (unsigned long) VAR_0;
 VAR_5[1] = 4;
 VAR_5[2] = 1;
 VAR_5[3] = (unsigned int) VAR_1;
 VAR_5[4] = (unsigned long) VAR_2;
 VAR_5[5] = (unsigned long) VAR_3;
 VAR_5[6] = VAR_4;
 VAR_5[7] = (unsigned long) -1;

 FUNC_0(VAR_5);

 return (int) VAR_5[7];
}
