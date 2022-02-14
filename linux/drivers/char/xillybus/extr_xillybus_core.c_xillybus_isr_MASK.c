
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xilly_endpoint {int* msgbuf_addr; int msg_buf_size; int msg_counter; int failed_messages; unsigned int num_channels; unsigned int idtlen; int fatal_error; scalar_t__ registers; int msgbuf_dma_addr; TYPE_1__* ephw; int dev; int ep_wait; struct xilly_channel** channels; } ;
struct xilly_channel {unsigned int num_wr_buffers; unsigned int wr_fpga_buf_idx; unsigned int num_rd_buffers; unsigned int rd_fpga_buf_idx; unsigned int wr_host_buf_idx; int wr_ready; unsigned int wr_eof; int wr_hangup; int wr_wait; int wr_spinlock; int wr_empty; int wr_sleepy; int wr_ready_wait; int wr_supports_nonempty; int rd_workitem; int rd_synchronous; int rd_wait; int rd_spinlock; int rd_full; TYPE_2__** wr_buffers; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {unsigned int end_offset; } ;
struct TYPE_3__ {int (* hw_sync_sgl_for_device ) (struct xilly_endpoint*,int ,int,int ) ;int (* hw_sync_sgl_for_cpu ) (struct xilly_endpoint*,int ,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct xilly_endpoint*,int*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xilly_endpoint*,int ,int,int ) ;
 int FUNC_8 (struct xilly_endpoint*,int ,int,int ) ;
 int FUNC_9 (struct xilly_endpoint*,int ,int,int ) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;

irqreturn_t FUNC_11(int VAR_5, void *VAR_6)
{
 struct xilly_endpoint *VAR_7 = VAR_6;
 u32 *VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 struct xilly_channel *VAR_16;

 VAR_8 = VAR_7->msgbuf_addr;
 VAR_9 = VAR_7->msg_buf_size/sizeof(u32);

 VAR_7->ephw->hw_sync_sgl_for_cpu(VAR_7,
          VAR_7->msgbuf_dma_addr,
          VAR_7->msg_buf_size,
          VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10 += 2) {
  if (((VAR_8[VAR_10+1] >> 28) & 0xf) != VAR_7->msg_counter) {
   FUNC_3(VAR_7, &VAR_8[VAR_10]);
   FUNC_1(VAR_7->dev,
     "Sending a NACK on counter %x (instead of %x) on entry %d\n",
     ((VAR_8[VAR_10+1] >> 28) & 0xf),
     VAR_7->msg_counter,
     VAR_10/2);

   if (++VAR_7->failed_messages > 10) {
    FUNC_0(VAR_7->dev,
     "Lost sync with interrupt messages. Stopping.\n");
   } else {
    VAR_7->ephw->hw_sync_sgl_for_device(
     VAR_7,
     VAR_7->msgbuf_dma_addr,
     VAR_7->msg_buf_size,
     VAR_0);

    FUNC_2(0x01,
       VAR_7->registers + VAR_3);
   }
   return VAR_1;
  } else if (VAR_8[VAR_10] & (1 << 22))
   break;
 }

 if (VAR_10 >= VAR_9) {
  FUNC_0(VAR_7->dev, "Bad interrupt message. Stopping.\n");
  return VAR_1;
 }

 VAR_9 = VAR_10 + 2;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10 += 2) {
  VAR_11 = (VAR_8[VAR_10] >> 24) & 0xff;

  VAR_15 = VAR_8[VAR_10] & 1;
  VAR_12 = (VAR_8[VAR_10] >> 1) & 0x7ff;
  VAR_13 = (VAR_8[VAR_10] >> 12) & 0x3ff;
  VAR_14 = VAR_8[VAR_10+1] & 0xfffffff;

  switch (VAR_11) {
  case 128:
   if ((VAR_12 > VAR_7->num_channels) ||
       (VAR_12 == 0)) {
    FUNC_3(VAR_7, &VAR_8[VAR_10]);
    break;
   }

   VAR_16 = VAR_7->channels[VAR_12];

   if (VAR_15) {
    if (VAR_13 >= VAR_16->num_wr_buffers) {
     FUNC_3(VAR_7, &VAR_8[VAR_10]);
     break;
    }
    FUNC_5(&VAR_16->wr_spinlock);
    VAR_16->wr_buffers[VAR_13]->end_offset =
     VAR_14;
    VAR_16->wr_fpga_buf_idx = VAR_13;
    VAR_16->wr_empty = 0;
    VAR_16->wr_sleepy = 0;
    FUNC_6(&VAR_16->wr_spinlock);

    FUNC_10(&VAR_16->wr_wait);

   } else {


    if (VAR_13 >= VAR_16->num_rd_buffers) {
     FUNC_3(VAR_7, &VAR_8[VAR_10]);
     break;
    }

    FUNC_5(&VAR_16->rd_spinlock);
    VAR_16->rd_fpga_buf_idx = VAR_13;
    VAR_16->rd_full = 0;
    FUNC_6(&VAR_16->rd_spinlock);

    FUNC_10(&VAR_16->rd_wait);
    if (!VAR_16->rd_synchronous)
     FUNC_4(
      VAR_4,
      &VAR_16->rd_workitem,
      VAR_2);
   }

   break;
  case 130:
   if ((VAR_12 > VAR_7->num_channels) ||
       (VAR_12 == 0) || (!VAR_15) ||
       !VAR_7->channels[VAR_12]->wr_supports_nonempty) {
    FUNC_3(VAR_7, &VAR_8[VAR_10]);
    break;
   }

   VAR_16 = VAR_7->channels[VAR_12];

   if (VAR_13 >= VAR_16->num_wr_buffers) {
    FUNC_3(VAR_7, &VAR_8[VAR_10]);
    break;
   }
   FUNC_5(&VAR_16->wr_spinlock);
   if (VAR_13 == VAR_16->wr_host_buf_idx)
    VAR_16->wr_ready = 1;
   FUNC_6(&VAR_16->wr_spinlock);

   FUNC_10(&VAR_16->wr_ready_wait);

   break;
  case 129:
   VAR_7->idtlen = VAR_14;
   FUNC_10(&VAR_7->ep_wait);

   break;
  case 131:
   if ((VAR_12 > VAR_7->num_channels) ||
       (VAR_12 == 0) || (!VAR_15) ||
       !VAR_7->channels[VAR_12]->num_wr_buffers) {
    FUNC_3(VAR_7, &VAR_8[VAR_10]);
    break;
   }
   VAR_16 = VAR_7->channels[VAR_12];
   FUNC_5(&VAR_16->wr_spinlock);
   VAR_16->wr_eof = VAR_13;
   VAR_16->wr_sleepy = 0;

   VAR_16->wr_hangup = VAR_16->wr_empty &&
    (VAR_16->wr_host_buf_idx == VAR_13);

   FUNC_6(&VAR_16->wr_spinlock);

   FUNC_10(&VAR_16->wr_wait);

   break;
  case 132:
   VAR_7->fatal_error = 1;
   FUNC_10(&VAR_7->ep_wait);
   FUNC_0(VAR_7->dev,
    "FPGA reported a fatal error. This means that the low-level communication with the device has failed. This hardware problem is most likely unrelated to Xillybus (neither kernel module nor FPGA core), but reports are still welcome. All I/O is aborted.\n");
   break;
  default:
   FUNC_3(VAR_7, &VAR_8[VAR_10]);
   break;
  }
 }

 VAR_7->ephw->hw_sync_sgl_for_device(VAR_7,
      VAR_7->msgbuf_dma_addr,
      VAR_7->msg_buf_size,
      VAR_0);

 VAR_7->msg_counter = (VAR_7->msg_counter + 1) & 0xf;
 VAR_7->failed_messages = 0;
 FUNC_2(0x03, VAR_7->registers + VAR_3);

 return VAR_1;
}
