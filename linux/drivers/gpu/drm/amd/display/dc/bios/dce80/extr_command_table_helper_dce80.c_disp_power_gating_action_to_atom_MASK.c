
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum bp_pipe_control_action { ____Placeholder_bp_pipe_control_action } bp_pipe_control_action ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static uint8_t FUNC_1(
 enum bp_pipe_control_action VAR_3)
{
 uint8_t VAR_4 = 0;

 switch (VAR_3) {
 case 130:
  VAR_4 = VAR_0;
  break;
 case 129:
  VAR_4 = VAR_1;
  break;
 case 128:
  VAR_4 = VAR_2;
  break;
 default:
  FUNC_0();
  break;
 }

 return VAR_4;
}
