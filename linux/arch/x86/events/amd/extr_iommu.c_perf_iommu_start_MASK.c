
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int state; int iommu_cntr; int iommu_bank; int prev_count; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct amd_iommu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct amd_iommu*,int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 struct amd_iommu* FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_4, int VAR_5)
{
 struct hw_perf_event *VAR_6 = &VAR_4->hw;

 if (FUNC_0(!(VAR_6->state & VAR_2)))
  return;

 FUNC_0(!(VAR_6->state & VAR_3));
 VAR_6->state = 0;

 if (VAR_5 & VAR_1) {
  u64 VAR_7 = FUNC_2(&VAR_6->prev_count);
  struct amd_iommu *VAR_8 = FUNC_3(VAR_4);

  FUNC_1(VAR_8, VAR_6->iommu_bank, VAR_6->iommu_cntr,
         VAR_0, &VAR_7);
 }

 FUNC_5(VAR_4);
 FUNC_4(VAR_4);

}
