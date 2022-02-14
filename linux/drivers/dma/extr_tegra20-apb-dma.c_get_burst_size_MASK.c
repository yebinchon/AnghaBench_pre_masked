
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dma_channel {int dummy; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct tegra_dma_channel *VAR_3,
 u32 VAR_4, enum dma_slave_buswidth VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;





 VAR_7 = VAR_4 * VAR_5;
 VAR_8 = VAR_7 / 4;


 if (!VAR_8) {
  if (VAR_6 & 0xF)
   return VAR_0;
  else if ((VAR_6 >> 4) & 0x1)
   return VAR_1;
  else
   return VAR_2;
 }
 if (VAR_8 < 4)
  return VAR_0;
 else if (VAR_8 < 8)
  return VAR_1;
 else
  return VAR_2;
}
