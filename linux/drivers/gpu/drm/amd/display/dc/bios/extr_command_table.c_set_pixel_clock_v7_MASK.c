
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ SET_GENLOCK_REF_DIV_SRC; scalar_t__ SET_XTALIN_REF_SRC; scalar_t__ SUPPORT_YUV_420; scalar_t__ PROGRAM_PHY_PLL_ONLY; scalar_t__ SET_EXTERNAL_REF_DIV_SRC; scalar_t__ FORCE_PROGRAMMING_OF_PLL; } ;
struct bp_pixel_clock_parameters {scalar_t__ signal_type; TYPE_2__ flags; int color_depth; int target_pixel_clock_100hz; int encoder_object_id; int controller_id; int pll_id; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef int clk ;
struct TYPE_8__ {int ucMiscInfo; void* ucDeepColorRatio; int ulPixelClock; void* ucEncoderMode; int ucTransmitterID; void* ucPpll; void* ucCRTC; } ;
struct TYPE_6__ {scalar_t__ (* transmitter_color_depth_to_atom ) (int ) ;scalar_t__ (* encoder_mode_bp_to_atom ) (scalar_t__,int) ;int (* encoder_id_to_atom ) (int ) ;scalar_t__ (* controller_id_to_atom ) (int ,void**) ;scalar_t__ (* clock_source_id_to_atom ) (int ,scalar_t__*) ;} ;
typedef TYPE_3__ PIXEL_CLOCK_PARAMETERS_V7 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,void**) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static enum bp_result FUNC_9(
 struct bios_parser *VAR_11,
 struct bp_pixel_clock_parameters *VAR_12)
{
 enum bp_result VAR_13 = VAR_0;
 PIXEL_CLOCK_PARAMETERS_V7 VAR_14;
 uint8_t VAR_15;
 uint32_t VAR_16;

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));

 if (VAR_11->cmd_helper->clock_source_id_to_atom(VAR_12->pll_id, &VAR_16)
   && VAR_11->cmd_helper->controller_id_to_atom(VAR_12->controller_id, &VAR_15)) {
  VAR_14.ucCRTC = VAR_15;
  VAR_14.ucPpll = (uint8_t) VAR_16;
  VAR_14.ucTransmitterID = VAR_11->cmd_helper->encoder_id_to_atom(FUNC_2(VAR_12->encoder_object_id));
  VAR_14.ucEncoderMode = (uint8_t) VAR_11->cmd_helper->encoder_mode_bp_to_atom(VAR_12->signal_type, 0);

  VAR_14.ulPixelClock = FUNC_1(VAR_12->target_pixel_clock_100hz);

  VAR_14.ucDeepColorRatio = (uint8_t) VAR_11->cmd_helper->transmitter_color_depth_to_atom(VAR_12->color_depth);

  if (VAR_12->flags.FORCE_PROGRAMMING_OF_PLL)
   VAR_14.ucMiscInfo |= VAR_3;

  if (VAR_12->flags.SET_EXTERNAL_REF_DIV_SRC)
   VAR_14.ucMiscInfo |= VAR_5;

  if (VAR_12->flags.PROGRAM_PHY_PLL_ONLY)
   VAR_14.ucMiscInfo |= VAR_4;

  if (VAR_12->flags.SUPPORT_YUV_420)
   VAR_14.ucMiscInfo |= VAR_8;

  if (VAR_12->flags.SET_XTALIN_REF_SRC)
   VAR_14.ucMiscInfo |= VAR_7;

  if (VAR_12->flags.SET_GENLOCK_REF_DIV_SRC)
   VAR_14.ucMiscInfo |= VAR_6;

  if (VAR_12->signal_type == VAR_9)
   VAR_14.ucMiscInfo |= VAR_2;

  if (FUNC_0(VAR_10, VAR_14))
   VAR_13 = VAR_1;
 }
 return VAR_13;
}
