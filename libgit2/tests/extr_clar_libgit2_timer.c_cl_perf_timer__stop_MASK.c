
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ last; int sum; scalar_t__ time_started; } ;
typedef TYPE_1__ cl_perf_timer ;


 double FUNC_0 () ;

void FUNC_1(cl_perf_timer *VAR_0)
{
 double VAR_1 = FUNC_0();

 VAR_0->last = VAR_1 - VAR_0->time_started;
 VAR_0->sum += VAR_0->last;
}
