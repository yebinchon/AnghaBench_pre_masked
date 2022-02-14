
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;
typedef int phandle ;


 int FUNC_0 (unsigned long*) ;

inline phandle FUNC_1(int VAR_0)
{
 unsigned long VAR_1[5];
 phandle VAR_2;

 VAR_1[0] = (unsigned long) "instance-to-package";
 VAR_1[1] = 1;
 VAR_1[2] = 1;
 VAR_1[3] = (unsigned int) VAR_0;
 VAR_1[4] = (unsigned long) -1;

 FUNC_0(VAR_1);

 VAR_2 = (int) VAR_1[4];
 if ((s32)VAR_2 == -1)
  return 0;
 return VAR_2;
}
