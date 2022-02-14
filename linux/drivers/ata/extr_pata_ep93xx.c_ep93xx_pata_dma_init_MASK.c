
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {char* name; void* direction; void* port; } ;
struct ep93xx_pata_data {void* dma_tx_channel; int udma_out_phys; void* dma_rx_channel; int udma_in_phys; TYPE_1__ dma_tx_data; TYPE_1__ dma_rx_data; struct platform_device* pdev; } ;
struct dma_slave_config {void* dst_addr_width; int dst_addr; void* direction; void* src_addr_width; int src_addr; } ;
typedef int dma_cap_mask_t ;
typedef int conf ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (void*,struct dma_slave_config*) ;
 int VAR_5 ;
 int FUNC_6 (struct ep93xx_pata_data*) ;
 int FUNC_7 (struct dma_slave_config*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct ep93xx_pata_data *VAR_6)
{
 const struct platform_device *VAR_7 = VAR_6->pdev;
 dma_cap_mask_t VAR_8;
 struct dma_slave_config VAR_9;

 FUNC_2(VAR_8);
 FUNC_1(VAR_2, VAR_8);






 VAR_6->dma_rx_data.port = VAR_4;
 VAR_6->dma_rx_data.direction = VAR_0;
 VAR_6->dma_rx_data.name = "ep93xx-pata-rx";
 VAR_6->dma_rx_channel = FUNC_4(VAR_8,
  VAR_5, &VAR_6->dma_rx_data);
 if (!VAR_6->dma_rx_channel)
  return;

 VAR_6->dma_tx_data.port = VAR_4;
 VAR_6->dma_tx_data.direction = VAR_1;
 VAR_6->dma_tx_data.name = "ep93xx-pata-tx";
 VAR_6->dma_tx_channel = FUNC_4(VAR_8,
  VAR_5, &VAR_6->dma_tx_data);
 if (!VAR_6->dma_tx_channel) {
  FUNC_3(VAR_6->dma_rx_channel);
  return;
 }


 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.direction = VAR_0;
 VAR_9.src_addr = VAR_6->udma_in_phys;
 VAR_9.src_addr_width = VAR_3;
 if (FUNC_5(VAR_6->dma_rx_channel, &VAR_9)) {
  FUNC_0(&VAR_7->dev, "failed to configure rx dma channel\n");
  FUNC_6(VAR_6);
  return;
 }


 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.direction = VAR_1;
 VAR_9.dst_addr = VAR_6->udma_out_phys;
 VAR_9.dst_addr_width = VAR_3;
 if (FUNC_5(VAR_6->dma_tx_channel, &VAR_9)) {
  FUNC_0(&VAR_7->dev, "failed to configure tx dma channel\n");
  FUNC_6(VAR_6);
 }
}
