
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_platform_data {int dma_filter; int mem_to_engine; } ;
struct TYPE_2__ {int complete; int chan_mem2hash; int cfg_mem2hash; int mask; } ;
struct hash_device_data {TYPE_1__ dma; scalar_t__ phybase; } ;
struct dma_slave_config {int dst_maxburst; int dst_addr_width; scalar_t__ dst_addr; int direction; } ;
struct device {struct hash_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,struct dma_slave_config*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hash_device_data *VAR_4,
       struct device *VAR_5)
{
 struct hash_platform_data *VAR_6 = VAR_5->platform_data;
 struct dma_slave_config VAR_7 = {
  .direction = VAR_0,
  .dst_addr = VAR_4->phybase + VAR_3,
  .dst_addr_width = VAR_2,
  .dst_maxburst = 16,
 };

 FUNC_1(VAR_4->dma.mask);
 FUNC_0(VAR_1, VAR_4->dma.mask);

 VAR_4->dma.cfg_mem2hash = VAR_6->mem_to_engine;
 VAR_4->dma.chan_mem2hash =
  FUNC_2(VAR_4->dma.mask,
        VAR_6->dma_filter,
        VAR_4->dma.cfg_mem2hash);

 FUNC_3(VAR_4->dma.chan_mem2hash, &VAR_7);

 FUNC_4(&VAR_4->dma.complete);
}
