
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {scalar_t__ it_base; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,long,long,unsigned long) ;
 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned int*,long) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct iommu_table *VAR_6, long VAR_7,
         long VAR_8, unsigned long VAR_9,
         enum dma_data_direction VAR_10,
         unsigned long VAR_11)
{
 unsigned int *VAR_12, *VAR_13;
 unsigned int VAR_14;
 long VAR_15;

 FUNC_0("dart: build at: %lx, %lx, addr: %x\n", VAR_7, VAR_8, VAR_9);

 VAR_13 = VAR_12 = ((unsigned int*)VAR_6->it_base) + VAR_7;




 VAR_15 = VAR_8;
 while (VAR_15--) {
  VAR_14 = FUNC_1(VAR_9) >> VAR_2;

  *(VAR_12++) = VAR_1 | (VAR_14 & VAR_0);

  VAR_9 += VAR_3;
 }
 FUNC_2(VAR_13, VAR_8);

 if (VAR_5) {
  VAR_14 = VAR_7;
  while (VAR_8--)
   FUNC_3(VAR_14++);
 } else {
  VAR_4 = 1;
 }
 return 0;
}
