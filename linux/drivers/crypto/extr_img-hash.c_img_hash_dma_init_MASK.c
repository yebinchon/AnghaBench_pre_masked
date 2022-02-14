
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_dev {int dma_lch; int dev; int bus_addr; } ;
struct dma_slave_config {int device_fc; int dst_maxburst; int dst_addr_width; int dst_addr; int direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct dma_slave_config*) ;

__attribute__((used)) static int FUNC_4(struct img_hash_dev *VAR_5)
{
 struct dma_slave_config VAR_6;
 int VAR_7 = -VAR_3;

 VAR_5->dma_lch = FUNC_2(VAR_5->dev, "tx");
 if (!VAR_5->dma_lch) {
  FUNC_0(VAR_5->dev, "Couldn't acquire a slave DMA channel.\n");
  return -VAR_2;
 }
 VAR_6.direction = VAR_0;
 VAR_6.dst_addr = VAR_5->bus_addr;
 VAR_6.dst_addr_width = VAR_1;
 VAR_6.dst_maxburst = VAR_4;
 VAR_6.device_fc = 0;

 VAR_7 = FUNC_3(VAR_5->dma_lch, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_5->dev, "Couldn't configure DMA slave.\n");
  FUNC_1(VAR_5->dma_lch);
  return VAR_7;
 }

 return 0;
}
