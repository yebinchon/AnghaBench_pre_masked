
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u32 ;
struct i2c_msg {int flags; scalar_t__ len; void** buf; } ;
struct dw_i2c_dev {size_t msg_read_idx; size_t msgs_num; int status; scalar_t__ rx_buf_len; void** rx_buf; int rx_outstanding; struct i2c_msg* msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct dw_i2c_dev*,int ) ;
 scalar_t__ FUNC_1 (struct dw_i2c_dev*,void*) ;

__attribute__((used)) static void
FUNC_2(struct dw_i2c_dev *VAR_6)
{
 struct i2c_msg *VAR_7 = VAR_6->msgs;
 int VAR_8;

 for (; VAR_6->msg_read_idx < VAR_6->msgs_num; VAR_6->msg_read_idx++) {
  u32 VAR_9;
  u8 *VAR_10;

  if (!(VAR_7[VAR_6->msg_read_idx].flags & VAR_2))
   continue;

  if (!(VAR_6->status & VAR_5)) {
   VAR_9 = VAR_7[VAR_6->msg_read_idx].len;
   VAR_10 = VAR_7[VAR_6->msg_read_idx].buf;
  } else {
   VAR_9 = VAR_6->rx_buf_len;
   VAR_10 = VAR_6->rx_buf;
  }

  VAR_8 = FUNC_0(VAR_6, VAR_1);

  for (; VAR_9 > 0 && VAR_8 > 0; VAR_9--, VAR_8--) {
   u32 VAR_11 = VAR_7[VAR_6->msg_read_idx].flags;

   *VAR_10 = FUNC_0(VAR_6, VAR_0);

   if (VAR_11 & VAR_3 &&
    *VAR_10 <= VAR_4 && *VAR_10 > 0) {
    VAR_9 = FUNC_1(VAR_6, *VAR_10);
   }
   VAR_10++;
   VAR_6->rx_outstanding--;
  }

  if (VAR_9 > 0) {
   VAR_6->status |= VAR_5;
   VAR_6->rx_buf_len = VAR_9;
   VAR_6->rx_buf = VAR_10;
   return;
  } else
   VAR_6->status &= ~VAR_5;
 }
}
