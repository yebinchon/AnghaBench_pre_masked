
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
__attribute__((used)) static unsigned short FUNC_0(unsigned int VAR_1,
        unsigned short VAR_2)
{
 unsigned short VAR_3;

 switch (VAR_1) {
 case 139:
 case 137:
  VAR_3 = 0x80 | (VAR_2 & 0x7f);
  break;
 case 138:
 case 136:
  VAR_3 = VAR_2 & 0x1f;
  break;
 case 130:
 case 128:
 case 129:
  VAR_3 = 0x180 | (VAR_2 & 0x1f);
  break;
 case 131:
  VAR_3 = 0x140 | ((VAR_2 & 0x3) << 1);
  break;
 case 142:
 case 140:
 case 141:
  VAR_3 = 0x1c0 | (VAR_2 & 0x1f);
  break;
 case 143:
  VAR_3 = 0x100 | ((VAR_2 & 0x3) << 1);
  break;
 case 133:
  VAR_3 = 0x280 | (VAR_2 & 0x1f);
  break;
 case 135:
  VAR_3 = 0x200;
  break;
 case 134:
  VAR_3 = 0x220;
  break;
 case 132:
  VAR_3 = 0x300 | (VAR_2 & 0xff);
  break;
 default:
  VAR_3 = VAR_0;
  break;
 }
 return VAR_3;
}
