
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ SET_EXTERNAL_REF_DIV_SRC; } ;
struct bp_pixel_clock_parameters {int target_pixel_clock_100hz; TYPE_2__ flags; int pll_id; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef int params ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_9__ {int ucMiscInfo; void* ucCRTC; int usPixelClock; void* ucPpll; } ;
struct TYPE_10__ {TYPE_3__ sPCLKInput; } ;
struct TYPE_7__ {int (* clock_source_id_to_atom ) (int ,scalar_t__*) ;} ;
typedef TYPE_4__ SET_PIXEL_CLOCK_PS_ALLOCATION_V5 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_4__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (int ,scalar_t__*) ;

__attribute__((used)) static enum bp_result FUNC_5(
 struct bios_parser *VAR_6,
 struct bp_pixel_clock_parameters *VAR_7)
{
 enum bp_result VAR_8 = VAR_2;

 SET_PIXEL_CLOCK_PS_ALLOCATION_V5 VAR_9;
 uint32_t VAR_10;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 if (!VAR_6->cmd_helper->clock_source_id_to_atom(
   VAR_7->pll_id, &VAR_10)) {
  FUNC_0();
  return VAR_1;
 }


 VAR_9.sPCLKInput.ucPpll = (uint8_t) VAR_10;
 VAR_9.sPCLKInput.usPixelClock =
   FUNC_2((uint16_t) (VAR_7->target_pixel_clock_100hz / 100));
 VAR_9.sPCLKInput.ucCRTC = (uint8_t) VAR_0;

 if (VAR_7->flags.SET_EXTERNAL_REF_DIV_SRC)
  VAR_9.sPCLKInput.ucMiscInfo |= VAR_4;

 if (FUNC_1(VAR_5, VAR_9))
  VAR_8 = VAR_3;

 return VAR_8;
}
