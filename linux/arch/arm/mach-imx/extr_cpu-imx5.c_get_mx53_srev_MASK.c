
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(void)
{
 u32 VAR_4 = FUNC_0("fsl,imx53-iim");

 switch (VAR_4) {
 case 0x0:
  return VAR_0;
 case 0x2:
  return VAR_1;
 case 0x3:
  return VAR_2;
 default:
  return VAR_3;
 }
}
