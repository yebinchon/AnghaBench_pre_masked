
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct crypto_platform_data {TYPE_2__* dma_slave; } ;
struct TYPE_6__ {int src_maxburst; int dst_maxburst; int device_fc; void* dst_addr_width; void* src_addr_width; scalar_t__ dst_addr; int direction; } ;
struct TYPE_10__ {void* chan; TYPE_1__ dma_conf; } ;
struct TYPE_8__ {int src_maxburst; int dst_maxburst; int device_fc; void* dst_addr_width; void* src_addr_width; scalar_t__ src_addr; int direction; } ;
struct TYPE_9__ {TYPE_3__ dma_conf; void* chan; } ;
struct atmel_tdes_dev {int dev; TYPE_5__ dma_lch_in; TYPE_4__ dma_lch_out; scalar_t__ phys_base; } ;
typedef int dma_cap_mask_t ;
struct TYPE_7__ {int txdata; int rxdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ,int *,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct atmel_tdes_dev *VAR_8,
   struct crypto_platform_data *VAR_9)
{
 dma_cap_mask_t VAR_10;

 FUNC_2(VAR_10);
 FUNC_1(VAR_2, VAR_10);


 VAR_8->dma_lch_in.chan = FUNC_4(VAR_10,
   VAR_7, &VAR_9->dma_slave->rxdata, VAR_8->dev, "tx");
 if (!VAR_8->dma_lch_in.chan)
  goto err_dma_in;

 VAR_8->dma_lch_in.dma_conf.direction = VAR_1;
 VAR_8->dma_lch_in.dma_conf.dst_addr = VAR_8->phys_base +
  VAR_5;
 VAR_8->dma_lch_in.dma_conf.src_maxburst = 1;
 VAR_8->dma_lch_in.dma_conf.src_addr_width =
  VAR_3;
 VAR_8->dma_lch_in.dma_conf.dst_maxburst = 1;
 VAR_8->dma_lch_in.dma_conf.dst_addr_width =
  VAR_3;
 VAR_8->dma_lch_in.dma_conf.device_fc = 0;

 VAR_8->dma_lch_out.chan = FUNC_4(VAR_10,
   VAR_7, &VAR_9->dma_slave->txdata, VAR_8->dev, "rx");
 if (!VAR_8->dma_lch_out.chan)
  goto err_dma_out;

 VAR_8->dma_lch_out.dma_conf.direction = VAR_0;
 VAR_8->dma_lch_out.dma_conf.src_addr = VAR_8->phys_base +
  VAR_6;
 VAR_8->dma_lch_out.dma_conf.src_maxburst = 1;
 VAR_8->dma_lch_out.dma_conf.src_addr_width =
  VAR_3;
 VAR_8->dma_lch_out.dma_conf.dst_maxburst = 1;
 VAR_8->dma_lch_out.dma_conf.dst_addr_width =
  VAR_3;
 VAR_8->dma_lch_out.dma_conf.device_fc = 0;

 return 0;

err_dma_out:
 FUNC_3(VAR_8->dma_lch_in.chan);
err_dma_in:
 FUNC_0(VAR_8->dev, "no DMA channel available\n");
 return -VAR_4;
}
