
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_i2c_dev {int cmd_err; scalar_t__ dev_type; int dev; scalar_t__ regs; int cmd_complete; } ;
struct i2c_msg {int len; int flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 struct mxs_i2c_dev* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mxs_i2c_dev*) ;
 int FUNC_4 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_5 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_6 (struct mxs_i2c_dev*) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_7, struct i2c_msg *VAR_8,
    int VAR_9)
{
 struct mxs_i2c_dev *VAR_10 = FUNC_1(VAR_7);
 int VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 unsigned long VAR_14;

 VAR_12 = VAR_9 ? VAR_3 : 0;

 FUNC_0(VAR_10->dev, "addr: 0x%04x, len: %d, flags: 0x%x, stop: %d\n",
  VAR_8->addr, VAR_8->len, VAR_8->flags, VAR_9);






 if ((VAR_8->flags & VAR_2) && (VAR_8->len <= 4))
  VAR_13 = 1;
 if (!(VAR_8->flags & VAR_2) && (VAR_8->len < 7))
  VAR_13 = 1;

 VAR_10->cmd_err = 0;
 if (VAR_13) {
  VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_12);

  if (VAR_11 && (VAR_11 != -VAR_0))
   FUNC_6(VAR_10);
 } else {
  FUNC_7(&VAR_10->cmd_complete);
  VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_14 = FUNC_8(&VAR_10->cmd_complete,
      FUNC_2(1000));
  if (!VAR_14)
   goto timeout;

  VAR_11 = VAR_10->cmd_err;
 }

 if (VAR_11 == -VAR_0) {




  FUNC_9(VAR_4,
         VAR_10->regs + VAR_5);
 }
 if (VAR_10->dev_type == VAR_6)
  FUNC_6(VAR_10);

 FUNC_0(VAR_10->dev, "Done with err=%d\n", VAR_11);

 return VAR_11;

timeout:
 FUNC_0(VAR_10->dev, "Timeout!\n");
 FUNC_3(VAR_10);
 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11)
  return VAR_11;

 return -VAR_1;
}
