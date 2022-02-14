
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int prev_count; int iommu_cntr; int iommu_bank; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;
struct amd_iommu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct amd_iommu*,int ,int ,int ,int*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 struct amd_iommu* FUNC_5 (struct perf_event*) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5;
 struct hw_perf_event *VAR_6 = &VAR_2->hw;
 struct amd_iommu *VAR_7 = FUNC_5(VAR_2);

 if (FUNC_1(VAR_7, VAR_6->iommu_bank, VAR_6->iommu_cntr,
     VAR_1, &VAR_3))
  return;


 VAR_3 &= FUNC_0(47, 0);

 VAR_4 = FUNC_4(&VAR_6->prev_count);
 if (FUNC_3(&VAR_6->prev_count, VAR_4, VAR_3) != VAR_4)
  return;


 VAR_5 = (VAR_3 << VAR_0) - (VAR_4 << VAR_0);
 VAR_5 >>= VAR_0;
 FUNC_2(VAR_5, &VAR_2->count);
}
