
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ishtp_device {int ishtp_host_dma_tx_buf_size; int ishtp_host_dma_rx_buf_size; int ishtp_dma_num_slots; void* ishtp_host_dma_rx_buf_phys; void* ishtp_host_dma_rx_buf; int devc; int ishtp_dma_tx_lock; int ishtp_dma_tx_map; void* ishtp_host_dma_tx_buf_phys; void* ishtp_host_dma_tx_buf; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,void**,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ishtp_device *VAR_2)
{
 dma_addr_t VAR_3;

 if (VAR_2->ishtp_host_dma_tx_buf)
  return;

 VAR_2->ishtp_host_dma_tx_buf_size = 1024*1024;
 VAR_2->ishtp_host_dma_rx_buf_size = 1024*1024;


 VAR_2->ishtp_host_dma_tx_buf = FUNC_0(VAR_2->devc,
     VAR_2->ishtp_host_dma_tx_buf_size,
     &VAR_3, VAR_1);
 if (VAR_2->ishtp_host_dma_tx_buf)
  VAR_2->ishtp_host_dma_tx_buf_phys = VAR_3;

 VAR_2->ishtp_dma_num_slots = VAR_2->ishtp_host_dma_tx_buf_size /
      VAR_0;

 VAR_2->ishtp_dma_tx_map = FUNC_1(VAR_2->ishtp_dma_num_slots,
     sizeof(uint8_t),
     VAR_1);
 FUNC_2(&VAR_2->ishtp_dma_tx_lock);


 VAR_2->ishtp_host_dma_rx_buf = FUNC_0(VAR_2->devc,
     VAR_2->ishtp_host_dma_rx_buf_size,
      &VAR_3, VAR_1);

 if (VAR_2->ishtp_host_dma_rx_buf)
  VAR_2->ishtp_host_dma_rx_buf_phys = VAR_3;
}
