
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mod_freesync_config {int min_refresh_in_uhz; int max_refresh_in_uhz; int vsif_supported; int btr; int state; int member_0; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_6__ {scalar_t__ vrr_enabled; struct drm_display_mode mode; } ;
struct dm_crtc_state {int vrr_supported; struct mod_freesync_config freesync_config; TYPE_3__ base; TYPE_2__* stream; } ;
struct TYPE_4__ {int connector; } ;
struct dm_connector_state {scalar_t__ freesync_capable; TYPE_1__ base; } ;
struct amdgpu_dm_connector {int min_vfreq; int max_vfreq; } ;
struct TYPE_5__ {int ignore_msa_timing_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_display_mode*) ;
 struct amdgpu_dm_connector* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(
 struct dm_crtc_state *VAR_2,
 struct dm_connector_state *VAR_3)
{
 struct mod_freesync_config VAR_4 = {0};
 struct amdgpu_dm_connector *VAR_5 =
   FUNC_1(VAR_3->base.connector);
 struct drm_display_mode *VAR_6 = &VAR_2->base.mode;
 int VAR_7 = FUNC_0(VAR_6);

 VAR_2->vrr_supported = VAR_3->freesync_capable &&
     VAR_7 >= VAR_5->min_vfreq &&
     VAR_7 <= VAR_5->max_vfreq;

 if (VAR_2->vrr_supported) {
  VAR_2->stream->ignore_msa_timing_param = 1;
  VAR_4.state = VAR_2->base.vrr_enabled ?
    VAR_0 :
    VAR_1;
  VAR_4.min_refresh_in_uhz =
    VAR_5->min_vfreq * 1000000;
  VAR_4.max_refresh_in_uhz =
    VAR_5->max_vfreq * 1000000;
  VAR_4.vsif_supported = 1;
  VAR_4.btr = 1;
 }

 VAR_2->freesync_config = VAR_4;
}
