
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct wacom_wac {scalar_t__ pad_input; scalar_t__ touch_input; scalar_t__ pen_input; int * data; TYPE_1__ features; } ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct wacom_wac*) ;
 int FUNC_2 (struct wacom_wac*,size_t) ;
 int FUNC_3 (struct wacom_wac*) ;
 int FUNC_4 (struct wacom_wac*,size_t) ;
 int FUNC_5 (struct wacom_wac*) ;
 int FUNC_6 (struct wacom_wac*) ;
 int FUNC_7 (struct wacom_wac*) ;
 int FUNC_8 (struct wacom_wac*,size_t) ;
 int FUNC_9 (struct wacom_wac*) ;
 int FUNC_10 (struct wacom_wac*,size_t) ;
 int FUNC_11 (struct wacom_wac*) ;
 int FUNC_12 (struct wacom_wac*) ;
 int FUNC_13 (struct wacom_wac*) ;
 int FUNC_14 (struct wacom_wac*,size_t) ;
 int FUNC_15 (struct wacom_wac*,size_t) ;
 int FUNC_16 (struct wacom_wac*,size_t) ;
 int FUNC_17 (struct wacom_wac*,size_t) ;
 int FUNC_18 (struct wacom_wac*,size_t) ;

void FUNC_19(struct wacom_wac *VAR_3, size_t VAR_4)
{
 bool VAR_5;

 switch (VAR_3->features.type) {
 case 145:
  VAR_5 = FUNC_11(VAR_3);
  break;

 case 144:
  VAR_5 = FUNC_12(VAR_3);
  break;

 case 130:
 case 169:
 case 168:
 case 129:
  VAR_5 = FUNC_7(VAR_3);
  break;

 case 143:
  VAR_5 = FUNC_13(VAR_3);
  break;

 case 172:
  VAR_5 = FUNC_5(VAR_3);
  break;

 case 171:
 case 170:
  VAR_5 = FUNC_6(VAR_3);
  break;

 case 167:
 case 164:
 case 166:
 case 165:
 case 161:
 case 163:
 case 162:
 case 176:
 case 131:
 case 138:
 case 137:
 case 136:
 case 135:
 case 133:
 case 173:
 case 174:
 case 175:
  VAR_5 = FUNC_9(VAR_3);
  break;

 case 160:
  VAR_5 = FUNC_8(VAR_3, VAR_4);
  break;

 case 134:
 case 132:
  VAR_5 = FUNC_1(VAR_3);
  break;

 case 157:
 case 159:
 case 158:
 case 149:
 case 150:
 case 151:
  if (VAR_4 == VAR_0)
   VAR_5 = FUNC_3(VAR_3);
  else if (VAR_3->data[0] == VAR_2)
   VAR_5 = FUNC_16(VAR_3, VAR_4);
  else
   VAR_5 = FUNC_9(VAR_3);
  break;

 case 152:
 case 153:
 case 154:
  VAR_5 = FUNC_10(VAR_3, VAR_4);
  break;

 case 141:
 case 139:
 case 140:
 case 148:
 case 147:
 case 146:
  VAR_5 = FUNC_17(VAR_3, VAR_4);
  break;

 case 178:
 case 179:
 case 177:
 case 156:
 case 155:
  if (VAR_3->data[0] == VAR_2)
   VAR_5 = FUNC_16(VAR_3, VAR_4);
  else
   VAR_5 = FUNC_4(VAR_3, VAR_4);
  break;

 case 180:
  VAR_5 = FUNC_2(VAR_3, VAR_4);
  break;

 case 128:
  VAR_5 = FUNC_18(VAR_3, VAR_4);
  break;

 case 142:
  VAR_5 = 0;
  if (VAR_3->data[0] == VAR_1)
   FUNC_15(VAR_3, VAR_4);
  else
   VAR_5 = FUNC_14(VAR_3, VAR_4);
  break;

 default:
  VAR_5 = 0;
  break;
 }

 if (VAR_5) {
  if (VAR_3->pen_input)
   FUNC_0(VAR_3->pen_input);
  if (VAR_3->touch_input)
   FUNC_0(VAR_3->touch_input);
  if (VAR_3->pad_input)
   FUNC_0(VAR_3->pad_input);
 }
}
