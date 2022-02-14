
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ time_started; int sum; } ;
typedef TYPE_1__ perf_timer ;


 scalar_t__ FUNC_0 () ;

void FUNC_1(perf_timer *VAR_0)
{
 uint32_t VAR_1 = FUNC_0();
 VAR_0->sum += (VAR_1 - VAR_0->time_started);
}
