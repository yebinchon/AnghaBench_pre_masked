
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_endpoint {int num_channels; struct device* dev; struct xilly_channel** channels; } ;
struct xilly_channel {int num_wr_buffers; int num_rd_buffers; int wr_fpga_buf_idx; int wr_empty; int wr_sleepy; int chan_num; int log2_element_size; int rd_buf_size; int rd_allow_partial; int rd_synchronous; int rd_exclusive_open; int seekable; int wr_buf_size; int wr_supports_nonempty; int wr_allow_partial; int wr_synchronous; int wr_exclusive_open; struct xilly_buffer** wr_buffers; struct xilly_buffer** rd_buffers; struct xilly_endpoint* endpoint; int rd_workitem; int wr_ready_wait; int wr_wait; int rd_wait; int rd_mutex; int wr_mutex; int rd_spinlock; int wr_spinlock; scalar_t__ rd_ref_count; scalar_t__ wr_ref_count; scalar_t__ rd_full; scalar_t__ rd_host_buf_pos; scalar_t__ rd_host_buf_idx; scalar_t__ rd_fpga_buf_idx; scalar_t__ wr_ready; scalar_t__ wr_host_buf_pos; scalar_t__ wr_host_buf_idx; } ;
struct xilly_buffer {int dummy; } ;
struct xilly_alloc_state {int nbuffer; int regdirection; int direction; int left_of_salami; int * salami; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xilly_endpoint*,struct xilly_alloc_state*,struct xilly_buffer**,int,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct xilly_endpoint *VAR_6,
          unsigned char *VAR_7,
          int VAR_8)
{
 struct device *VAR_9 = VAR_6->dev;
 int VAR_10, VAR_11, VAR_12;
 struct xilly_channel *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24;
 int VAR_25 = 0;

 struct xilly_alloc_state VAR_26 = {
  .salami = ((void*)0),
  .left_of_salami = 0,
  .nbuffer = 1,
  .direction = VAR_1,
  .regdirection = 0,
 };

 struct xilly_alloc_state VAR_27 = {
  .salami = ((void*)0),
  .left_of_salami = 0,
  .nbuffer = 1,
  .direction = VAR_0,
  .regdirection = 0x80000000,
 };

 VAR_13 = FUNC_2(VAR_9, VAR_6->num_channels,
          sizeof(struct xilly_channel), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_6->channels = FUNC_2(VAR_9, VAR_6->num_channels + 1,
        sizeof(struct xilly_channel *),
        VAR_4);
 if (!VAR_6->channels)
  return -VAR_3;

 VAR_6->channels[0] = ((void*)0);



 for (VAR_10 = 1; VAR_10 <= VAR_6->num_channels; VAR_10++) {
  VAR_13->wr_buffers = ((void*)0);
  VAR_13->rd_buffers = ((void*)0);
  VAR_13->num_wr_buffers = 0;
  VAR_13->num_rd_buffers = 0;
  VAR_13->wr_fpga_buf_idx = -1;
  VAR_13->wr_host_buf_idx = 0;
  VAR_13->wr_host_buf_pos = 0;
  VAR_13->wr_empty = 1;
  VAR_13->wr_ready = 0;
  VAR_13->wr_sleepy = 1;
  VAR_13->rd_fpga_buf_idx = 0;
  VAR_13->rd_host_buf_idx = 0;
  VAR_13->rd_host_buf_pos = 0;
  VAR_13->rd_full = 0;
  VAR_13->wr_ref_count = 0;
  VAR_13->rd_ref_count = 0;

  FUNC_5(&VAR_13->wr_spinlock);
  FUNC_5(&VAR_13->rd_spinlock);
  FUNC_4(&VAR_13->wr_mutex);
  FUNC_4(&VAR_13->rd_mutex);
  FUNC_3(&VAR_13->rd_wait);
  FUNC_3(&VAR_13->wr_wait);
  FUNC_3(&VAR_13->wr_ready_wait);

  FUNC_0(&VAR_13->rd_workitem, VAR_5);

  VAR_13->endpoint = VAR_6;
  VAR_13->chan_num = VAR_10;

  VAR_13->log2_element_size = 0;

  VAR_6->channels[VAR_10] = VAR_13++;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++, VAR_7 += 4) {
  struct xilly_buffer **VAR_28 = ((void*)0);

  VAR_18 = VAR_7[0] & 0x01;
  VAR_14 = (VAR_7[0] >> 1) | ((VAR_7[1] & 0x0f) << 7);
  VAR_17 = (VAR_7[1] >> 4) & 0x03;
  VAR_21 = (VAR_7[1] >> 6) & 0x01;
  VAR_20 = (VAR_7[1] >> 7) & 0x01;
  VAR_16 = 1 << (VAR_7[2] & 0x1f);
  VAR_15 = 1 << (VAR_7[3] & 0x0f);
  VAR_22 = (VAR_7[2] >> 7) & 0x01;
  VAR_23 = (VAR_7[2] >> 6) & 0x01;
  VAR_24 = (VAR_7[2] >> 5) & 0x01;

  if ((VAR_14 > VAR_6->num_channels) ||
      ((VAR_14 == 0) && !VAR_18)) {
   FUNC_1(VAR_6->dev,
    "IDT requests channel out of range. Aborting.\n");
   return -VAR_2;
  }

  VAR_13 = VAR_6->channels[VAR_14];

  if (!VAR_18 || VAR_14 > 0) {
   VAR_13->log2_element_size = ((VAR_17 > 2) ?
            2 : VAR_17);

   VAR_19 = VAR_16 *
    (1 << VAR_13->log2_element_size);

   VAR_28 = FUNC_2(VAR_9, VAR_15,
            sizeof(struct xilly_buffer *),
            VAR_4);
   if (!VAR_28)
    return -VAR_3;
  } else {
   VAR_19 = VAR_16 << 2;
  }

  if (!VAR_18) {
   VAR_13->num_rd_buffers = VAR_15;
   VAR_13->rd_buf_size = VAR_19;
   VAR_13->rd_allow_partial = VAR_21;
   VAR_13->rd_synchronous = VAR_20;
   VAR_13->rd_exclusive_open = VAR_22;
   VAR_13->seekable = VAR_23;

   VAR_13->rd_buffers = VAR_28;
   VAR_12 = FUNC_6(VAR_6, &VAR_26, VAR_28,
         VAR_15, VAR_19);
  } else if (VAR_14 > 0) {
   VAR_13->num_wr_buffers = VAR_15;
   VAR_13->wr_buf_size = VAR_19;

   VAR_13->seekable = VAR_23;
   VAR_13->wr_supports_nonempty = VAR_24;

   VAR_13->wr_allow_partial = VAR_21;
   VAR_13->wr_synchronous = VAR_20;
   VAR_13->wr_exclusive_open = VAR_22;

   VAR_13->wr_buffers = VAR_28;
   VAR_12 = FUNC_6(VAR_6, &VAR_27, VAR_28,
         VAR_15, VAR_19);
  } else {
   VAR_12 = FUNC_6(VAR_6, &VAR_27, ((void*)0),
         VAR_15, VAR_19);
   VAR_25++;
  }

  if (VAR_12)
   return -VAR_3;
 }

 if (!VAR_25) {
  FUNC_1(VAR_6->dev,
   "Corrupt IDT: No message buffer. Aborting.\n");
  return -VAR_2;
 }
 return 0;
}
