
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mod_vrr_params {int adjust; } ;
struct mod_freesync_config {int state; scalar_t__ max_refresh_in_uhz; scalar_t__ min_refresh_in_uhz; } ;
struct TYPE_5__ {scalar_t__ vrr_enabled; } ;
struct dm_crtc_state {int freesync_timing_changed; struct mod_vrr_params vrr_params; TYPE_2__ base; scalar_t__ vrr_supported; struct mod_freesync_config freesync_config; struct dc_stream_state* stream; } ;
struct TYPE_4__ {int v_total; int h_total; } ;
struct dc_stream_state {TYPE_1__ timing; } ;
struct amdgpu_display_manager {int freesync_module; struct amdgpu_device* adev; } ;
struct amdgpu_device {TYPE_3__* ddev; } ;
struct TYPE_6__ {int event_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,struct dc_stream_state*,struct mod_freesync_config*,struct mod_vrr_params*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(
 struct amdgpu_display_manager *VAR_3,
 struct dm_crtc_state *VAR_4)
{
 struct dc_stream_state *VAR_5 = VAR_4->stream;
 struct mod_vrr_params VAR_6;
 struct mod_freesync_config VAR_7 = VAR_4->freesync_config;
 struct amdgpu_device *VAR_8 = VAR_3->adev;
 unsigned long VAR_9;

 if (!VAR_5)
  return;





 if (!VAR_5->timing.h_total || !VAR_5->timing.v_total)
  return;

 FUNC_2(&VAR_8->ddev->event_lock, VAR_9);
 VAR_6 = VAR_4->vrr_params;

 if (VAR_4->vrr_supported &&
     VAR_7.min_refresh_in_uhz &&
     VAR_7.max_refresh_in_uhz) {
  VAR_7.state = VAR_4->base.vrr_enabled ?
   VAR_0 :
   VAR_1;
 } else {
  VAR_7.state = VAR_2;
 }

 FUNC_1(VAR_3->freesync_module,
          VAR_5,
          &VAR_7, &VAR_6);

 VAR_4->freesync_timing_changed |=
  (FUNC_0(&VAR_4->vrr_params.adjust,
   &VAR_6.adjust,
   sizeof(VAR_6.adjust)) != 0);

 VAR_4->vrr_params = VAR_6;
 FUNC_3(&VAR_8->ddev->event_lock, VAR_9);
}
