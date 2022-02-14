
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct dc_link {TYPE_4__* link_enc; } ;
struct TYPE_13__ {int interlace_allowed; int doublescan_allowed; int stereo_allowed; int ycbcr_420_allowed; int base; TYPE_5__* state; void* polled; int dpms; TYPE_1__* funcs; } ;
struct TYPE_15__ {int hpd; } ;
struct amdgpu_dm_connector {int connector_id; int audio_inst; TYPE_10__ base; int hpd_lock; TYPE_2__ hpd; struct dc_link* dc_link; } ;
struct amdgpu_display_manager {TYPE_9__* ddev; } ;
struct TYPE_20__ {int abm_level_property; int underscan_vborder_property; int underscan_hborder_property; int underscan_property; } ;
struct TYPE_19__ {int dc; } ;
struct amdgpu_device {TYPE_7__ mode_info; TYPE_6__ dm; } ;
struct TYPE_21__ {int hdr_output_metadata_property; int scaling_mode_property; } ;
struct TYPE_22__ {TYPE_8__ mode_config; struct amdgpu_device* dev_private; } ;
struct TYPE_18__ {int max_bpc; int max_requested_bpc; } ;
struct TYPE_16__ {int dp_ycbcr420_supported; int hdmi_ycbcr420_supported; } ;
struct TYPE_17__ {TYPE_3__ features; } ;
struct TYPE_14__ {int (* reset ) (TYPE_10__*) ;} ;


 int VAR_0 ;
 void* VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_10__*,int,int) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_10__*) ;

void FUNC_6(struct amdgpu_display_manager *VAR_6,
         struct amdgpu_dm_connector *VAR_7,
         int VAR_8,
         struct dc_link *VAR_9,
         int VAR_10)
{
 struct amdgpu_device *VAR_11 = VAR_6->ddev->dev_private;





 if (VAR_7->base.funcs->reset)
  VAR_7->base.funcs->reset(&VAR_7->base);

 VAR_7->connector_id = VAR_10;
 VAR_7->dc_link = VAR_9;
 VAR_7->base.interlace_allowed = 0;
 VAR_7->base.doublescan_allowed = 0;
 VAR_7->base.stereo_allowed = 0;
 VAR_7->base.dpms = VAR_3;
 VAR_7->hpd.hpd = VAR_0;
 VAR_7->audio_inst = -1;
 FUNC_4(&VAR_7->hpd_lock);





 switch (VAR_8) {
 case 128:
  VAR_7->base.polled = VAR_1;
  VAR_7->base.ycbcr_420_allowed =
   VAR_9->link_enc->features.hdmi_ycbcr420_supported ? 1 : 0;
  break;
 case 129:
  VAR_7->base.polled = VAR_1;
  VAR_7->base.ycbcr_420_allowed =
   VAR_9->link_enc->features.dp_ycbcr420_supported ? 1 : 0;
  break;
 case 130:
  VAR_7->base.polled = VAR_1;
  break;
 default:
  break;
 }

 FUNC_3(&VAR_7->base.base,
    VAR_6->ddev->mode_config.scaling_mode_property,
    VAR_4);

 FUNC_3(&VAR_7->base.base,
    VAR_11->mode_info.underscan_property,
    VAR_5);
 FUNC_3(&VAR_7->base.base,
    VAR_11->mode_info.underscan_hborder_property,
    0);
 FUNC_3(&VAR_7->base.base,
    VAR_11->mode_info.underscan_vborder_property,
    0);

 FUNC_1(&VAR_7->base, 8, 16);


 VAR_7->base.state->max_bpc = 8;
 VAR_7->base.state->max_requested_bpc = 8;

 if (VAR_8 == VAR_2 &&
     FUNC_0(VAR_11->dm.dc)) {
  FUNC_3(&VAR_7->base.base,
    VAR_11->mode_info.abm_level_property, 0);
 }

 if (VAR_8 == 128 ||
     VAR_8 == 129 ||
     VAR_8 == VAR_2) {
  FUNC_3(
   &VAR_7->base.base,
   VAR_6->ddev->mode_config.hdr_output_metadata_property, 0);

  FUNC_2(
   &VAR_7->base);
 }
}
