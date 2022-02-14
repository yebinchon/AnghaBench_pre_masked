
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_spapr_tce_table {unsigned long long page_shift; } ;
struct kvm {int dummy; } ;
struct iommu_table {unsigned long long it_page_shift; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct kvm*,struct iommu_table*,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct kvm *VAR_1,
  struct kvmppc_spapr_tce_table *VAR_2, struct iommu_table *VAR_3,
  unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6 = VAR_0;
 unsigned long VAR_7 = 1ULL << (VAR_2->page_shift - VAR_3->it_page_shift);
 unsigned long VAR_8 = VAR_4 * VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5) {
  VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_8 + VAR_5);
  if (VAR_6 != VAR_0)
   break;
 }

 return VAR_6;
}
