
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (struct device*,struct iommu_table*,unsigned int) ;
 int FUNC_1 (char*,unsigned int,struct iommu_table*) ;
 int FUNC_2 (struct iommu_table*,unsigned long,unsigned int,unsigned long,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static dma_addr_t FUNC_4(struct device *VAR_3, struct iommu_table *VAR_4,
         void *VAR_5, unsigned int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 dma_addr_t VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6);
 if (FUNC_3(VAR_8 == VAR_0)) {
  FUNC_1("failed to allocate %u pages in iommu %p\n",
   VAR_6, VAR_4);
  return VAR_0;
 }


 VAR_9 = (VAR_8 << VAR_2) | ((unsigned long)VAR_5 & ~VAR_1);


 FUNC_2(VAR_4, VAR_8, VAR_6, (unsigned long)VAR_5 & VAR_1,
    VAR_7);
 return VAR_9;
}
