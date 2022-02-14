
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int) ;
__attribute__((used)) static bool FUNC_2(
 uint32_t VAR_33,
 uint32_t VAR_34,
 enum gpio_id *VAR_35,
 uint32_t *VAR_36)
{
 switch (VAR_33) {

 case 136:
  *VAR_35 = VAR_26;
  switch (VAR_34) {
  case 163:
   *VAR_36 = VAR_8;
   return 1;
  case 162:
   *VAR_36 = VAR_9;
   return 1;
  case 161:
   *VAR_36 = VAR_10;
   return 1;
  case 160:
   *VAR_36 = VAR_11;
   return 1;
  case 159:
   *VAR_36 = VAR_12;
   return 1;
  case 158:
   *VAR_36 = VAR_13;
   return 1;
  case 157:
   *VAR_36 = VAR_14;
   return 1;
  default:
   FUNC_0();
   return 0;
  }
 break;

 case 134:
  *VAR_35 = VAR_29;
  switch (VAR_34) {
  case 152:
   *VAR_36 = VAR_20;
   return 1;
  case 151:
   *VAR_36 = VAR_21;
   return 1;
  case 150:
   *VAR_36 = VAR_22;
   return 1;
  case 149:
   *VAR_36 = VAR_23;
   return 1;
  case 148:
   *VAR_36 = VAR_24;
   return 1;
  case 147:
   *VAR_36 = VAR_25;
   return 1;
  default:
   FUNC_0();
   return 0;
  }
 break;

 case 129:
  *VAR_35 = VAR_30;
  switch (VAR_34) {
  case 146:
   *VAR_36 = VAR_31;
   return 1;
  case 145:
   *VAR_36 = VAR_32;
   return 1;
  default:
   FUNC_0();
   return 0;
  }
 break;

 case 135:
  *VAR_35 = VAR_28;
  switch (VAR_34) {
  case 156:
   *VAR_36 = VAR_16;
   return 1;
  case 155:
   *VAR_36 = VAR_17;
   return 1;
  case 154:
   *VAR_36 = VAR_18;
   return 1;
  case 153:
   *VAR_36 = VAR_19;
   return 1;
  default:
   FUNC_0();
   return 0;
  }
 break;

 case 128:
  *VAR_35 = VAR_27;
  *VAR_36 = FUNC_1(VAR_34);
  return (*VAR_36 <= VAR_15);




 case 144:
  *VAR_36 = VAR_0;
  return 1;
 case 143:
  *VAR_36 = VAR_1;
  return 1;
 case 142:
  *VAR_36 = VAR_2;
  return 1;
 case 141:
  *VAR_36 = VAR_3;
  return 1;
 case 140:
  *VAR_36 = VAR_4;
  return 1;
 case 139:
  *VAR_36 = VAR_5;
  return 1;
 case 138:
  *VAR_36 = VAR_6;
  return 1;

 case 133:
  *VAR_36 = VAR_7;
  return 1;

 case 130:
 case 132:
 case 131:
 case 137:
  return 0;

 default:
  FUNC_0();
  return 0;
 }
}
