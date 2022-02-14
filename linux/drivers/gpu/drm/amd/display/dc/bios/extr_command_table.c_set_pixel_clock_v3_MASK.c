
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_10__ {scalar_t__ USE_E_CLOCK_AS_SOURCE_FOR_D_CLOCK; scalar_t__ FORCE_PROGRAMMING_OF_PLL; } ;
struct bp_pixel_clock_parameters {scalar_t__ pll_id; int target_pixel_clock_100hz; scalar_t__ controller_id; TYPE_3__ flags; int signal_type; int encoder_object_id; scalar_t__ pixel_clock_post_divider; scalar_t__ fractional_feedback_divider; scalar_t__ feedback_divider; scalar_t__ reference_divider; } ;
struct bios_parser {TYPE_2__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef int allocation ;
struct TYPE_12__ {int ucMiscInfo; void* ucEncoderMode; int ucTransmitterId; } ;
struct TYPE_8__ {void* usPixelClock; void* ucPostDiv; void* ucFracFbDiv; void* usFbDiv; void* usRefDiv; int ucPpll; } ;
struct TYPE_11__ {TYPE_1__ sPCLKInput; } ;
struct TYPE_9__ {scalar_t__ (* encoder_mode_bp_to_atom ) (int ,int) ;int (* encoder_id_to_atom ) (int ) ;} ;
typedef TYPE_4__ SET_PIXEL_CLOCK_PS_ALLOCATION ;
typedef TYPE_5__ PIXEL_CLOCK_PARAMETERS_V3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static enum bp_result FUNC_6(
 struct bios_parser *VAR_12,
 struct bp_pixel_clock_parameters *VAR_13)
{
 enum bp_result VAR_14 = VAR_3;
 PIXEL_CLOCK_PARAMETERS_V3 *VAR_15;
 SET_PIXEL_CLOCK_PS_ALLOCATION VAR_16;

 FUNC_3(&VAR_16, 0, sizeof(VAR_16));

 if (VAR_5 == VAR_13->pll_id)
  VAR_16.sPCLKInput.ucPpll = VAR_0;
 else if (VAR_6 == VAR_13->pll_id)
  VAR_16.sPCLKInput.ucPpll = VAR_1;
 else
  return VAR_2;

 VAR_16.sPCLKInput.usRefDiv =
   FUNC_1((uint16_t)VAR_13->reference_divider);
 VAR_16.sPCLKInput.usFbDiv =
   FUNC_1((uint16_t)VAR_13->feedback_divider);
 VAR_16.sPCLKInput.ucFracFbDiv =
   (uint8_t)VAR_13->fractional_feedback_divider;
 VAR_16.sPCLKInput.ucPostDiv =
   (uint8_t)VAR_13->pixel_clock_post_divider;


 VAR_16.sPCLKInput.usPixelClock =
   FUNC_1((uint16_t)(VAR_13->target_pixel_clock_100hz / 100));

 VAR_15 = (PIXEL_CLOCK_PARAMETERS_V3 *)&VAR_16.sPCLKInput;
 VAR_15->ucTransmitterId =
   VAR_12->cmd_helper->encoder_id_to_atom(
     FUNC_2(
       VAR_13->encoder_object_id));
 VAR_15->ucEncoderMode =
   (uint8_t)(VAR_12->cmd_helper->encoder_mode_bp_to_atom(
     VAR_13->signal_type, 0));

 if (VAR_13->flags.FORCE_PROGRAMMING_OF_PLL)
  VAR_15->ucMiscInfo |= VAR_9;

 if (VAR_13->flags.USE_E_CLOCK_AS_SOURCE_FOR_D_CLOCK)
  VAR_15->ucMiscInfo |= VAR_10;

 if (VAR_7 != VAR_13->controller_id)
  VAR_15->ucMiscInfo |= VAR_8;

 if (FUNC_0(VAR_11, VAR_16))
  VAR_14 = VAR_4;

 return VAR_14;
}
