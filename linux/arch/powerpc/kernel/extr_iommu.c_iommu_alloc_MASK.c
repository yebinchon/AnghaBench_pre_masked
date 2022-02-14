
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_table {unsigned long it_page_shift; TYPE_1__* it_ops; scalar_t__ it_offset; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;
struct TYPE_2__ {int (* set ) (struct iommu_table*,unsigned long,unsigned int,unsigned long,int,unsigned long) ;int (* flush ) (struct iommu_table*) ;} ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct iommu_table*) ;
 int FUNC_1 (struct iommu_table*,unsigned long,unsigned int) ;
 unsigned long FUNC_2 (struct device*,struct iommu_table*,unsigned int,int *,unsigned long,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct iommu_table*,unsigned long,unsigned int,unsigned long,int,unsigned long) ;
 int FUNC_5 (struct iommu_table*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static dma_addr_t FUNC_7(struct device *VAR_1, struct iommu_table *VAR_2,
         void *VAR_3, unsigned int VAR_4,
         enum dma_data_direction VAR_5,
         unsigned long VAR_6, unsigned int VAR_7,
         unsigned long VAR_8)
{
 unsigned long VAR_9;
 dma_addr_t VAR_10 = VAR_0;
 int VAR_11;

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_4, ((void*)0), VAR_6, VAR_7);

 if (FUNC_6(VAR_9 == VAR_0))
  return VAR_0;

 VAR_9 += VAR_2->it_offset;
 VAR_10 = VAR_9 << VAR_2->it_page_shift;


 VAR_11 = VAR_2->it_ops->set(VAR_2, VAR_9, VAR_4,
          (unsigned long)VAR_3 &
          FUNC_0(VAR_2), VAR_5, VAR_8);






 if (FUNC_6(VAR_11)) {
  FUNC_1(VAR_2, VAR_10, VAR_4);
  return VAR_0;
 }


 if (VAR_2->it_ops->flush)
  VAR_2->it_ops->flush(VAR_2);


 FUNC_3();

 return VAR_10;
}
