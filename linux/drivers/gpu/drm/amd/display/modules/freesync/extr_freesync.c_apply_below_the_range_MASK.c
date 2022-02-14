
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int btr_active; unsigned int frame_counter; unsigned int inserted_duration_in_us; unsigned int frames_to_insert; unsigned int mid_point_in_us; } ;
struct TYPE_3__ {void* v_total_max; void* v_total_min; } ;
struct mod_vrr_params {unsigned int max_duration_in_us; unsigned int min_duration_in_us; TYPE_2__ btr; int min_refresh_in_uhz; TYPE_1__ adjust; int max_refresh_in_uhz; } ;
struct dc_stream_state {int dummy; } ;
struct core_freesync {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (struct dc_stream_state const*,int ) ;
 scalar_t__ FUNC_1 (unsigned long long,int ) ;

__attribute__((used)) static void FUNC_2(struct core_freesync *VAR_2,
  const struct dc_stream_state *VAR_3,
  unsigned int VAR_4,
  struct mod_vrr_params *VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0xFFFFFFFF;
 unsigned int VAR_11 = 0xFFFFFFFF;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = VAR_5->max_duration_in_us;
 unsigned int VAR_15;

 VAR_13 = ((unsigned int) (FUNC_1(
  (1000000000ULL * 1000000),
  VAR_5->max_refresh_in_uhz)));


 if (VAR_4 + VAR_1 < VAR_14) {

  if (VAR_5->btr.btr_active) {
   VAR_5->btr.frame_counter = 0;
   VAR_5->btr.btr_active = 0;
  }
 } else if (VAR_4 > VAR_14) {

  VAR_5->btr.btr_active = 1;
 }


 if (!VAR_5->btr.btr_active) {
  VAR_5->btr.inserted_duration_in_us = 0;
  VAR_5->btr.frames_to_insert = 0;
  VAR_5->btr.frame_counter = 0;


  VAR_5->adjust.v_total_min =
   FUNC_0(VAR_3,
    VAR_5->max_refresh_in_uhz);
  VAR_5->adjust.v_total_max =
   FUNC_0(VAR_3,
    VAR_5->min_refresh_in_uhz);

 } else {




  VAR_7 = (VAR_4 +
    VAR_5->btr.mid_point_in_us - 1) /
     VAR_5->btr.mid_point_in_us;

  if (VAR_7 > 0) {
   VAR_9 = VAR_4 /
    VAR_7;
   VAR_10 =
    (VAR_5->btr.mid_point_in_us >
    VAR_9) ?
    (VAR_5->btr.mid_point_in_us - VAR_9) :
    (VAR_9 - VAR_5->btr.mid_point_in_us);
  }




  VAR_8 = VAR_4 /
    VAR_5->btr.mid_point_in_us;

  if (VAR_8 > 0) {

   VAR_9 = VAR_4 /
    VAR_8;
   VAR_11 =
    (VAR_5->btr.mid_point_in_us >
    VAR_9) ?
    (VAR_5->btr.mid_point_in_us - VAR_9) :
    (VAR_9 - VAR_5->btr.mid_point_in_us);
  }




  if (VAR_10 < VAR_11) {
   VAR_12 = VAR_7;
   VAR_15 = VAR_11 -
     VAR_10;
  } else {
   VAR_12 = VAR_8;
   VAR_15 = VAR_10 -
     VAR_11;
  }




  if (VAR_5->btr.frames_to_insert != 0 &&
    VAR_15 < VAR_0) {
   if (((VAR_4 / VAR_5->btr.frames_to_insert) <
     VAR_5->max_duration_in_us) &&
    ((VAR_4 / VAR_5->btr.frames_to_insert) >
     VAR_5->min_duration_in_us))
    VAR_12 = VAR_5->btr.frames_to_insert;
  }




  if (VAR_4 / VAR_12 <
    VAR_5->min_duration_in_us){
   VAR_12 -= (VAR_12 > 1) ?
     1 : 0;
  }

  if (VAR_12 > 0)
   VAR_6 = VAR_4 /
       VAR_12;

  if (VAR_6 < VAR_5->min_duration_in_us)
   VAR_6 = VAR_5->min_duration_in_us;


  VAR_5->btr.inserted_duration_in_us =
   VAR_6;
  VAR_5->btr.frames_to_insert = VAR_12;
  VAR_5->btr.frame_counter = VAR_12;
 }
}
