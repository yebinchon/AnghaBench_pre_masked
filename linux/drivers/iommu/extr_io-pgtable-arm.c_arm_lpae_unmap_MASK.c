
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iommu_iotlb_gather {int dummy; } ;
struct io_pgtable_ops {int dummy; } ;
struct TYPE_3__ {unsigned long long ias; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;
struct arm_lpae_io_pgtable {TYPE_2__ iop; int * pgd; } ;
typedef int arm_lpae_iopte ;


 int FUNC_0 (struct arm_lpae_io_pgtable*) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (struct arm_lpae_io_pgtable*,struct iommu_iotlb_gather*,unsigned long,size_t,int,int *) ;
 struct arm_lpae_io_pgtable* FUNC_3 (struct io_pgtable_ops*) ;

__attribute__((used)) static size_t FUNC_4(struct io_pgtable_ops *VAR_0, unsigned long VAR_1,
        size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct arm_lpae_io_pgtable *VAR_4 = FUNC_3(VAR_0);
 arm_lpae_iopte *VAR_5 = VAR_4->pgd;
 int VAR_6 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_1 >= (1ULL << VAR_4->iop.cfg.ias)))
  return 0;

 return FUNC_2(VAR_4, VAR_3, VAR_1, VAR_2, VAR_6, VAR_5);
}
