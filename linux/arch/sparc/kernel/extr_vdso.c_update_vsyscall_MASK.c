
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int shift; int mult; int mask; int cycle_last; } ;
struct vvar_data {int wall_time_snsec; int monotonic_time_snsec; long wall_time_coarse_nsec; scalar_t__ monotonic_time_coarse_nsec; scalar_t__ monotonic_time_coarse_sec; scalar_t__ wall_time_coarse_sec; scalar_t__ monotonic_time_sec; scalar_t__ wall_time_sec; TYPE_3__ clock; int vclock_mode; } ;
struct TYPE_10__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_9__ {int shift; int xtime_nsec; int mult; int mask; int cycle_last; TYPE_2__* clock; } ;
struct timekeeper {TYPE_5__ wall_to_monotonic; TYPE_4__ tkr_mono; scalar_t__ xtime_sec; } ;
struct TYPE_6__ {int vclock_mode; } ;
struct TYPE_7__ {TYPE_1__ archdata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct vvar_data* VAR_1 ;
 int FUNC_1 (struct vvar_data*) ;
 int FUNC_2 (struct vvar_data*) ;

void FUNC_3(struct timekeeper *VAR_2)
{
 struct vvar_data *VAR_3 = VAR_1;

 if (FUNC_0(VAR_3 == ((void*)0)))
  return;

 FUNC_1(VAR_3);
 VAR_3->vclock_mode = VAR_2->tkr_mono.clock->archdata.vclock_mode;
 VAR_3->clock.cycle_last = VAR_2->tkr_mono.cycle_last;
 VAR_3->clock.mask = VAR_2->tkr_mono.mask;
 VAR_3->clock.mult = VAR_2->tkr_mono.mult;
 VAR_3->clock.shift = VAR_2->tkr_mono.shift;

 VAR_3->wall_time_sec = VAR_2->xtime_sec;
 VAR_3->wall_time_snsec = VAR_2->tkr_mono.xtime_nsec;

 VAR_3->monotonic_time_sec = VAR_2->xtime_sec +
        VAR_2->wall_to_monotonic.tv_sec;
 VAR_3->monotonic_time_snsec = VAR_2->tkr_mono.xtime_nsec +
          (VAR_2->wall_to_monotonic.tv_nsec <<
           VAR_2->tkr_mono.shift);

 while (VAR_3->monotonic_time_snsec >=
        (((u64)VAR_0) << VAR_2->tkr_mono.shift)) {
  VAR_3->monotonic_time_snsec -=
    ((u64)VAR_0) << VAR_2->tkr_mono.shift;
  VAR_3->monotonic_time_sec++;
 }

 VAR_3->wall_time_coarse_sec = VAR_2->xtime_sec;
 VAR_3->wall_time_coarse_nsec =
   (long)(VAR_2->tkr_mono.xtime_nsec >> VAR_2->tkr_mono.shift);

 VAR_3->monotonic_time_coarse_sec =
  VAR_3->wall_time_coarse_sec + VAR_2->wall_to_monotonic.tv_sec;
 VAR_3->monotonic_time_coarse_nsec =
  VAR_3->wall_time_coarse_nsec + VAR_2->wall_to_monotonic.tv_nsec;

 while (VAR_3->monotonic_time_coarse_nsec >= VAR_0) {
  VAR_3->monotonic_time_coarse_nsec -= VAR_0;
  VAR_3->monotonic_time_coarse_sec++;
 }

 FUNC_2(VAR_3);
}
