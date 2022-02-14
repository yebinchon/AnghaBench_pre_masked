
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int flags; int buf; int len; } ;
struct altr_i2c_dev {int msg_err; int dev; scalar_t__ base; int msg_complete; int buf; int msg_len; struct i2c_msg* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct altr_i2c_dev*) ;
 int FUNC_1 (struct altr_i2c_dev*) ;
 int FUNC_2 (struct altr_i2c_dev*) ;
 int FUNC_3 (struct altr_i2c_dev*,int,int) ;
 int FUNC_4 (struct altr_i2c_dev*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct i2c_msg*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 unsigned long FUNC_10 (int *,int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct altr_i2c_dev *VAR_15, struct i2c_msg *VAR_16)
{
 u32 VAR_17 = VAR_4 | VAR_2 | VAR_3;
 unsigned long VAR_18;
 u32 VAR_19;
 u8 VAR_20 = FUNC_7(VAR_16);

 VAR_15->msg = VAR_16;
 VAR_15->msg_len = VAR_16->len;
 VAR_15->buf = VAR_16->buf;
 VAR_15->msg_err = 0;
 FUNC_9(&VAR_15->msg_complete);
 FUNC_1(VAR_15);


 do {
  FUNC_8(VAR_15->base + VAR_6);
 } while (FUNC_8(VAR_15->base + VAR_7));

 FUNC_11(VAR_11 | VAR_20, VAR_15->base + VAR_10);

 if ((VAR_16->flags & VAR_14) != 0) {
  VAR_17 |= VAR_0 | VAR_1;
  FUNC_3(VAR_15, VAR_17, 1);

  FUNC_4(VAR_15, 0);
 } else {
  VAR_17 |= VAR_5;
  FUNC_3(VAR_15, VAR_17, 1);
  FUNC_2(VAR_15);
 }

 VAR_18 = FUNC_10(&VAR_15->msg_complete,
      VAR_12);
 FUNC_3(VAR_15, VAR_17, 0);

 VAR_19 = FUNC_8(VAR_15->base + VAR_8) & VAR_9;
 if (VAR_19)
  FUNC_6(VAR_15->dev, "Core Status not IDLE...\n");

 if (VAR_18 == 0) {
  VAR_15->msg_err = -VAR_13;
  FUNC_5(VAR_15->dev, "Transaction timed out.\n");
 }

 FUNC_0(VAR_15);

 return VAR_15->msg_err;
}
