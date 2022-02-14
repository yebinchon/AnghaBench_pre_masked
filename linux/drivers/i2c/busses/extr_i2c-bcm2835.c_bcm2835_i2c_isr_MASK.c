
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm2835_i2c_dev {int msg_err; int completion; scalar_t__ msg_buf_remaining; TYPE_1__* curr_msg; scalar_t__ num_msgs; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct bcm2835_i2c_dev*) ;
 int FUNC_1 (struct bcm2835_i2c_dev*) ;
 int FUNC_2 (struct bcm2835_i2c_dev*,int ) ;
 int FUNC_3 (struct bcm2835_i2c_dev*) ;
 int FUNC_4 (struct bcm2835_i2c_dev*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_13, void *VAR_14)
{
 struct bcm2835_i2c_dev *VAR_15 = VAR_14;
 u32 VAR_16, VAR_17;

 VAR_16 = FUNC_2(VAR_15, VAR_2);

 VAR_17 = VAR_16 & (VAR_3 | VAR_5);
 if (VAR_17) {
  VAR_15->msg_err = VAR_17;
  goto complete;
 }

 if (VAR_16 & VAR_4) {
  if (!VAR_15->curr_msg) {
   FUNC_6(VAR_15->dev, "Got unexpected interrupt (from firmware?)\n");
  } else if (VAR_15->curr_msg->flags & VAR_10) {
   FUNC_0(VAR_15);
   VAR_16 = FUNC_2(VAR_15, VAR_2);
  }

  if ((VAR_16 & VAR_7) || VAR_15->msg_buf_remaining)
   VAR_15->msg_err = VAR_6;
  else
   VAR_15->msg_err = 0;
  goto complete;
 }

 if (VAR_16 & VAR_9) {
  if (!VAR_15->msg_buf_remaining) {
   VAR_15->msg_err = VAR_16 | VAR_6;
   goto complete;
  }

  FUNC_1(VAR_15);

  if (VAR_15->num_msgs && !VAR_15->msg_buf_remaining) {
   VAR_15->curr_msg++;
   FUNC_3(VAR_15);
  }

  return VAR_11;
 }

 if (VAR_16 & VAR_8) {
  if (!VAR_15->msg_buf_remaining) {
   VAR_15->msg_err = VAR_16 | VAR_6;
   goto complete;
  }

  FUNC_0(VAR_15);
  return VAR_11;
 }

 return VAR_12;

complete:
 FUNC_4(VAR_15, VAR_0, VAR_1);
 FUNC_4(VAR_15, VAR_2, VAR_3 |
      VAR_5 | VAR_4);
 FUNC_5(&VAR_15->completion);

 return VAR_11;
}
