
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio {int id; int en; } ;
typedef enum sync_source { ____Placeholder_sync_source } sync_source ;
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

enum sync_source FUNC_0(
 const struct gpio *VAR_17)
{
 switch (VAR_17->id) {
 case 135:
  switch (VAR_17->en) {
  case 147:
   return VAR_4;
  case 146:
   return VAR_5;
  case 145:
   return VAR_6;
  case 144:
   return VAR_7;
  case 143:
   return VAR_8;
  case 142:
   return VAR_9;
  default:
   return VAR_16;
  }
 break;
 case 132:
  switch (VAR_17->en) {
  case 131:
   return VAR_12;
  case 129:
   return VAR_14;
  case 130:
   return VAR_13;
  case 128:
   return VAR_15;
  default:
   return VAR_16;
  }
 break;
 case 133:
  switch (VAR_17->en) {
  case 137:
   return VAR_10;
  case 136:
   return VAR_11;
  default:
   return VAR_16;
  }
 break;
 case 134:
  switch (VAR_17->en) {
  case 141:
   return VAR_0;
  case 140:
   return VAR_1;
  case 139:
   return VAR_2;
  case 138:
   return VAR_3;
  default:
   return VAR_16;
  }
 break;
 default:
  return VAR_16;
 }
}
