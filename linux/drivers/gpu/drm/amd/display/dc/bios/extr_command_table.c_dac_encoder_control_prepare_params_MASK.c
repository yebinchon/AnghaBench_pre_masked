
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int usPixelClock; int ucAction; int ucDacStandard; } ;
typedef TYPE_1__ DAC_ENCODER_CONTROL_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(
 DAC_ENCODER_CONTROL_PS_ALLOCATION *VAR_2,
 bool VAR_3,
 uint32_t VAR_4,
 uint8_t VAR_5)
{
 VAR_2->ucDacStandard = VAR_5;
 if (VAR_3)
  VAR_2->ucAction = VAR_1;
 else
  VAR_2->ucAction = VAR_0;




 VAR_2->usPixelClock = FUNC_0((uint16_t)(VAR_4 / 10));
}
