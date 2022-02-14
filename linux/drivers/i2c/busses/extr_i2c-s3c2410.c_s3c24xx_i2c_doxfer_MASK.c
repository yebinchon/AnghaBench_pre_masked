
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int msg_num; int msg_idx; int quirks; int state; int dev; int wait; scalar_t__ msg_ptr; struct i2c_msg* msg; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct s3c24xx_i2c*) ;
 int FUNC_3 (struct s3c24xx_i2c*) ;
 int FUNC_4 (struct s3c24xx_i2c*,struct i2c_msg*) ;
 int FUNC_5 (struct s3c24xx_i2c*) ;
 int FUNC_6 (struct s3c24xx_i2c*) ;
 unsigned long FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct s3c24xx_i2c *VAR_6,
         struct i2c_msg *VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_6);
 if (VAR_10 != 0) {
  FUNC_1(VAR_6->dev, "cannot get bus (error %d)\n", VAR_10);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_6->msg = VAR_7;
 VAR_6->msg_num = VAR_8;
 VAR_6->msg_ptr = 0;
 VAR_6->msg_idx = 0;
 VAR_6->state = VAR_5;

 FUNC_3(VAR_6);
 FUNC_4(VAR_6, VAR_7);

 if (VAR_6->quirks & VAR_3) {
  VAR_10 = VAR_6->msg_idx;

  if (VAR_10 != VAR_8)
   FUNC_0(VAR_6->dev, "incomplete xfer (%d)\n", VAR_10);

  goto out;
 }

 VAR_9 = FUNC_7(VAR_6->wait, VAR_6->msg_num == 0, VAR_1 * 5);

 VAR_10 = VAR_6->msg_idx;





 if (VAR_9 == 0)
  FUNC_0(VAR_6->dev, "timeout\n");
 else if (VAR_10 != VAR_8)
  FUNC_0(VAR_6->dev, "incomplete xfer (%d)\n", VAR_10);


 if (VAR_6->quirks & VAR_2)
  goto out;

 FUNC_6(VAR_6);

 FUNC_2(VAR_6);

 out:
 VAR_6->state = VAR_4;

 return VAR_10;
}
