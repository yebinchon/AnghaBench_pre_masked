
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_dev {int dma_completion; int dev; int * dma_lch; int dma_maxburst; scalar_t__ phys_base; } ;
struct dma_slave_config {int device_fc; int dst_maxburst; int src_maxburst; int dst_addr_width; scalar_t__ dst_addr; int direction; } ;
typedef int dma_conf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct dma_slave_config*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dma_slave_config*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct stm32_hash_dev *VAR_4)
{
 struct dma_slave_config VAR_5;
 int VAR_6;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.direction = VAR_0;
 VAR_5.dst_addr = VAR_4->phys_base + VAR_3;
 VAR_5.dst_addr_width = VAR_1;
 VAR_5.src_maxburst = VAR_4->dma_maxburst;
 VAR_5.dst_maxburst = VAR_4->dma_maxburst;
 VAR_5.device_fc = 0;

 VAR_4->dma_lch = FUNC_2(VAR_4->dev, "in");
 if (!VAR_4->dma_lch) {
  FUNC_0(VAR_4->dev, "Couldn't acquire a slave DMA channel.\n");
  return -VAR_2;
 }

 VAR_6 = FUNC_3(VAR_4->dma_lch, &VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_4->dma_lch);
  VAR_4->dma_lch = ((void*)0);
  FUNC_0(VAR_4->dev, "Couldn't configure DMA slave.\n");
  return VAR_6;
 }

 FUNC_4(&VAR_4->dma_completion);

 return 0;
}
