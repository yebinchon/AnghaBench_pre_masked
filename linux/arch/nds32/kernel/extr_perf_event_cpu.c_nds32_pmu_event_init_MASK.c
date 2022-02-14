
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int pmu; } ;
struct nds32_pmu {int (* map_event ) (struct perf_event*) ;int active_events; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct nds32_pmu*) ;
 int FUNC_6 (struct perf_event*) ;
 struct nds32_pmu* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct perf_event *VAR_2)
{
 struct nds32_pmu *VAR_3 = FUNC_7(VAR_2->pmu);
 int VAR_4 = 0;
 atomic_t *VAR_5 = &VAR_3->active_events;


 if (FUNC_4(VAR_2))
  return -VAR_1;

 if (VAR_3->map_event(VAR_2) == -VAR_0)
  return -VAR_0;

 if (!FUNC_2(VAR_5)) {
  if (FUNC_3(VAR_5) == 0) {

   VAR_4 = FUNC_5(VAR_3);
  }

  if (!VAR_4)
   FUNC_1(VAR_5);
 }

 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2);

 return VAR_4;
}
