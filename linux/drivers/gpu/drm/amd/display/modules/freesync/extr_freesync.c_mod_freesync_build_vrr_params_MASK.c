
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* v_total_max; void* v_total_min; } ;
struct TYPE_7__ {int target_refresh_in_uhz; int fixed_active; scalar_t__ ramping_active; } ;
struct TYPE_5__ {int btr_enabled; int btr_active; int mid_point_in_us; scalar_t__ frame_counter; scalar_t__ frames_to_insert; scalar_t__ inserted_duration_in_us; } ;
struct mod_vrr_params {scalar_t__ state; int supported; unsigned int min_refresh_in_uhz; int max_duration_in_us; unsigned int max_refresh_in_uhz; int min_duration_in_us; TYPE_4__ adjust; TYPE_3__ fixed; TYPE_1__ btr; int send_info_frame; } ;
struct mod_freesync_config {unsigned long long min_refresh_in_uhz; unsigned long long max_refresh_in_uhz; scalar_t__ state; int btr; scalar_t__ ramping; int vsif_supported; } ;
struct mod_freesync {int dummy; } ;
struct TYPE_6__ {void* v_total; } ;
struct dc_stream_state {TYPE_2__ timing; } ;
struct core_freesync {int dummy; } ;


 unsigned int VAR_0 ;
 struct core_freesync* FUNC_0 (struct mod_freesync*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (unsigned int) ;
 void* FUNC_2 (struct dc_stream_state const*,int) ;
 unsigned long long FUNC_3 (struct dc_stream_state const*) ;
 int FUNC_4 (struct core_freesync*,struct mod_freesync_config*,unsigned int,unsigned int,struct mod_vrr_params*) ;

void FUNC_5(struct mod_freesync *VAR_6,
  const struct dc_stream_state *VAR_7,
  struct mod_freesync_config *VAR_8,
  struct mod_vrr_params *VAR_9)
{
 struct core_freesync *VAR_10 = ((void*)0);
 unsigned long long VAR_11 = 0;
 unsigned int VAR_12 = 0;
 unsigned long long VAR_13 = 0;
 unsigned long long VAR_14 = 0;

 if (VAR_6 == ((void*)0))
  return;

 VAR_10 = FUNC_0(VAR_6);


 VAR_11 =
   FUNC_3(VAR_7);

 VAR_13 = VAR_8->min_refresh_in_uhz;
 VAR_14 = VAR_8->max_refresh_in_uhz;


 if (VAR_13 > VAR_14)
  VAR_13 = VAR_14;


 if (VAR_14 > VAR_11)
  VAR_14 = VAR_11;


 if (VAR_13 > VAR_11)
  VAR_13 = VAR_11;

 if (!FUNC_4(VAR_10,
   VAR_8, (unsigned int)VAR_13, (unsigned int)VAR_14,
   VAR_9))
  return;

 VAR_9->state = VAR_8->state;
 VAR_9->send_info_frame = VAR_8->vsif_supported;

 if (VAR_8->state == VAR_5) {
  VAR_9->state = VAR_5;
  VAR_9->supported = 0;
  VAR_9->adjust.v_total_min = VAR_7->timing.v_total;
  VAR_9->adjust.v_total_max = VAR_7->timing.v_total;

  return;

 } else {
  VAR_9->min_refresh_in_uhz = (unsigned int)VAR_13;
  VAR_9->max_duration_in_us =
    FUNC_1(
      (unsigned int)VAR_13);

  VAR_9->max_refresh_in_uhz = (unsigned int)VAR_14;
  VAR_9->min_duration_in_us =
    FUNC_1(
      (unsigned int)VAR_14);

  VAR_12 = VAR_9->max_refresh_in_uhz -
    VAR_9->min_refresh_in_uhz;

  VAR_9->supported = 1;
 }

 VAR_9->fixed.ramping_active = VAR_8->ramping;

 VAR_9->btr.btr_enabled = VAR_8->btr;

 if (VAR_9->max_refresh_in_uhz <
   2 * VAR_9->min_refresh_in_uhz)
  VAR_9->btr.btr_enabled = 0;

 VAR_9->btr.btr_active = 0;
 VAR_9->btr.inserted_duration_in_us = 0;
 VAR_9->btr.frames_to_insert = 0;
 VAR_9->btr.frame_counter = 0;
 VAR_9->btr.mid_point_in_us =
    (VAR_9->min_duration_in_us +
     VAR_9->max_duration_in_us) / 2;

 if (VAR_9->state == VAR_5) {
  VAR_9->adjust.v_total_min = VAR_7->timing.v_total;
  VAR_9->adjust.v_total_max = VAR_7->timing.v_total;
 } else if (VAR_9->state == VAR_3) {
  VAR_9->adjust.v_total_min = VAR_7->timing.v_total;
  VAR_9->adjust.v_total_max = VAR_7->timing.v_total;
 } else if (VAR_9->state == VAR_4) {
  VAR_9->adjust.v_total_min = VAR_7->timing.v_total;
  VAR_9->adjust.v_total_max = VAR_7->timing.v_total;
 } else if (VAR_9->state == VAR_2 &&
   VAR_12 >= VAR_0) {
  VAR_9->adjust.v_total_min =
   FUNC_2(VAR_7,
    VAR_9->max_refresh_in_uhz);
  VAR_9->adjust.v_total_max =
   FUNC_2(VAR_7,
    VAR_9->min_refresh_in_uhz);
 } else if (VAR_9->state == VAR_1) {
  VAR_9->fixed.target_refresh_in_uhz =
    VAR_9->min_refresh_in_uhz;
  if (VAR_9->fixed.ramping_active &&
    VAR_9->fixed.fixed_active) {



   VAR_9->fixed.fixed_active = 1;
  } else {
   VAR_9->fixed.fixed_active = 1;
   VAR_9->adjust.v_total_min =
    FUNC_2(VAR_7,
     VAR_9->fixed.target_refresh_in_uhz);
   VAR_9->adjust.v_total_max =
    VAR_9->adjust.v_total_min;
  }
 } else {
  VAR_9->state = VAR_4;
  VAR_9->adjust.v_total_min = VAR_7->timing.v_total;
  VAR_9->adjust.v_total_max = VAR_7->timing.v_total;
 }
}
