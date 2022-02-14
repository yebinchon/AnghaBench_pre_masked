
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ramping_active; } ;
struct TYPE_5__ {void* v_total_max; void* v_total_min; } ;
struct TYPE_4__ {scalar_t__ frames_to_insert; scalar_t__ frame_counter; int inserted_duration_in_us; scalar_t__ btr_active; } ;
struct mod_vrr_params {int supported; scalar_t__ state; TYPE_3__ fixed; int min_refresh_in_uhz; TYPE_2__ adjust; int max_refresh_in_uhz; TYPE_1__ btr; } ;
struct mod_freesync {int dummy; } ;
struct dc_stream_state {int dummy; } ;
struct core_freesync {int dummy; } ;


 struct core_freesync* FUNC_0 (struct mod_freesync*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (struct dc_stream_state const*,struct mod_vrr_params*,int ) ;
 void* FUNC_2 (struct dc_stream_state const*,int ) ;
 int FUNC_3 (struct core_freesync*,struct dc_stream_state const*,struct mod_vrr_params*) ;

void FUNC_4(struct mod_freesync *VAR_2,
  const struct dc_stream_state *VAR_3,
  struct mod_vrr_params *VAR_4)
{
 struct core_freesync *VAR_5 = ((void*)0);

 if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)))
  return;

 VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->supported == 0)
  return;




 if (VAR_4->state == VAR_1 &&
     VAR_4->btr.btr_active) {







  if (VAR_4->btr.frames_to_insert ==
    VAR_4->btr.frame_counter) {
   VAR_4->adjust.v_total_min =
    FUNC_1(VAR_3,
    VAR_4,
    VAR_4->btr.inserted_duration_in_us);
   VAR_4->adjust.v_total_max =
    VAR_4->adjust.v_total_min;
  }

  if (VAR_4->btr.frame_counter > 0)
   VAR_4->btr.frame_counter--;


  if (VAR_4->btr.frame_counter == 0) {
   VAR_4->adjust.v_total_min =
    FUNC_2(VAR_3,
    VAR_4->max_refresh_in_uhz);
   VAR_4->adjust.v_total_max =
    FUNC_2(VAR_3,
    VAR_4->min_refresh_in_uhz);
  }
 }




 if (VAR_4->state == VAR_1)
  VAR_4->fixed.ramping_active = 0;



 if (VAR_4->state == VAR_0 &&
    VAR_4->fixed.ramping_active) {
  FUNC_3(
    VAR_5, VAR_3, VAR_4);
 }
}
