
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int len; int flags; int addr; int buf; } ;
struct bcm2835_i2c_dev {int num_msgs; int msg_buf_remaining; int msg_buf; struct i2c_msg* curr_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bcm2835_i2c_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bcm2835_i2c_dev *VAR_10)
{
 u32 VAR_11 = VAR_7 | VAR_2;
 struct i2c_msg *VAR_12 = VAR_10->curr_msg;
 bool VAR_13 = (VAR_10->num_msgs == 1);

 if (!VAR_10->num_msgs)
  return;

 VAR_10->num_msgs--;
 VAR_10->msg_buf = VAR_12->buf;
 VAR_10->msg_buf_remaining = VAR_12->len;

 if (VAR_12->flags & VAR_9)
  VAR_11 |= VAR_6 | VAR_4;
 else
  VAR_11 |= VAR_5;

 if (VAR_13)
  VAR_11 |= VAR_3;

 FUNC_0(VAR_10, VAR_0, VAR_12->addr);
 FUNC_0(VAR_10, VAR_8, VAR_12->len);
 FUNC_0(VAR_10, VAR_1, VAR_11);
}
