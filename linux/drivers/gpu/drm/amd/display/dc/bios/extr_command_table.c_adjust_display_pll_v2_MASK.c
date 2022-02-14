
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bp_adjust_pixel_clock_parameters {int pixel_clock; int signal_type; int encoder_object_id; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_4__ {scalar_t__ ucEncodeMode; int ucTransmitterID; int usPixelClock; int member_0; } ;
struct TYPE_3__ {scalar_t__ (* encoder_mode_bp_to_atom ) (int ,int) ;int (* encoder_id_to_atom ) (int ) ;} ;
typedef TYPE_2__ ADJUST_DISPLAY_PLL_PS_ALLOCATION ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static enum bp_result FUNC_4(
 struct bios_parser *VAR_1,
 struct bp_adjust_pixel_clock_parameters *VAR_2)
{
 enum bp_result VAR_3 = VAR_0;
 ADJUST_DISPLAY_PLL_PS_ALLOCATION VAR_4 = { 0 };



 uint32_t VAR_5 = VAR_2->pixel_clock / 10;

 VAR_4.usPixelClock = FUNC_0((uint16_t)(VAR_5));
 VAR_4.ucTransmitterID =
   VAR_1->cmd_helper->encoder_id_to_atom(
     FUNC_1(
       VAR_2->encoder_object_id));
 VAR_4.ucEncodeMode =
   (uint8_t)VAR_1->cmd_helper->encoder_mode_bp_to_atom(
     VAR_2->signal_type, 0);
 return VAR_3;
}
