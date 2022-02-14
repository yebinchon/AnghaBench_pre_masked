
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dma_length; int dma_address; } ;
struct iommu_table {TYPE_1__* it_ops; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* flush ) (struct iommu_table*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct iommu_table*) ;
 int FUNC_2 (struct iommu_table*,int ,unsigned int) ;
 unsigned int FUNC_3 (int ,int ,int ) ;
 struct scatterlist* FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct iommu_table*) ;

void FUNC_6(struct iommu_table *VAR_1, struct scatterlist *VAR_2,
   int VAR_3, enum dma_data_direction VAR_4,
   unsigned long VAR_5)
{
 struct scatterlist *VAR_6;

 FUNC_0(VAR_4 == VAR_0);

 if (!VAR_1)
  return;

 VAR_6 = VAR_2;
 while (VAR_3--) {
  unsigned int VAR_7;
  dma_addr_t VAR_8 = VAR_6->dma_address;

  if (VAR_6->dma_length == 0)
   break;
  VAR_7 = FUNC_3(VAR_8, VAR_6->dma_length,
      FUNC_1(VAR_1));
  FUNC_2(VAR_1, VAR_8, VAR_7);
  VAR_6 = FUNC_4(VAR_6);
 }





 if (VAR_1->it_ops->flush)
  VAR_1->it_ops->flush(VAR_1);
}
