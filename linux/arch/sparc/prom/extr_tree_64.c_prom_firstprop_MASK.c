
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;
typedef scalar_t__ phandle ;


 int FUNC_0 (unsigned long*) ;
 scalar_t__ VAR_0 ;

char *FUNC_1(phandle VAR_1, char *VAR_2)
{
 unsigned long VAR_3[7];

 *VAR_2 = 0;
 if ((s32)VAR_1 == -1)
  return VAR_2;

 VAR_3[0] = (unsigned long) VAR_0;
 VAR_3[1] = 3;
 VAR_3[2] = 1;
 VAR_3[3] = (unsigned int) VAR_1;
 VAR_3[4] = 0;
 VAR_3[5] = (unsigned long) VAR_2;
 VAR_3[6] = (unsigned long) -1;

 FUNC_0(VAR_3);

 return VAR_2;
}
