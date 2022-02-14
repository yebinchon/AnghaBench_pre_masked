
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_12__ {int shift; int xtime_nsec; int cycle_last; TYPE_2__* clock; int mult; int mask; } ;
struct TYPE_11__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct timekeeper {TYPE_5__ tkr_mono; TYPE_4__ wall_to_monotonic; scalar_t__ xtime_sec; } ;
struct TYPE_13__ {int snsec; scalar_t__ sec; } ;
struct TYPE_10__ {int snsec; scalar_t__ sec; } ;
struct TYPE_14__ {int clk_shift; int seq; TYPE_6__ monotonic_time; TYPE_3__ wall_time; int clk_cycle_last; int clk_fsys_mmio; int clk_mult; int clk_mask; } ;
struct TYPE_8__ {int fsys_mmio; } ;
struct TYPE_9__ {TYPE_1__ archdata; } ;


 scalar_t__ VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct timekeeper *VAR_2)
{
 FUNC_0(&VAR_1.seq);


 VAR_1.clk_mask = VAR_2->tkr_mono.mask;
 VAR_1.clk_mult = VAR_2->tkr_mono.mult;
 VAR_1.clk_shift = VAR_2->tkr_mono.shift;
 VAR_1.clk_fsys_mmio = VAR_2->tkr_mono.clock->archdata.fsys_mmio;
 VAR_1.clk_cycle_last = VAR_2->tkr_mono.cycle_last;

 VAR_1.wall_time.sec = VAR_2->xtime_sec;
 VAR_1.wall_time.snsec = VAR_2->tkr_mono.xtime_nsec;

 VAR_1.monotonic_time.sec = VAR_2->xtime_sec
           + VAR_2->wall_to_monotonic.tv_sec;
 VAR_1.monotonic_time.snsec = VAR_2->tkr_mono.xtime_nsec
      + ((u64)VAR_2->wall_to_monotonic.tv_nsec
       << VAR_2->tkr_mono.shift);


 while (VAR_1.monotonic_time.snsec >=
     (((u64)VAR_0) << VAR_2->tkr_mono.shift)) {
  VAR_1.monotonic_time.snsec -=
     ((u64)VAR_0) << VAR_2->tkr_mono.shift;
  VAR_1.monotonic_time.sec++;
 }

 FUNC_1(&VAR_1.seq);
}
