
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_slave_config {int dst_maxburst; int src_maxburst; int src_addr_width; scalar_t__ src_addr; int direction; int dst_addr_width; scalar_t__ dst_addr; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int cryp_dma_complete; void* chan_cryp2mem; void* chan_mem2cryp; int cfg_cryp2mem; int mask; int cfg_mem2cryp; } ;
struct cryp_device_data {TYPE_1__ dma; scalar_t__ phybase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (void*,struct dma_slave_config*) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(struct cryp_device_data *VAR_9,
       struct device *VAR_10)
{
 struct dma_slave_config VAR_11 = {
  .direction = VAR_3,
  .dst_addr = VAR_9->phybase + VAR_1,
  .dst_addr_width = VAR_5,
  .dst_maxburst = 4,
 };
 struct dma_slave_config VAR_12 = {
  .direction = VAR_2,
  .src_addr = VAR_9->phybase + VAR_0,
  .src_addr_width = VAR_5,
  .src_maxburst = 4,
 };

 FUNC_1(VAR_9->dma.mask);
 FUNC_0(VAR_4, VAR_9->dma.mask);

 VAR_9->dma.cfg_mem2cryp = VAR_7;
 VAR_9->dma.chan_mem2cryp =
  FUNC_2(VAR_9->dma.mask,
        VAR_8,
        VAR_9->dma.cfg_mem2cryp);

 VAR_9->dma.cfg_cryp2mem = VAR_6;
 VAR_9->dma.chan_cryp2mem =
  FUNC_2(VAR_9->dma.mask,
        VAR_8,
        VAR_9->dma.cfg_cryp2mem);

 FUNC_3(VAR_9->dma.chan_mem2cryp, &VAR_11);
 FUNC_3(VAR_9->dma.chan_cryp2mem, &VAR_12);

 FUNC_4(&VAR_9->dma.cryp_dma_complete);
}
