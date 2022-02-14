
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {int it_page_shift; long it_offset; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (struct iommu_table*,int,unsigned long,int) ;

int FUNC_4(struct iommu_table *VAR_2, long VAR_3, long VAR_4,
  unsigned long VAR_5, enum dma_data_direction VAR_6,
  unsigned long VAR_7)
{
 u64 VAR_8 = FUNC_2(VAR_6);
 u64 VAR_9 = FUNC_0(VAR_5) >> VAR_2->it_page_shift;
 long VAR_10;

 if (VAR_8 & VAR_1)
  VAR_8 |= VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  unsigned long VAR_11 = VAR_8 |
   ((VAR_9 + VAR_10) << VAR_2->it_page_shift);
  unsigned long VAR_12 = VAR_3 - VAR_2->it_offset + VAR_10;

  *(FUNC_3(VAR_2, 0, VAR_12, 1)) = FUNC_1(VAR_11);
 }

 return 0;
}
