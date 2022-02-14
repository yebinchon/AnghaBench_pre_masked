
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int shift; int xtime_nsec; int cycle_last; int mult; int mask; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct timekeeper {TYPE_2__ tkr_mono; int xtime_sec; TYPE_1__ wall_to_monotonic; } ;
struct TYPE_8__ {int cs_shift; int xtime_clock_nsec; int xtime_coarse_nsec; int hrtimer_res; int xtime_coarse_sec; int xtime_clock_sec; int wtm_clock_nsec; int wtm_clock_sec; int cs_cycle_last; int cs_mult; int cs_mask; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(struct timekeeper *VAR_2)
{
 FUNC_0(VAR_1);
 VAR_1->cs_mask = VAR_2->tkr_mono.mask;
 VAR_1->cs_mult = VAR_2->tkr_mono.mult;
 VAR_1->cs_shift = VAR_2->tkr_mono.shift;
 VAR_1->cs_cycle_last = VAR_2->tkr_mono.cycle_last;
 VAR_1->wtm_clock_sec = VAR_2->wall_to_monotonic.tv_sec;
 VAR_1->wtm_clock_nsec = VAR_2->wall_to_monotonic.tv_nsec;
 VAR_1->xtime_clock_sec = VAR_2->xtime_sec;
 VAR_1->xtime_clock_nsec = VAR_2->tkr_mono.xtime_nsec;
 VAR_1->xtime_coarse_sec = VAR_2->xtime_sec;
 VAR_1->xtime_coarse_nsec = VAR_2->tkr_mono.xtime_nsec >>
     VAR_2->tkr_mono.shift;
 VAR_1->hrtimer_res = VAR_0;
 FUNC_1(VAR_1);
}
