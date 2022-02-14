
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
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {scalar_t__ SET_EXTERNAL_REF_DIV_SRC; scalar_t__ FORCE_PROGRAMMING_OF_PLL; } ;
struct bp_pixel_clock_parameters {int fractional_feedback_divider; int target_pixel_clock_100hz; TYPE_3__ flags; int signal_type; int encoder_object_id; scalar_t__ pixel_clock_post_divider; scalar_t__ feedback_divider; scalar_t__ reference_divider; int controller_id; int pll_id; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef int clk ;
struct TYPE_9__ {void* ulPixelClock; void* ucCRTC; } ;
struct TYPE_11__ {int ucMiscInfo; TYPE_2__ ulCrtcPclkFreq; void* ucEncoderMode; int ucTransmitterID; void* ucPostDiv; void* ulFbDivDecFrac; int usFbDiv; void* ucRefDiv; void* ucPpll; } ;
struct TYPE_12__ {TYPE_4__ sPCLKInput; } ;
struct TYPE_8__ {scalar_t__ (* encoder_mode_bp_to_atom ) (int ,int) ;int (* encoder_id_to_atom ) (int ) ;scalar_t__ (* controller_id_to_atom ) (int ,void**) ;scalar_t__ (* clock_source_id_to_atom ) (int ,scalar_t__*) ;} ;
typedef TYPE_5__ SET_PIXEL_CLOCK_PS_ALLOCATION_V6 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_5__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,void**) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int) ;

__attribute__((used)) static enum bp_result FUNC_9(
 struct bios_parser *VAR_5,
 struct bp_pixel_clock_parameters *VAR_6)
{
 enum bp_result VAR_7 = VAR_0;
 SET_PIXEL_CLOCK_PS_ALLOCATION_V6 VAR_8;
 uint8_t VAR_9;
 uint32_t VAR_10;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 if (VAR_5->cmd_helper->clock_source_id_to_atom(VAR_6->pll_id, &VAR_10)
   && VAR_5->cmd_helper->controller_id_to_atom(
     VAR_6->controller_id, &VAR_9)) {
  VAR_8.sPCLKInput.ulCrtcPclkFreq.ucCRTC = VAR_9;
  VAR_8.sPCLKInput.ucPpll = (uint8_t) VAR_10;
  VAR_8.sPCLKInput.ucRefDiv =
    (uint8_t) VAR_6->reference_divider;
  VAR_8.sPCLKInput.usFbDiv =
    FUNC_1((uint16_t) VAR_6->feedback_divider);
  VAR_8.sPCLKInput.ulFbDivDecFrac =
    FUNC_2(VAR_6->fractional_feedback_divider);
  VAR_8.sPCLKInput.ucPostDiv =
    (uint8_t) VAR_6->pixel_clock_post_divider;
  VAR_8.sPCLKInput.ucTransmitterID =
    VAR_5->cmd_helper->encoder_id_to_atom(
      FUNC_3(
        VAR_6->encoder_object_id));
  VAR_8.sPCLKInput.ucEncoderMode =
    (uint8_t) VAR_5->cmd_helper->encoder_mode_bp_to_atom(
      VAR_6->signal_type, 0);


  VAR_8.sPCLKInput.ulCrtcPclkFreq.ulPixelClock =
    FUNC_2(VAR_6->target_pixel_clock_100hz / 100);

  if (VAR_6->flags.FORCE_PROGRAMMING_OF_PLL) {
   VAR_8.sPCLKInput.ucMiscInfo |=
     VAR_2;
  }

  if (VAR_6->flags.SET_EXTERNAL_REF_DIV_SRC) {
   VAR_8.sPCLKInput.ucMiscInfo |=
     VAR_3;
  }







  if (FUNC_0(VAR_4, VAR_8))
   VAR_7 = VAR_1;
 }

 return VAR_7;
}
