
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long dst_addr; int dst_addr_width; unsigned int dst_maxburst; unsigned long src_addr; int src_addr_width; unsigned int src_maxburst; } ;
struct tegra_dma_channel {TYPE_1__ dma_sconfig; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;




 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (struct tegra_dma_channel*,int) ;
 int FUNC_2 (struct tegra_dma_channel*) ;

__attribute__((used)) static int FUNC_3(struct tegra_dma_channel *VAR_2,
 enum dma_transfer_direction VAR_3, unsigned long *VAR_4,
 unsigned long *VAR_5, unsigned long *VAR_6, unsigned int *VAR_7,
 enum dma_slave_buswidth *VAR_8)
{
 switch (VAR_3) {
 case 128:
  *VAR_4 = VAR_2->dma_sconfig.dst_addr;
  *VAR_5 = FUNC_1(VAR_2, VAR_2->dma_sconfig.dst_addr_width);
  *VAR_7 = VAR_2->dma_sconfig.dst_maxburst;
  *VAR_8 = VAR_2->dma_sconfig.dst_addr_width;
  *VAR_6 = VAR_1;
  return 0;

 case 129:
  *VAR_4 = VAR_2->dma_sconfig.src_addr;
  *VAR_5 = FUNC_1(VAR_2, VAR_2->dma_sconfig.src_addr_width);
  *VAR_7 = VAR_2->dma_sconfig.src_maxburst;
  *VAR_8 = VAR_2->dma_sconfig.src_addr_width;
  *VAR_6 = 0;
  return 0;

 default:
  FUNC_0(FUNC_2(VAR_2), "DMA direction is not supported\n");
  return -VAR_0;
 }
 return -VAR_0;
}
