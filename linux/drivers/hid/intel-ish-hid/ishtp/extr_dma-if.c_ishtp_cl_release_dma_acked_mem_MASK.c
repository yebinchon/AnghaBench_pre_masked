
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ishtp_device {void* ishtp_host_dma_tx_buf; int ishtp_dma_num_slots; int ishtp_dma_tx_lock; scalar_t__* ishtp_dma_tx_map; int devc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ishtp_device *VAR_1,
        void *VAR_2,
        uint8_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = (VAR_3 / VAR_0)
  + 1 * (VAR_3 % VAR_0 != 0);
 int VAR_6, VAR_7;

 if ((VAR_2 - VAR_1->ishtp_host_dma_tx_buf) % VAR_0) {
  FUNC_0(VAR_1->devc, "Bad DMA Tx ack address\n");
  return;
 }

 VAR_6 = (VAR_2 - VAR_1->ishtp_host_dma_tx_buf) / VAR_0;
 FUNC_1(&VAR_1->ishtp_dma_tx_lock, VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if ((VAR_6 + VAR_7) >= VAR_1->ishtp_dma_num_slots ||
     !VAR_1->ishtp_dma_tx_map[VAR_6+VAR_7]) {

   FUNC_2(&VAR_1->ishtp_dma_tx_lock, VAR_4);
   FUNC_0(VAR_1->devc, "Bad DMA Tx ack address\n");
   return;
  }
  VAR_1->ishtp_dma_tx_map[VAR_6+VAR_7] = 0;
 }
 FUNC_2(&VAR_1->ishtp_dma_tx_lock, VAR_4);
}
