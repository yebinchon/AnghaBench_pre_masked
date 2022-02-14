
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct iommu_table*) ;
 int FUNC_2 (struct iommu_table*,int ,unsigned int) ;
 unsigned int FUNC_3 (int ,size_t,int ) ;

void FUNC_4(struct iommu_table *VAR_1, dma_addr_t VAR_2,
        size_t VAR_3, enum dma_data_direction VAR_4,
        unsigned long VAR_5)
{
 unsigned int VAR_6;

 FUNC_0(VAR_4 == VAR_0);

 if (VAR_1) {
  VAR_6 = FUNC_3(VAR_2, VAR_3,
      FUNC_1(VAR_1));
  FUNC_2(VAR_1, VAR_2, VAR_6);
 }
}
