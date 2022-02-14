
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ HSYNC_POSITIVE_POLARITY; scalar_t__ VSYNC_POSITIVE_POLARITY; scalar_t__ HORZ_COUNT_BY_TWO; scalar_t__ INTERLACE; } ;
struct bp_hw_crtc_timing_parameters {TYPE_2__ flags; scalar_t__ v_sync_width; scalar_t__ v_addressable; scalar_t__ v_sync_start; scalar_t__ h_sync_width; scalar_t__ h_addressable; scalar_t__ h_sync_start; scalar_t__ v_total; scalar_t__ h_total; int controller_id; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_8__ {void* usAccess; } ;
struct TYPE_9__ {TYPE_3__ susModeMiscInfo; void* usV_SyncOffset; void* usV_SyncWidth; void* usH_SyncWidth; void* usH_SyncOffset; void* usV_Blanking_Time; void* usV_Size; void* usH_Blanking_Time; void* usH_Size; int ucCRTC; int member_0; } ;
struct TYPE_6__ {scalar_t__ (* controller_id_to_atom ) (int ,int *) ;} ;
typedef TYPE_4__ SET_CRTC_USING_DTD_TIMING_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__) ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static enum bp_result FUNC_4(
 struct bios_parser *VAR_7,
 struct bp_hw_crtc_timing_parameters *VAR_8)
{
 enum bp_result VAR_9 = VAR_4;
 SET_CRTC_USING_DTD_TIMING_PARAMETERS VAR_10 = {0};
 uint8_t VAR_11;

 if (VAR_7->cmd_helper->controller_id_to_atom(
   VAR_8->controller_id, &VAR_11))
  VAR_10.ucCRTC = VAR_11;


 VAR_10.usH_Size = FUNC_1((uint16_t)VAR_8->h_addressable);

 VAR_10.usH_Blanking_Time =
   FUNC_1((uint16_t)(VAR_8->h_total - VAR_8->h_addressable));

 VAR_10.usV_Size = FUNC_1((uint16_t)VAR_8->v_addressable);

 VAR_10.usV_Blanking_Time =
   FUNC_1((uint16_t)(VAR_8->v_total - VAR_8->v_addressable));



 VAR_10.usH_SyncOffset =
   FUNC_1((uint16_t)(VAR_8->h_sync_start - VAR_8->h_addressable));
 VAR_10.usH_SyncWidth = FUNC_1((uint16_t)VAR_8->h_sync_width);



 VAR_10.usV_SyncOffset =
   FUNC_1((uint16_t)(VAR_8->v_sync_start - VAR_8->v_addressable));
 VAR_10.usV_SyncWidth = FUNC_1((uint16_t)VAR_8->v_sync_width);






 if (0 == VAR_8->flags.HSYNC_POSITIVE_POLARITY)
  VAR_10.susModeMiscInfo.usAccess =
    FUNC_1(FUNC_2(VAR_10.susModeMiscInfo.usAccess) | VAR_1);

 if (0 == VAR_8->flags.VSYNC_POSITIVE_POLARITY)
  VAR_10.susModeMiscInfo.usAccess =
    FUNC_1(FUNC_2(VAR_10.susModeMiscInfo.usAccess) | VAR_3);

 if (VAR_8->flags.INTERLACE) {
  VAR_10.susModeMiscInfo.usAccess =
    FUNC_1(FUNC_2(VAR_10.susModeMiscInfo.usAccess) | VAR_2);
  {







   VAR_10.usV_SyncOffset =
     FUNC_1(FUNC_2(VAR_10.usV_SyncOffset) + 1);

  }
 }

 if (VAR_8->flags.HORZ_COUNT_BY_TWO)
  VAR_10.susModeMiscInfo.usAccess =
    FUNC_1(FUNC_2(VAR_10.susModeMiscInfo.usAccess) | VAR_0);

 if (FUNC_0(VAR_6, VAR_10))
  VAR_9 = VAR_5;

 return VAR_9;
}
