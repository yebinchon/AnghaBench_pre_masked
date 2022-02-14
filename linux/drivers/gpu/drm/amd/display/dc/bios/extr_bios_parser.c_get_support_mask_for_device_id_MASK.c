
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct device_id {int device_type; int enum_id; } ;
typedef enum dal_device_type { ____Placeholder_dal_device_type } dal_device_type ;


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






__attribute__((used)) static uint32_t FUNC_0(struct device_id VAR_12)
{
 enum dal_device_type VAR_13 = VAR_12.device_type;
 uint32_t VAR_14 = VAR_12.enum_id;

 switch (VAR_13) {
 case 129:
  switch (VAR_14) {
  case 1:
   return VAR_9;
  case 2:
   return VAR_10;
  default:
   break;
  }
  break;
 case 132:
  switch (VAR_14) {
  case 1:
   return VAR_0;
  case 2:
   return VAR_1;
  default:
   break;
  }
  break;
 case 130:
  switch (VAR_14) {
  case 1:
   return VAR_3;
  case 2:
   return VAR_4;
  case 3:
   return VAR_5;
  case 4:
   return VAR_6;
  case 5:
   return VAR_7;
  case 6:
   return VAR_8;
  default:
   break;
  }
  break;
 case 131:
  switch (VAR_14) {
  case 1:
   return VAR_2;
  default:
   break;
  }
  break;
 case 128:
  switch (VAR_14) {
  case 1:
   return VAR_11;
  default:
   break;
  }
  break;
 default:
  break;
 };


 return 0;
}
