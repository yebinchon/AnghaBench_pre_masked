
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cpuinfo_or1k {unsigned long dcache_block_size; } ;
typedef unsigned long phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;




 int VAR_0 ;
 int VAR_1 ;
 struct cpuinfo_or1k* VAR_2 ;
 int FUNC_0 (int ,unsigned long) ;
 size_t FUNC_1 () ;

void FUNC_2(struct device *VAR_3, phys_addr_t VAR_4, size_t VAR_5,
  enum dma_data_direction VAR_6)
{
 unsigned long VAR_7;
 struct cpuinfo_or1k *VAR_8 = &VAR_2[FUNC_1()];

 switch (VAR_6) {
 case 128:

  for (VAR_7 = VAR_4; VAR_7 < VAR_4 + VAR_5;
       VAR_7 += VAR_8->dcache_block_size)
   FUNC_0(VAR_0, VAR_7);
  break;
 case 129:

  for (VAR_7 = VAR_4; VAR_7 < VAR_4 + VAR_5;
       VAR_7 += VAR_8->dcache_block_size)
   FUNC_0(VAR_1, VAR_7);
  break;
 default:





  break;
 }
}
