
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



 int FUNC_0 (char*,int) ;
__attribute__((used)) static bool FUNC_1(u32 VAR_0)
{

 if (VAR_0 >= 0x28000)
  return 1;


 if (VAR_0 >= 0xB000 && VAR_0 < 0xC000)
  return 1;


 switch (VAR_0) {
 case 153:
 case 154:
 case 128:
 case 139:
 case 138:
 case 137:
 case 136:
 case 131:
 case 134:
 case 133:
 case 132:
 case 129:
 case 135:
 case 130:
 case 152:
 case 149:
 case 150:
 case 151:
 case 142:
 case 145:
 case 144:
 case 143:
 case 146:
 case 148:
 case 147:
 case 141:
 case 140:
  return 1;
 default:
  FUNC_0("Invalid register 0x%x in CS\n", VAR_0);
  return 0;
 }
}
