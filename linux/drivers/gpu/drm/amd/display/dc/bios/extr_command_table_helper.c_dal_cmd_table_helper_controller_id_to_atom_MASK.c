
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum controller_id { ____Placeholder_controller_id } controller_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
bool FUNC_1(
 enum controller_id VAR_8,
 uint8_t *VAR_9)
{
 if (VAR_9 == ((void*)0)) {
  FUNC_0();
  return 0;
 }

 switch (VAR_8) {
 case 135:
  *VAR_9 = VAR_0;
  return 1;
 case 134:
  *VAR_9 = VAR_1;
  return 1;
 case 133:
  *VAR_9 = VAR_2;
  return 1;
 case 132:
  *VAR_9 = VAR_3;
  return 1;
 case 131:
  *VAR_9 = VAR_4;
  return 1;
 case 130:
  *VAR_9 = VAR_5;
  return 1;
 case 128:
  *VAR_9 = VAR_7;
  return 1;
 case 129:
  *VAR_9 = VAR_6;
  return 1;
 default:

  FUNC_0();
  return 0;
 }
}
