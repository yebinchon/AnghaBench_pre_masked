
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xilly_channel {int rd_host_buf_idx; int num_rd_buffers; int rd_host_buf_pos; int log2_element_size; int* rd_leftovers; int rd_full; int rd_fpga_buf_idx; int chan_num; TYPE_3__* endpoint; int rd_mutex; int rd_wait; int rd_spinlock; int rd_buf_size; TYPE_2__** rd_buffers; int rd_ref_count; } ;
struct TYPE_6__ {scalar_t__ fatal_error; int dev; int register_mutex; scalar_t__ registers; TYPE_1__* ephw; } ;
struct TYPE_5__ {unsigned char* addr; int dma_addr; } ;
struct TYPE_4__ {int (* hw_sync_sgl_for_device ) (TYPE_3__*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int,long) ;

__attribute__((used)) static int FUNC_10(struct xilly_channel *VAR_6, long VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 int VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_6->endpoint->fatal_error)
  return -VAR_2;
 VAR_8 = FUNC_3(&VAR_6->rd_mutex);
 if (VAR_8)
  return VAR_8;







 if (!VAR_6->rd_ref_count)
  goto done;

 VAR_11 = VAR_6->rd_host_buf_idx;

 VAR_12 = (VAR_11 == 0) ?
  VAR_6->num_rd_buffers - 1 :
  VAR_11 - 1;

 VAR_10 = VAR_6->rd_host_buf_pos >>
  VAR_6->log2_element_size;

 VAR_15 = VAR_6->rd_host_buf_pos -
  (VAR_10 << VAR_6->log2_element_size);


 if (VAR_10) {
  unsigned char *VAR_16 = VAR_6->rd_buffers[VAR_11]->addr +
   (VAR_10 << VAR_6->log2_element_size);


  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
   VAR_6->rd_leftovers[VAR_13] = *VAR_16++;

  FUNC_5(&VAR_6->rd_spinlock, VAR_9);



  if ((VAR_7 < 0) &&
      (VAR_6->rd_full ||
       (VAR_12 != VAR_6->rd_fpga_buf_idx))) {
   FUNC_6(&VAR_6->rd_spinlock, VAR_9);





   goto done;
  }


  VAR_6->rd_leftovers[3] = (VAR_15 != 0);



  if (VAR_11 == VAR_6->rd_fpga_buf_idx)
   VAR_6->rd_full = 1;
  FUNC_6(&VAR_6->rd_spinlock, VAR_9);

  if (VAR_11 >= (VAR_6->num_rd_buffers - 1))
   VAR_6->rd_host_buf_idx = 0;
  else
   VAR_6->rd_host_buf_idx++;

  VAR_6->endpoint->ephw->hw_sync_sgl_for_device(
   VAR_6->endpoint,
   VAR_6->rd_buffers[VAR_11]->dma_addr,
   VAR_6->rd_buf_size,
   VAR_0);

  FUNC_2(&VAR_6->endpoint->register_mutex);

  FUNC_1(VAR_10 - 1,
     VAR_6->endpoint->registers + VAR_5);

  FUNC_1((VAR_6->chan_num << 1) |
     (2 << 24) |
     (VAR_11 << 12),
     VAR_6->endpoint->registers + VAR_4);

  FUNC_4(&VAR_6->endpoint->register_mutex);
 } else if (VAR_11 == 0) {
  VAR_11 = VAR_6->num_rd_buffers - 1;
 } else {
  VAR_11--;
 }

 VAR_6->rd_host_buf_pos = VAR_15;

 if (VAR_7 < 0)
  goto done;
 while (1) {
  FUNC_5(&VAR_6->rd_spinlock, VAR_9);

  if (VAR_11 != VAR_6->rd_fpga_buf_idx)
   VAR_6->rd_full = 1;




  VAR_14 = !VAR_6->rd_full;

  FUNC_6(&VAR_6->rd_spinlock, VAR_9);

  if (VAR_14)
   break;






  if (VAR_7 == 0)
   FUNC_8(VAR_6->rd_wait,
       (!VAR_6->rd_full));

  else if (FUNC_9(
     VAR_6->rd_wait,
     (!VAR_6->rd_full),
     VAR_7) == 0) {
   FUNC_0(VAR_6->endpoint->dev,
     "Timed out while flushing. Output data may be lost.\n");

   VAR_8 = -VAR_3;
   break;
  }

  if (VAR_6->rd_full) {
   VAR_8 = -VAR_1;
   break;
  }
 }

done:
 FUNC_4(&VAR_6->rd_mutex);

 if (VAR_6->endpoint->fatal_error)
  return -VAR_2;

 return VAR_8;
}
