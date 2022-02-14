
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



__attribute__((used)) static uint32_t FUNC_0(struct device_id VAR_7)
{
 enum dal_device_type VAR_8 = VAR_7.device_type;
 uint32_t VAR_9 = VAR_7.enum_id;

 switch (VAR_8) {
 case 128:
  switch (VAR_9) {
  case 1:
   return VAR_6;
  default:
   break;
  }
  break;
 case 129:
  switch (VAR_9) {
  case 1:
   return VAR_0;
  case 2:
   return VAR_1;
  case 3:
   return VAR_2;
  case 4:
   return VAR_3;
  case 5:
   return VAR_4;
  case 6:
   return VAR_5;
  default:
   break;
  }
  break;
 default:
  break;
 };


 return 0;
}
