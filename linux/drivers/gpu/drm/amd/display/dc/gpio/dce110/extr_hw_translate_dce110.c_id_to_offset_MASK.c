
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpio_pin_info {int mask; int mask_mask; int mask_en; int mask_y; void* offset; void* offset_mask; void* offset_en; void* offset_y; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;


 int FUNC_0 (int) ;
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
 void* VAR_21 ;
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

__attribute__((used)) static bool FUNC_1(
 enum gpio_id VAR_33,
 uint32_t VAR_34,
 struct gpio_pin_info *VAR_35)
{
 bool VAR_36 = 1;

 switch (VAR_33) {
 case 137:
  VAR_35->mask = VAR_1;
  switch (VAR_34) {
  case 163:
   VAR_35->offset = VAR_21;
  break;
  case 162:
   VAR_35->offset = VAR_22;
  break;
  case 161:
   VAR_35->offset = VAR_23;
  break;
  case 160:
   VAR_35->offset = VAR_24;
  break;
  case 159:
   VAR_35->offset = VAR_25;
  break;
  case 158:
   VAR_35->offset = VAR_26;
  break;
  case 157:
   VAR_35->offset = VAR_27;
  break;
  case 156:
   VAR_35->offset = VAR_31;
  break;
  default:
   FUNC_0(0);
   VAR_36 = 0;
  }
 break;
 case 138:
  VAR_35->mask = VAR_0;
  switch (VAR_34) {
  case 163:
   VAR_35->offset = VAR_21;
  break;
  case 162:
   VAR_35->offset = VAR_22;
  break;
  case 161:
   VAR_35->offset = VAR_23;
  break;
  case 160:
   VAR_35->offset = VAR_24;
  break;
  case 159:
   VAR_35->offset = VAR_25;
  break;
  case 158:
   VAR_35->offset = VAR_26;
  break;
  case 157:
   VAR_35->offset = VAR_27;
  break;
  case 156:
   VAR_35->offset = VAR_31;
  break;
  default:
   FUNC_0(0);
   VAR_36 = 0;
  }
 break;
 case 136:
  VAR_35->offset = VAR_28;
  switch (VAR_34) {
  case 155:
   VAR_35->mask = VAR_2;
  break;
  case 154:
   VAR_35->mask = VAR_3;
  break;
  case 153:
   VAR_35->mask = VAR_4;
  break;
  case 152:
   VAR_35->mask = VAR_5;
  break;
  case 151:
   VAR_35->mask = VAR_6;
  break;
  case 150:
   VAR_35->mask = VAR_7;
  break;
  case 149:
   VAR_35->mask = VAR_8;
  break;
  default:
   FUNC_0(0);
   VAR_36 = 0;
  }
 break;
 case 134:
  VAR_35->offset = VAR_30;
  switch (VAR_34) {
  case 144:
   VAR_35->mask = VAR_13;
  break;
  case 143:
   VAR_35->mask = VAR_14;
  break;
  case 142:
   VAR_35->mask = VAR_15;
  break;
  case 141:
   VAR_35->mask = VAR_16;
  break;
  case 140:
   VAR_35->mask = VAR_17;
  break;
  case 139:
   VAR_35->mask = VAR_18;
  break;
  default:
   FUNC_0(0);
   VAR_36 = 0;
  }
 break;
 case 133:
  switch (VAR_34) {
  case 131:
   VAR_35->offset = VAR_32;
   VAR_35->mask = VAR_19;
  break;
  case 129:
   VAR_35->offset = VAR_32;
   VAR_35->mask = VAR_20;
  break;
  case 130:
  case 128:
  default:
   FUNC_0(0);
   VAR_36 = 0;
  }
 break;
 case 135:
  switch (VAR_34) {
  case 148:
   VAR_35->offset = VAR_29;
   VAR_35->mask = VAR_9;
  break;
  case 147:
   VAR_35->offset = VAR_29;
   VAR_35->mask =
    VAR_10;
  break;
  case 146:
   VAR_35->offset = VAR_29;
   VAR_35->mask = VAR_11;
  break;
  case 145:
   VAR_35->offset = VAR_29;
   VAR_35->mask = VAR_12;
  break;
  default:
   FUNC_0(0);
   VAR_36 = 0;
  }
 break;
 case 132:
 default:
  FUNC_0(0);
  VAR_36 = 0;
 }

 if (VAR_36) {
  VAR_35->offset_y = VAR_35->offset + 2;
  VAR_35->offset_en = VAR_35->offset + 1;
  VAR_35->offset_mask = VAR_35->offset - 1;

  VAR_35->mask_y = VAR_35->mask;
  VAR_35->mask_en = VAR_35->mask;
  VAR_35->mask_mask = VAR_35->mask;
 }

 return VAR_36;
}
