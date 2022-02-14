
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct nds32_pmu {int (* disable ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 struct nds32_pmu* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_2, int VAR_3)
{
 struct nds32_pmu *VAR_4 = FUNC_2(VAR_2->pmu);
 struct hw_perf_event *VAR_5 = &VAR_2->hw;




 if (!(VAR_5->state & VAR_0)) {
  VAR_4->disable(VAR_2);
  FUNC_0(VAR_2);
  VAR_5->state |= VAR_0 | VAR_1;
 }
}
