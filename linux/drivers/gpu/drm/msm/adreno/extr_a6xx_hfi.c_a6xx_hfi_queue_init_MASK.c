
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct a6xx_hfi_queue_header {int type; int status; int size; int rx_watermark; int tx_watermark; int rx_request; scalar_t__ write_index; scalar_t__ read_index; scalar_t__ tx_request; scalar_t__ dropped; scalar_t__ msg_size; int iova; } ;
struct a6xx_hfi_queue {int seqnum; void* data; struct a6xx_hfi_queue_header* header; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct a6xx_hfi_queue *VAR_1,
  struct a6xx_hfi_queue_header *VAR_2, void *VAR_3, u64 VAR_4,
  u32 VAR_5)
{
 FUNC_1(&VAR_1->lock);
 VAR_1->header = VAR_2;
 VAR_1->data = VAR_3;
 FUNC_0(&VAR_1->seqnum, 0);


 VAR_2->iova = VAR_4;
 VAR_2->type = 10 << 8 | VAR_5;
 VAR_2->status = 1;
 VAR_2->size = VAR_0 >> 2;
 VAR_2->msg_size = 0;
 VAR_2->dropped = 0;
 VAR_2->rx_watermark = 1;
 VAR_2->tx_watermark = 1;
 VAR_2->rx_request = 1;
 VAR_2->tx_request = 0;
 VAR_2->read_index = 0;
 VAR_2->write_index = 0;
}
