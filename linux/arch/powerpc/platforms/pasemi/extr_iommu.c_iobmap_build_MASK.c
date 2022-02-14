
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu_table {long it_offset; scalar_t__ it_base; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (char*,long,long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct iommu_table *VAR_5, long VAR_6,
    long VAR_7, unsigned long VAR_8,
    enum dma_data_direction VAR_9,
    unsigned long VAR_10)
{
 u32 *VAR_11;
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_2("iobmap: build at: %lx, %lx, addr: %lx\n", VAR_6, VAR_7, VAR_8);

 VAR_13 = (VAR_5->it_offset + VAR_6) << VAR_1;

 VAR_11 = ((u32 *)VAR_5->it_base) + VAR_6;

 while (VAR_7--) {
  VAR_12 = FUNC_0(VAR_8) >> VAR_1;

  *(VAR_11++) = VAR_0 | VAR_12;

  FUNC_1(VAR_4+VAR_3, VAR_13 >> 14);

  VAR_8 += VAR_2;
  VAR_13 += VAR_2;
 }
 return 0;
}
