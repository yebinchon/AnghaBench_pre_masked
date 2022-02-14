
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct perf_amd_iommu {int max_banks; int max_counters; unsigned long long cntr_assign_mask; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct perf_amd_iommu *VAR_1,
     u8 VAR_2, u8 VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_1->max_banks;
 VAR_6 = VAR_1->max_counters;

 if ((VAR_2 > VAR_5) || (VAR_3 > VAR_6))
  return -VAR_0;

 VAR_7 = VAR_2 + VAR_3 + (VAR_2*3);

 FUNC_0(&VAR_1->lock, VAR_4);
 VAR_1->cntr_assign_mask &= ~(1ULL<<VAR_7);
 FUNC_1(&VAR_1->lock, VAR_4);

 return 0;
}
