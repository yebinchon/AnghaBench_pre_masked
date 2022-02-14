
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bp_adjust_pixel_clock_parameters {int pixel_clock; scalar_t__ signal_type; int ss_enable; int pixel_clock_post_divider; int reference_divider; int adjusted_pixel_clock; int encoder_object_id; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef int params ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_9__ {int ucPostDiv; int ucRefDiv; int ulDispPllFreq; } ;
struct TYPE_8__ {int ucDispPllConfig; scalar_t__ ucEncodeMode; int ucTransmitterID; int usPixelClock; } ;
struct TYPE_10__ {TYPE_3__ sOutput; TYPE_2__ sInput; } ;
struct TYPE_7__ {scalar_t__ (* encoder_mode_bp_to_atom ) (scalar_t__,int) ;int (* encoder_id_to_atom ) (int ) ;} ;
typedef TYPE_4__ ADJUST_DISPLAY_PLL_PS_ALLOCATION_V3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,TYPE_4__) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static enum bp_result FUNC_9(
 struct bios_parser *VAR_6,
 struct bp_adjust_pixel_clock_parameters *VAR_7)
{
 enum bp_result VAR_8 = VAR_1;
 ADJUST_DISPLAY_PLL_PS_ALLOCATION_V3 VAR_9;
 uint32_t VAR_10 = VAR_7->pixel_clock / 10;

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));



 VAR_9.sInput.usPixelClock = FUNC_2((uint16_t)VAR_10);
 VAR_9.sInput.ucTransmitterID =
   VAR_6->cmd_helper->encoder_id_to_atom(
     FUNC_3(
       VAR_7->encoder_object_id));
 VAR_9.sInput.ucEncodeMode =
   (uint8_t)VAR_6->cmd_helper->encoder_mode_bp_to_atom(
     VAR_7->signal_type, 0);

 if (VAR_7->ss_enable == 1)
  VAR_9.sInput.ucDispPllConfig |= VAR_4;

 if (VAR_7->signal_type == VAR_5)
  VAR_9.sInput.ucDispPllConfig |= VAR_3;

 if (FUNC_1(VAR_0, VAR_9)) {



  uint64_t VAR_11 =
    (uint64_t)FUNC_5(VAR_9.sOutput.ulDispPllFreq);
  uint64_t VAR_12 = (uint64_t)VAR_7->pixel_clock;

  if (VAR_10 != 0) {
   VAR_7->adjusted_pixel_clock =
     FUNC_4(VAR_12 * VAR_11,
       VAR_10);
  } else {
   VAR_7->adjusted_pixel_clock = 0;
   FUNC_0();
  }

  VAR_7->reference_divider = VAR_9.sOutput.ucRefDiv;
  VAR_7->pixel_clock_post_divider = VAR_9.sOutput.ucPostDiv;

  VAR_8 = VAR_2;
 }

 return VAR_8;
}
