
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpio_pin_info {int mask; int mask_y; int mask_en; int mask_mask; void* offset; void* offset_mask; void* offset_en; void* offset_y; } ;
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
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;

__attribute__((used)) static bool FUNC_1(
 enum gpio_id VAR_35,
 uint32_t VAR_36,
 struct gpio_pin_info *VAR_37)
{
 bool VAR_38 = 1;

 switch (VAR_35) {
 case 138:
  VAR_37->mask = VAR_1;
  switch (VAR_36) {
  case 164:
   VAR_37->offset = VAR_22;
  break;
  case 163:
   VAR_37->offset = VAR_23;
  break;
  case 162:
   VAR_37->offset = VAR_24;
  break;
  case 161:
   VAR_37->offset = VAR_25;
  break;
  case 160:
   VAR_37->offset = VAR_26;
  break;
  case 159:
   VAR_37->offset = VAR_27;
  break;
  case 158:
   VAR_37->offset = VAR_28;
  break;
  case 157:
   VAR_37->offset = VAR_32;
  break;
  default:
   FUNC_0();
   VAR_38 = 0;
  }
 break;
 case 139:
  VAR_37->mask = VAR_0;
  switch (VAR_36) {
  case 164:
   VAR_37->offset = VAR_22;
  break;
  case 163:
   VAR_37->offset = VAR_23;
  break;
  case 162:
   VAR_37->offset = VAR_24;
  break;
  case 161:
   VAR_37->offset = VAR_25;
  break;
  case 160:
   VAR_37->offset = VAR_26;
  break;
  case 159:
   VAR_37->offset = VAR_27;
  break;
  case 158:
   VAR_37->offset = VAR_28;
  break;
  case 157:
   VAR_37->offset = VAR_32;
  break;
  default:
   FUNC_0();
   VAR_38 = 0;
  }
 break;
 case 137:
  VAR_37->offset = VAR_29;
  switch (VAR_36) {
  case 156:
   VAR_37->mask = VAR_2;
  break;
  case 155:
   VAR_37->mask = VAR_3;
  break;
  case 154:
   VAR_37->mask = VAR_4;
  break;
  case 153:
   VAR_37->mask = VAR_5;
  break;
  case 152:
   VAR_37->mask = VAR_6;
  break;
  case 151:
   VAR_37->mask = VAR_7;
  break;
  case 150:
   VAR_37->mask = VAR_8;
  break;
  default:
   FUNC_0();
   VAR_38 = 0;
  }
 break;
 case 134:
  VAR_37->offset = VAR_31;
  switch (VAR_36) {
  case 145:
   VAR_37->mask = VAR_13;
  break;
  case 144:
   VAR_37->mask = VAR_14;
  break;
  case 143:
   VAR_37->mask = VAR_15;
  break;
  case 142:
   VAR_37->mask = VAR_16;
  break;
  case 141:
   VAR_37->mask = VAR_17;
  break;
  case 140:
   VAR_37->mask = VAR_18;
  break;
  default:
   FUNC_0();
   VAR_38 = 0;
  }
 break;
 case 133:
  switch (VAR_36) {
  case 131:
   VAR_37->offset = VAR_33;
   VAR_37->mask = VAR_19;
  break;
  case 129:
   VAR_37->offset = VAR_33;
   VAR_37->mask = VAR_20;
  break;
  case 130:
  case 128:
  default:
   FUNC_0();
   VAR_38 = 0;
  }
 break;
 case 135:
  switch (VAR_36) {
  case 149:
   VAR_37->offset = VAR_30;
   VAR_37->mask = VAR_9;
  break;
  case 148:
   VAR_37->offset = VAR_30;
   VAR_37->mask =
    VAR_10;
  break;
  case 147:
   VAR_37->offset = VAR_30;
   VAR_37->mask = VAR_11;
  break;
  case 146:
   VAR_37->offset = VAR_30;
   VAR_37->mask = VAR_12;
  break;
  default:
   FUNC_0();
   VAR_38 = 0;
  }
 break;
 case 136:
  VAR_37->offset = VAR_34;
  VAR_37->mask = (1 << VAR_36);
  VAR_38 = (VAR_37->mask <= VAR_21);
 break;
 case 132:
 default:
  FUNC_0();
  VAR_38 = 0;
 }

 if (VAR_38) {
  VAR_37->offset_y = VAR_37->offset + 2;
  VAR_37->offset_en = VAR_37->offset + 1;
  VAR_37->offset_mask = VAR_37->offset - 1;

  VAR_37->mask_y = VAR_37->mask;
  VAR_37->mask_en = VAR_37->mask;
  VAR_37->mask_mask = VAR_37->mask;
 }

 return VAR_38;
}
