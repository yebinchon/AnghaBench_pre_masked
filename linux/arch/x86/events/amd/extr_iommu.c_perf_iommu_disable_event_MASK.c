
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct hw_perf_event {int iommu_cntr; int iommu_bank; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct amd_iommu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amd_iommu*,int ,int ,int ,unsigned long long*) ;
 struct amd_iommu* FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_1)
{
 struct amd_iommu *VAR_2 = FUNC_1(VAR_1);
 struct hw_perf_event *VAR_3 = &VAR_1->hw;
 u64 VAR_4 = 0ULL;

 FUNC_0(VAR_2, VAR_3->iommu_bank, VAR_3->iommu_cntr,
        VAR_0, &VAR_4);
}
