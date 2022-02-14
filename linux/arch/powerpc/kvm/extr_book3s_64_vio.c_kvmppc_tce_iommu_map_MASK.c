
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_spapr_tce_table {unsigned long long page_shift; } ;
struct kvm {int dummy; } ;
struct iommu_table {unsigned long long it_page_shift; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_table*) ;
 unsigned long FUNC_1 (struct kvm*,struct iommu_table*,unsigned long,unsigned long,int) ;

__attribute__((used)) static long FUNC_2(struct kvm *VAR_1,
  struct kvmppc_spapr_tce_table *VAR_2, struct iommu_table *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5,
  enum dma_data_direction VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9 = VAR_0;
 unsigned long VAR_10 = 1ULL << (VAR_2->page_shift - VAR_3->it_page_shift);
 unsigned long VAR_11 = VAR_4 * VAR_10;

 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_10;
   ++VAR_7, VAR_8 += FUNC_0(VAR_3)) {

  VAR_9 = FUNC_1(VAR_1, VAR_3,
    VAR_11 + VAR_7, VAR_5 + VAR_8, VAR_6);
  if (VAR_9 != VAR_0)
   break;
 }

 return VAR_9;
}
