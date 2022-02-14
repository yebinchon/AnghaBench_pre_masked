
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
 int VAR_1 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct arm_pmu* FUNC_5 (int ) ;

__attribute__((used)) static u64 FUNC_6(struct perf_event *VAR_2)
{
 struct arm_pmu *VAR_3 = FUNC_5(VAR_2->pmu);
 struct hw_perf_event *VAR_4 = &VAR_2->hw;
 int VAR_5 = VAR_4->idx;
 u64 VAR_6 = 0;

 if (!FUNC_0(VAR_3, VAR_5))
  FUNC_2("CPU%u reading wrong counter %d\n",
   FUNC_4(), VAR_5);
 else if (VAR_5 == VAR_0)
  VAR_6 = FUNC_3(VAR_1);
 else
  VAR_6 = FUNC_1(VAR_2);

 return VAR_6;
}
