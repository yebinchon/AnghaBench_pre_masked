
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armv8pmu_probe_info {int present; struct arm_pmu* pmu; } ;
struct arm_pmu {int supported_cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct armv8pmu_probe_info*,int) ;

__attribute__((used)) static int FUNC_1(struct arm_pmu *VAR_2)
{
 struct armv8pmu_probe_info VAR_3 = {
  .pmu = VAR_2,
  .present = 0,
 };
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->supported_cpus,
        VAR_1,
        &VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 return VAR_3.present ? 0 : -VAR_0;
}
