
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_platform_data {TYPE_1__* dma_slave; } ;
struct TYPE_5__ {int src_maxburst; int dst_maxburst; int device_fc; void* dst_addr_width; void* src_addr_width; scalar_t__ dst_addr; int direction; } ;
struct TYPE_6__ {TYPE_2__ dma_conf; int chan; } ;
struct atmel_sha_dev {TYPE_3__ dma_lch_in; scalar_t__ phys_base; int dev; } ;
typedef int dma_cap_mask_t ;
struct TYPE_4__ {int rxdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct atmel_sha_dev *VAR_5,
    struct crypto_platform_data *VAR_6)
{
 dma_cap_mask_t VAR_7;


 FUNC_3(VAR_7);
 FUNC_2(VAR_1, VAR_7);

 VAR_5->dma_lch_in.chan = FUNC_4(VAR_7,
   VAR_4, &VAR_6->dma_slave->rxdata, VAR_5->dev, "tx");
 if (!VAR_5->dma_lch_in.chan) {
  FUNC_1(VAR_5->dev, "no DMA channel available\n");
  return -VAR_3;
 }

 VAR_5->dma_lch_in.dma_conf.direction = VAR_0;
 VAR_5->dma_lch_in.dma_conf.dst_addr = VAR_5->phys_base +
  FUNC_0(0);
 VAR_5->dma_lch_in.dma_conf.src_maxburst = 1;
 VAR_5->dma_lch_in.dma_conf.src_addr_width =
  VAR_2;
 VAR_5->dma_lch_in.dma_conf.dst_maxburst = 1;
 VAR_5->dma_lch_in.dma_conf.dst_addr_width =
  VAR_2;
 VAR_5->dma_lch_in.dma_conf.device_fc = 0;

 return 0;
}
