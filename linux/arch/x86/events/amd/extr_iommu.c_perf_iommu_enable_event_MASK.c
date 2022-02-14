
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct hw_perf_event {int iommu_cntr; int iommu_bank; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct amd_iommu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hw_perf_event*) ;
 int FUNC_2 (struct hw_perf_event*) ;
 int FUNC_3 (struct hw_perf_event*) ;
 int FUNC_4 (struct hw_perf_event*) ;
 int FUNC_5 (struct hw_perf_event*) ;
 int FUNC_6 (struct hw_perf_event*) ;
 int FUNC_7 (struct hw_perf_event*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct amd_iommu*,int ,int ,int ,int*) ;
 struct amd_iommu* FUNC_9 (struct perf_event*) ;

__attribute__((used)) static void FUNC_10(struct perf_event *VAR_4)
{
 struct amd_iommu *VAR_5 = FUNC_9(VAR_4);
 struct hw_perf_event *VAR_6 = &VAR_4->hw;
 u8 VAR_7 = VAR_6->iommu_bank;
 u8 VAR_8 = VAR_6->iommu_cntr;
 u64 VAR_9 = 0ULL;

 VAR_9 = FUNC_1(VAR_6);
 FUNC_8(VAR_5, VAR_7, VAR_8, VAR_0, &VAR_9);

 VAR_9 = FUNC_3(VAR_6);
 VAR_9 = FUNC_2(VAR_6) | (VAR_9 << 32);
 if (VAR_9)
  VAR_9 |= FUNC_0(31);
 FUNC_8(VAR_5, VAR_7, VAR_8, VAR_1, &VAR_9);

 VAR_9 = FUNC_7(VAR_6);
 VAR_9 = FUNC_6(VAR_6) | (VAR_9 << 32);
 if (VAR_9)
  VAR_9 |= FUNC_0(31);
 FUNC_8(VAR_5, VAR_7, VAR_8, VAR_3, &VAR_9);

 VAR_9 = FUNC_5(VAR_6);
 VAR_9 = FUNC_4(VAR_6) | (VAR_9 << 32);
 if (VAR_9)
  VAR_9 |= FUNC_0(31);
 FUNC_8(VAR_5, VAR_7, VAR_8, VAR_2, &VAR_9);
}
