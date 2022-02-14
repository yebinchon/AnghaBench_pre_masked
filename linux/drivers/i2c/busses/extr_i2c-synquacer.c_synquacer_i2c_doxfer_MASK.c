
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synquacer_i2c {int msg_num; int msg_idx; int speed_khz; int dev; int timeout_ms; int completion; struct i2c_msg* msg; int state; scalar_t__ msg_ptr; scalar_t__ base; } ;
struct i2c_msg {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 unsigned char FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct synquacer_i2c*) ;
 int FUNC_7 (struct synquacer_i2c*,struct i2c_msg*) ;
 int FUNC_8 (int ) ;
 unsigned long FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct synquacer_i2c *VAR_5,
    struct i2c_msg *VAR_6, int VAR_7)
{
 unsigned char VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_6(VAR_5);
 VAR_8 = FUNC_4(VAR_5->base + VAR_4);
 if (VAR_8 & VAR_3) {
  FUNC_2(VAR_5->dev, "cannot get bus (bus busy)\n");
  return -VAR_1;
 }

 FUNC_5(&VAR_5->completion);

 VAR_5->msg = VAR_6;
 VAR_5->msg_num = VAR_7;
 VAR_5->msg_ptr = 0;
 VAR_5->msg_idx = 0;
 VAR_5->state = VAR_2;

 VAR_10 = FUNC_7(VAR_5, VAR_5->msg);
 if (VAR_10 < 0) {
  FUNC_1(VAR_5->dev, "Address failed: (%d)\n", VAR_10);
  return VAR_10;
 }

 VAR_9 = FUNC_9(&VAR_5->completion,
     FUNC_3(VAR_5->timeout_ms));
 if (VAR_9 == 0) {
  FUNC_1(VAR_5->dev, "timeout\n");
  return -VAR_0;
 }

 VAR_10 = VAR_5->msg_idx;
 if (VAR_10 != VAR_7) {
  FUNC_1(VAR_5->dev, "incomplete xfer (%d)\n", VAR_10);
  return -VAR_0;
 }


 FUNC_8(FUNC_0(2 * 1000, VAR_5->speed_khz));

 return VAR_10;
}
