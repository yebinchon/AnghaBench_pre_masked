
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_table {TYPE_1__* it_ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* flush ) (struct iommu_table*) ;} ;


 int FUNC_0 (struct iommu_table*,int ,unsigned int) ;
 int FUNC_1 (struct iommu_table*) ;

__attribute__((used)) static void FUNC_2(struct iommu_table *VAR_0, dma_addr_t VAR_1,
  unsigned int VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);





 if (VAR_0->it_ops->flush)
  VAR_0->it_ops->flush(VAR_0);
}
