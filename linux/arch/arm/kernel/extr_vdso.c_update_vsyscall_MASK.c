
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int xtime_nsec; int shift; int mask; int mult; int cycle_last; } ;
struct timekeeper {TYPE_1__ tkr_mono; int xtime_sec; struct timespec64 wall_to_monotonic; } ;
struct TYPE_7__ {int xtime_clock_snsec; int cs_shift; int cs_mask; int cs_mult; int xtime_clock_sec; int cs_cycle_last; scalar_t__ tk_is_cntvct; int wtm_clock_nsec; int wtm_clock_sec; scalar_t__ xtime_coarse_nsec; int xtime_coarse_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct timekeeper*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct timekeeper *VAR_2)
{
 struct timespec64 *VAR_3 = &VAR_2->wall_to_monotonic;

 if (!VAR_0) {



  return;
 }

 FUNC_2(VAR_1);

 VAR_1->tk_is_cntvct = FUNC_1(VAR_2);
 VAR_1->xtime_coarse_sec = VAR_2->xtime_sec;
 VAR_1->xtime_coarse_nsec = (u32)(VAR_2->tkr_mono.xtime_nsec >>
       VAR_2->tkr_mono.shift);
 VAR_1->wtm_clock_sec = VAR_3->tv_sec;
 VAR_1->wtm_clock_nsec = VAR_3->tv_nsec;

 if (VAR_1->tk_is_cntvct) {
  VAR_1->cs_cycle_last = VAR_2->tkr_mono.cycle_last;
  VAR_1->xtime_clock_sec = VAR_2->xtime_sec;
  VAR_1->xtime_clock_snsec = VAR_2->tkr_mono.xtime_nsec;
  VAR_1->cs_mult = VAR_2->tkr_mono.mult;
  VAR_1->cs_shift = VAR_2->tkr_mono.shift;
  VAR_1->cs_mask = VAR_2->tkr_mono.mask;
 }

 FUNC_3(VAR_1);

 FUNC_0(FUNC_4(VAR_1));
}
