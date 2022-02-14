
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graphics_object_id {int id; int enum_id; } ;
typedef enum transmitter { ____Placeholder_transmitter } transmitter ;
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

__attribute__((used)) static enum transmitter FUNC_0(
 struct graphics_object_id VAR_11)
{
 switch (VAR_11.id) {
 case 133:
  switch (VAR_11.enum_id) {
  case 129:
   return VAR_3;
  case 128:
   return VAR_4;
  default:
   return VAR_10;
  }
 break;
 case 132:
  switch (VAR_11.enum_id) {
  case 129:
   return VAR_5;
  case 128:
   return VAR_6;
  default:
   return VAR_10;
  }
 break;
 case 131:
  switch (VAR_11.enum_id) {
  case 129:
   return VAR_7;
  case 128:
   return VAR_8;
  default:
   return VAR_10;
  }
 break;
 case 130:
  switch (VAR_11.enum_id) {
  case 129:
   return VAR_9;
  default:
   return VAR_10;
  }
 break;
 case 135:
  switch (VAR_11.enum_id) {
  case 129:
   return VAR_0;
  default:
   return VAR_10;
  }
 break;
 case 134:
  switch (VAR_11.enum_id) {
  case 129:
   return VAR_1;
  case 128:
   return VAR_2;
  default:
   return VAR_10;
  }
 break;
 default:
  return VAR_10;
 }
}
