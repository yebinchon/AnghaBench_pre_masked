
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xilly_channel {scalar_t__ rd_ref_count; int chan_num; scalar_t__ wr_ref_count; int wr_fpga_buf_idx; int wr_eof; int wr_sleepy; int num_wr_buffers; int wr_mutex; TYPE_1__* endpoint; int wr_wait; int wr_spinlock; int rd_mutex; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct xilly_channel* private_data; } ;
struct TYPE_2__ {int dev; scalar_t__ registers; scalar_t__ fatal_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 unsigned long VAR_7;
 struct xilly_channel *VAR_8 = VAR_6->private_data;

 int VAR_9;
 int VAR_10;

 if (VAR_8->endpoint->fatal_error)
  return -VAR_1;

 if (VAR_6->f_mode & VAR_3) {
  FUNC_3(&VAR_8->rd_mutex);

  VAR_8->rd_ref_count--;

  if (VAR_8->rd_ref_count == 0) {





   FUNC_1((VAR_8->chan_num << 1) |
      (5 << 24),
      VAR_8->endpoint->registers +
      VAR_4);
  }
  FUNC_4(&VAR_8->rd_mutex);
 }

 if (VAR_6->f_mode & VAR_2) {
  FUNC_3(&VAR_8->wr_mutex);

  VAR_8->wr_ref_count--;

  if (VAR_8->wr_ref_count == 0) {
   FUNC_1(1 | (VAR_8->chan_num << 1) |
      (5 << 24),
      VAR_8->endpoint->registers +
      VAR_4);
   while (1) {
    FUNC_5(&VAR_8->wr_spinlock,
        VAR_7);
    VAR_9 = VAR_8->wr_fpga_buf_idx;
    VAR_10 = VAR_8->wr_eof;
    VAR_8->wr_sleepy = 1;
    FUNC_6(&VAR_8->wr_spinlock,
             VAR_7);







    VAR_9++;
    if (VAR_9 == VAR_8->num_wr_buffers)
     VAR_9 = 0;

    if (VAR_9 == VAR_10)
     break;
    if (FUNC_7(
         VAR_8->wr_wait,
         (!VAR_8->wr_sleepy)))
     FUNC_2(100);

    if (VAR_8->wr_sleepy) {
     FUNC_4(&VAR_8->wr_mutex);
     FUNC_0(VAR_8->endpoint->dev,
       "Hardware failed to respond to close command, therefore left in messy state.\n");
     return -VAR_0;
    }
   }
  }

  FUNC_4(&VAR_8->wr_mutex);
 }

 return 0;
}
