
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int * ishtp_dma_tx_map; int * ishtp_host_dma_rx_buf; int * ishtp_host_dma_tx_buf; int ishtp_host_dma_rx_buf_size; int devc; int ishtp_host_dma_rx_buf_phys; int ishtp_host_dma_tx_buf_size; int ishtp_host_dma_tx_buf_phys; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ishtp_device *VAR_0)
{
 dma_addr_t VAR_1;

 if (VAR_0->ishtp_host_dma_tx_buf) {
  VAR_1 = VAR_0->ishtp_host_dma_tx_buf_phys;
  FUNC_0(VAR_0->devc, VAR_0->ishtp_host_dma_tx_buf_size,
      VAR_0->ishtp_host_dma_tx_buf, VAR_1);
 }

 if (VAR_0->ishtp_host_dma_rx_buf) {
  VAR_1 = VAR_0->ishtp_host_dma_rx_buf_phys;
  FUNC_0(VAR_0->devc, VAR_0->ishtp_host_dma_rx_buf_size,
      VAR_0->ishtp_host_dma_rx_buf, VAR_1);
 }

 FUNC_1(VAR_0->ishtp_dma_tx_map);
 VAR_0->ishtp_host_dma_tx_buf = ((void*)0);
 VAR_0->ishtp_host_dma_rx_buf = ((void*)0);
 VAR_0->ishtp_dma_tx_map = ((void*)0);
}
