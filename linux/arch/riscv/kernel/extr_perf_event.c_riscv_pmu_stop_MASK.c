
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct TYPE_4__ {TYPE_1__* pmu; } ;
struct TYPE_3__ {int (* read ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_4, int VAR_5)
{
 struct hw_perf_event *VAR_6 = &VAR_4->hw;

 FUNC_0(VAR_6->state & VAR_1);
 VAR_6->state |= VAR_1;

 if ((VAR_5 & VAR_0) && !(VAR_6->state & VAR_2)) {
  VAR_3->pmu->read(VAR_4);
  VAR_6->state |= VAR_2;
 }
}
