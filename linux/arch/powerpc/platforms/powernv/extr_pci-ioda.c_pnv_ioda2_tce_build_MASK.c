
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct iommu_table*,long,long,int) ;
 int FUNC_1 (struct iommu_table*,long,long,unsigned long,int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct iommu_table *VAR_0, long VAR_1,
  long VAR_2, unsigned long VAR_3,
  enum dma_data_direction VAR_4,
  unsigned long VAR_5)
{
 int VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5);

 if (!VAR_6)
  FUNC_0(VAR_0, VAR_1, VAR_2, 0);

 return VAR_6;
}
