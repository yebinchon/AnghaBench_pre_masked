
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct latency_info {int io_interval; int cpu_interval; scalar_t__ interrupt_cnt; scalar_t__ latency_sum; scalar_t__ min_latency; scalar_t__ max_latency; scalar_t__ timer_start2; scalar_t__ timer_start1; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct latency_info *VAR_0, int VAR_1)
{



 int VAR_2 = 1;

 if (VAR_1) {



  VAR_0->io_interval = (FUNC_1() * VAR_2) / 1000;
  VAR_0->cpu_interval = (FUNC_0() * VAR_2) / 1000;
 }
 VAR_0->timer_start1 = 0;
 VAR_0->timer_start2 = 0;
 VAR_0->max_latency = 0;
 VAR_0->min_latency = (u64)-1;
 VAR_0->latency_sum = 0;
 VAR_0->interrupt_cnt = 0;
}
