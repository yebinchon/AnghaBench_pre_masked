
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (char*,...) ;
__attribute__((used)) static u32 FUNC_1(u8 VAR_0, u8 *VAR_1)
{
 switch (VAR_0) {
 case 129:
 case 132:
  return 1;
 case 128:
 case 131:
  return 2;
 case 130:
 case 133:
  return VAR_1[1] + VAR_1[2] * 16;
 case 134:
  FUNC_0("type is 0x02, try again\n");
  break;
 default:
  FUNC_0("type(0x%x) not recognized\n", VAR_0);
  break;
 }

 return 0;
}
