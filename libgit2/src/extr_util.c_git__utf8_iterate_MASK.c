
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int const*,int) ;

int FUNC_1(const uint8_t *VAR_0, int VAR_1, int32_t *VAR_2)
{
 int VAR_3;
 int32_t VAR_4 = -1;

 *VAR_2 = -1;
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return -1;

 switch (VAR_3) {
  case 1:
   VAR_4 = VAR_0[0];
   break;
  case 2:
   VAR_4 = ((VAR_0[0] & 0x1F) << 6) + (VAR_0[1] & 0x3F);
   if (VAR_4 < 0x80) VAR_4 = -1;
   break;
  case 3:
   VAR_4 = ((VAR_0[0] & 0x0F) << 12) + ((VAR_0[1] & 0x3F) << 6)
    + (VAR_0[2] & 0x3F);
   if (VAR_4 < 0x800 || (VAR_4 >= 0xD800 && VAR_4 < 0xE000) ||
     (VAR_4 >= 0xFDD0 && VAR_4 < 0xFDF0)) VAR_4 = -1;
   break;
  case 4:
   VAR_4 = ((VAR_0[0] & 0x07) << 18) + ((VAR_0[1] & 0x3F) << 12)
    + ((VAR_0[2] & 0x3F) << 6) + (VAR_0[3] & 0x3F);
   if (VAR_4 < 0x10000 || VAR_4 >= 0x110000) VAR_4 = -1;
   break;
 }

 if (VAR_4 < 0 || ((VAR_4 & 0xFFFF) >= 0xFFFE))
  return -1;

 *VAR_2 = VAR_4;
 return VAR_3;
}
