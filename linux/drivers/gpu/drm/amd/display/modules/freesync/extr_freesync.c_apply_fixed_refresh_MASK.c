
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* v_total_max; void* v_total_min; } ;
struct TYPE_3__ {int fixed_active; scalar_t__ frame_counter; scalar_t__ target_refresh_in_uhz; } ;
struct mod_vrr_params {unsigned int max_duration_in_us; scalar_t__ min_refresh_in_uhz; TYPE_2__ adjust; scalar_t__ max_refresh_in_uhz; TYPE_1__ fixed; } ;
struct dc_stream_state {int dummy; } ;
struct core_freesync {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct dc_stream_state const*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct core_freesync *VAR_3,
  const struct dc_stream_state *VAR_4,
  unsigned int VAR_5,
  struct mod_vrr_params *VAR_6)
{
 bool VAR_7 = 0;
 unsigned int VAR_8 = VAR_6->max_duration_in_us;


 unsigned int VAR_9 = ((1000000000/VAR_8)
   + (1000*VAR_2));
 unsigned int VAR_10 = 1000000000/VAR_9;

 if (VAR_5 < VAR_10) {

  if (VAR_6->fixed.fixed_active) {
   VAR_6->fixed.frame_counter++;

   if (VAR_6->fixed.frame_counter >
     VAR_1) {
    VAR_6->fixed.frame_counter = 0;
    VAR_6->fixed.fixed_active = 0;
    VAR_6->fixed.target_refresh_in_uhz = 0;
    VAR_7 = 1;
   }
  }
 } else if (VAR_5 > VAR_8) {

  if (!VAR_6->fixed.fixed_active) {
   VAR_6->fixed.frame_counter++;

   if (VAR_6->fixed.frame_counter >
     VAR_0) {
    VAR_6->fixed.frame_counter = 0;
    VAR_6->fixed.fixed_active = 1;
    VAR_6->fixed.target_refresh_in_uhz =
      VAR_6->max_refresh_in_uhz;
    VAR_7 = 1;
   }
  }
 }

 if (VAR_7) {
  if (VAR_6->fixed.fixed_active) {
   VAR_6->adjust.v_total_min =
    FUNC_0(
    VAR_4, VAR_6->max_refresh_in_uhz);
   VAR_6->adjust.v_total_max =
     VAR_6->adjust.v_total_min;
  } else {
   VAR_6->adjust.v_total_min =
    FUNC_0(VAR_4,
     VAR_6->max_refresh_in_uhz);
   VAR_6->adjust.v_total_max =
    FUNC_0(VAR_4,
     VAR_6->min_refresh_in_uhz);
  }
 }
}
