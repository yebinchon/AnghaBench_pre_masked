
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct nds32_pmu {int (* enable ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 struct nds32_pmu* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_2, int VAR_3)
{
 struct nds32_pmu *VAR_4 = FUNC_3(VAR_2->pmu);
 struct hw_perf_event *VAR_5 = &VAR_2->hw;




 if (VAR_3 & VAR_0)
  FUNC_0(!(VAR_5->state & VAR_1));

 VAR_5->state = 0;

 FUNC_1(VAR_2);

 VAR_4->enable(VAR_2);
}
