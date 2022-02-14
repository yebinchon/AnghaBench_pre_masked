
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct i2c_adapter {int timeout; } ;
struct bcm2835_i2c_dev {int num_msgs; int msg_err; int dev; int completion; struct i2c_msg* curr_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bcm2835_i2c_dev*) ;
 int FUNC_1 (struct bcm2835_i2c_dev*) ;
 int FUNC_2 (struct bcm2835_i2c_dev*,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 struct bcm2835_i2c_dev* FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_8, struct i2c_msg VAR_9[],
       int VAR_10)
{
 struct bcm2835_i2c_dev *VAR_11 = FUNC_6(VAR_8);
 unsigned long VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < (VAR_10 - 1); VAR_13++)
  if (VAR_9[VAR_13].flags & VAR_7) {
   FUNC_5(VAR_11->dev,
          "only one read message supported, has to be last\n");
   return -VAR_4;
  }

 VAR_11->curr_msg = VAR_9;
 VAR_11->num_msgs = VAR_10;
 FUNC_7(&VAR_11->completion);

 FUNC_1(VAR_11);

 VAR_12 = FUNC_8(&VAR_11->completion,
      VAR_8->timeout);

 FUNC_0(VAR_11);

 if (!VAR_12) {
  FUNC_2(VAR_11, VAR_0,
       VAR_1);
  FUNC_4(VAR_11->dev, "i2c transfer timed out\n");
  return -VAR_6;
 }

 if (!VAR_11->msg_err)
  return VAR_10;

 FUNC_3(VAR_11->dev, "i2c transfer failed: %x\n", VAR_11->msg_err);

 if (VAR_11->msg_err & VAR_2)
  return -VAR_5;

 return -VAR_3;
}
