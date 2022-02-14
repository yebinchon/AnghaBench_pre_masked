
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graphics_object_id {scalar_t__ type; int id; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static enum signal_type FUNC_0(
 struct graphics_object_id VAR_10,
 struct graphics_object_id VAR_11)
{
 if (VAR_11.type == VAR_0) {
  switch (VAR_11.id) {
  case 135:
   switch (VAR_10.id) {
   case 131:
   case 129:
   case 130:
   case 128:
    return VAR_9;
   default:
    return VAR_4;
   }
  break;
  case 140:
  {
   switch (VAR_10.id) {
   case 131:
   case 129:
   case 130:
   case 128:
    return VAR_9;
   default:
    return VAR_3;
   }
  }
  break;
  case 136:
   return VAR_4;
  case 141:
   return VAR_3;
  case 134:
   return VAR_9;
  case 138:
   return VAR_6;
  case 137:
   return VAR_7;
  case 142:
   return VAR_2;
  case 139:
   return VAR_5;
  default:
   return VAR_8;
  }
 } else if (VAR_11.type == VAR_1) {
  switch (VAR_11.id) {
  case 133:
  case 132:
   return VAR_2;
  default:
   return VAR_8;
  }
 }

 return VAR_8;
}
