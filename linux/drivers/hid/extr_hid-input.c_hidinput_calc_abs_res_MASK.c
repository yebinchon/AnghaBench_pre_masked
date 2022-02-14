
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_field {int unit_exponent; int logical_maximum; int logical_minimum; int physical_maximum; int physical_minimum; int unit; } ;
typedef int __u16 ;
typedef int __s32 ;
 int FUNC_0 (int,int) ;

__s32 FUNC_1(const struct hid_field *VAR_0, __u16 VAR_1)
{
 __s32 VAR_2 = VAR_0->unit_exponent;
 __s32 VAR_3 = VAR_0->logical_maximum -
     VAR_0->logical_minimum;
 __s32 VAR_4 = VAR_0->physical_maximum -
     VAR_0->physical_minimum;
 __s32 VAR_5;


 if (VAR_3 <= 0 || VAR_4 <= 0)
  return 0;





 switch (VAR_1) {
 case 130:
 case 129:
 case 128:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
  if (VAR_0->unit == 0x11) {

   VAR_2 += 1;
  } else if (VAR_0->unit == 0x13) {

   VAR_5 = VAR_4;
   VAR_4 *= 254;
   if (VAR_4 < VAR_5)
    return 0;
   VAR_2 -= 1;
  } else {
   return 0;
  }
  break;

 case 136:
 case 135:
 case 134:
 case 131:
 case 133:
 case 132:
  if (VAR_0->unit == 0x14) {

   VAR_5 = VAR_3;
   VAR_3 *= 573;
   if (VAR_3 < VAR_5)
    return 0;
   VAR_2 += 1;
  } else if (VAR_0->unit != 0x12) {
   return 0;
  }
  break;

 default:
  return 0;
 }


 for (; VAR_2 < 0; VAR_2++) {
  VAR_5 = VAR_3;
  VAR_3 *= 10;
  if (VAR_3 < VAR_5)
   return 0;
 }

 for (; VAR_2 > 0; VAR_2--) {
  VAR_5 = VAR_4;
  VAR_4 *= 10;
  if (VAR_4 < VAR_5)
   return 0;
 }


 return FUNC_0(VAR_3, VAR_4);
}
