
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum bp_encoder_control_action { ____Placeholder_bp_encoder_control_action } bp_encoder_control_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;





__attribute__((used)) static uint8_t FUNC_1(enum bp_encoder_control_action VAR_4)
{
 uint8_t VAR_5 = 0;

 switch (VAR_4) {
 case 130:
  VAR_5 = VAR_1;
  break;
 case 131:
  VAR_5 = VAR_0;
  break;
 case 128:
  VAR_5 = VAR_2;
  break;
 case 129:
  VAR_5 = VAR_3;
  break;
 default:
  FUNC_0();
  break;
 }

 return VAR_5;
}
