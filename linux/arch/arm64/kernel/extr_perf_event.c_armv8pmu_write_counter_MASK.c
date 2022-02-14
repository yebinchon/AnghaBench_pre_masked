
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct arm_pmu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct arm_pmu*,int) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,int) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 () ;
 struct arm_pmu* FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_2, u64 VAR_3)
{
 struct arm_pmu *VAR_4 = FUNC_5(VAR_2->pmu);
 struct hw_perf_event *VAR_5 = &VAR_2->hw;
 int VAR_6 = VAR_5->idx;

 if (!FUNC_0(VAR_4, VAR_6))
  FUNC_3("CPU%u writing wrong counter %d\n",
   FUNC_4(), VAR_6);
 else if (VAR_6 == VAR_0) {






  if (!FUNC_1(VAR_2))
   VAR_3 |= 0xffffffff00000000ULL;
  FUNC_6(VAR_3, VAR_1);
 } else
  FUNC_2(VAR_2, VAR_3);
}
