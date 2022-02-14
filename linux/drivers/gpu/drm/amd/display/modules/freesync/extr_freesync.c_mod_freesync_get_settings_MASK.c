
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int mid_point_in_us; unsigned int frames_to_insert; unsigned int inserted_duration_in_us; } ;
struct TYPE_3__ {unsigned int v_total_min; unsigned int v_total_max; } ;
struct mod_vrr_params {TYPE_2__ btr; TYPE_1__ adjust; scalar_t__ supported; } ;
struct mod_freesync {int dummy; } ;
struct core_freesync {int dummy; } ;


 struct core_freesync* FUNC_0 (struct mod_freesync*) ;

void FUNC_1(struct mod_freesync *VAR_0,
  const struct mod_vrr_params *VAR_1,
  unsigned int *VAR_2, unsigned int *VAR_3,
  unsigned int *VAR_4,
  unsigned int *VAR_5, unsigned int *VAR_6,
  unsigned int *VAR_7,
  unsigned int *VAR_8,
  unsigned int *VAR_9)
{
 struct core_freesync *VAR_10 = ((void*)0);

 if (VAR_0 == ((void*)0))
  return;

 VAR_10 = FUNC_0(VAR_0);

 if (VAR_1->supported) {
  *VAR_2 = VAR_1->adjust.v_total_min;
  *VAR_3 = VAR_1->adjust.v_total_max;
  *VAR_4 = 0;
  *VAR_7 = VAR_1->btr.mid_point_in_us;
  *VAR_8 = VAR_1->btr.frames_to_insert;
  *VAR_9 = VAR_1->btr.inserted_duration_in_us;
 }
}
