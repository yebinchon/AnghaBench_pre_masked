
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ btr_enabled; } ;
struct mod_vrr_params {scalar_t__ state; TYPE_2__ btr; scalar_t__ supported; } ;
struct mod_freesync {int dummy; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_3__ {int index; unsigned int prev_update_time_in_us; scalar_t__* time_elapsed_in_us; } ;
struct dc_plane_state {TYPE_1__ time; } ;
struct core_freesync {int dummy; } ;


 unsigned int VAR_0 ;
 struct core_freesync* FUNC_0 (struct mod_freesync*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct core_freesync*,struct dc_stream_state const*,unsigned int,struct mod_vrr_params*) ;
 int FUNC_2 (struct core_freesync*,struct dc_stream_state const*,unsigned int,struct mod_vrr_params*) ;

void FUNC_3(struct mod_freesync *VAR_2,
  const struct dc_plane_state *VAR_3,
  const struct dc_stream_state *VAR_4,
  unsigned int VAR_5,
  struct mod_vrr_params *VAR_6)
{
 struct core_freesync *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;

 if (VAR_2 == ((void*)0))
  return;

 VAR_7 = FUNC_0(VAR_2);

 if (VAR_6->supported &&
   VAR_6->state == VAR_1) {
  unsigned int VAR_10 = 0;
  unsigned int VAR_11 = VAR_3->time.index + 1;

  if (VAR_11 >= VAR_0)
   VAR_11 = 0;

  VAR_8 = VAR_5 -
    VAR_3->time.prev_update_time_in_us;


  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   VAR_9 +=
     VAR_3->time.time_elapsed_in_us[VAR_10];
  }
  VAR_9 -=
    VAR_3->time.time_elapsed_in_us[VAR_11];


  VAR_9 += VAR_8;
  VAR_9 /= VAR_0;

  if (VAR_6->btr.btr_enabled) {
   FUNC_1(VAR_7,
     VAR_4,
     VAR_8,
     VAR_6);
  } else {
   FUNC_2(VAR_7,
    VAR_4,
    VAR_8,
    VAR_6);
  }

 }
}
