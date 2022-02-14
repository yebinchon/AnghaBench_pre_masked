
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hix5hd2_i2c_priv {int err; scalar_t__ state; scalar_t__ msg_len; scalar_t__ msg_idx; int lock; int msg_complete; TYPE_1__* msg; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hix5hd2_i2c_priv*) ;
 int FUNC_3 (struct hix5hd2_i2c_priv*) ;
 int FUNC_4 (struct hix5hd2_i2c_priv*) ;
 int FUNC_5 (struct hix5hd2_i2c_priv*) ;
 int FUNC_6 (struct hix5hd2_i2c_priv*) ;
 int FUNC_7 (struct hix5hd2_i2c_priv*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_9, void *VAR_10)
{
 struct hix5hd2_i2c_priv *VAR_11 = VAR_10;
 u32 VAR_12;
 int VAR_13;

 FUNC_8(&VAR_11->lock);

 VAR_12 = FUNC_2(VAR_11);


 if (VAR_12 & VAR_5) {

  FUNC_1(VAR_11->dev, "ARB bus loss\n");
  VAR_11->err = -VAR_0;
  VAR_11->state = VAR_2;
  goto stop;
 } else if (VAR_12 & VAR_4) {

  FUNC_1(VAR_11->dev, "No ACK from device\n");
  VAR_11->err = -VAR_1;
  VAR_11->state = VAR_2;
  goto stop;
 }

 if (VAR_12 & VAR_7) {
  if (VAR_11->msg_len > 0) {
   VAR_13 = FUNC_6(VAR_11);
   if (VAR_13) {
    VAR_11->err = VAR_13;
    VAR_11->state = VAR_2;
    goto stop;
   }
   if (VAR_11->msg->flags & VAR_6)
    FUNC_4(VAR_11);
   else
    FUNC_7(VAR_11);
  } else {
   FUNC_5(VAR_11);
  }
 }

stop:
 if ((VAR_11->state == VAR_3 &&
      VAR_11->msg->len == VAR_11->msg_idx) ||
     (VAR_11->state == VAR_2)) {
  FUNC_3(VAR_11);
  FUNC_2(VAR_11);
  FUNC_0(&VAR_11->msg_complete);
 }

 FUNC_9(&VAR_11->lock);

 return VAR_8;
}
