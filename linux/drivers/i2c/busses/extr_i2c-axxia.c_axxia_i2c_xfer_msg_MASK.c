
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct i2c_msg {unsigned int len; } ;
struct axxia_i2c_dev {int last; int msg_err; int adapter; int dev; scalar_t__ base; int msg_complete; scalar_t__ msg_xfrd_r; scalar_t__ msg_xfrd; struct i2c_msg* msg_r; struct i2c_msg* msg; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct axxia_i2c_dev*) ;
 int FUNC_2 (struct axxia_i2c_dev*) ;
 int FUNC_3 (struct axxia_i2c_dev*,struct i2c_msg*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct axxia_i2c_dev*,unsigned int) ;
 int FUNC_6 (struct axxia_i2c_dev*,unsigned int) ;
 scalar_t__ FUNC_7 (struct i2c_msg*) ;
 scalar_t__ FUNC_8 (struct i2c_msg*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 unsigned long FUNC_13 (int *,int ) ;
 int FUNC_14 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct axxia_i2c_dev *VAR_17, struct i2c_msg *VAR_18,
         bool VAR_19)
{
 u32 VAR_20 = VAR_9;
 u32 VAR_21, VAR_22;
 unsigned long VAR_23;
 unsigned int VAR_24;

 VAR_17->msg = VAR_18;
 VAR_17->msg_r = VAR_18;
 VAR_17->msg_xfrd = 0;
 VAR_17->msg_xfrd_r = 0;
 VAR_17->last = VAR_19;
 FUNC_11(&VAR_17->msg_complete);

 FUNC_3(VAR_17, VAR_18);

 if (FUNC_7(VAR_18)) {

  VAR_21 = FUNC_8(VAR_18) ? VAR_5 : VAR_18->len;
  VAR_22 = 0;
 } else {

  VAR_21 = 0;
  VAR_22 = VAR_18->len;
 }

 FUNC_14(VAR_21, VAR_17->base + VAR_8);
 FUNC_14(VAR_22, VAR_17->base + VAR_14);

 if (FUNC_7(VAR_18))
  VAR_20 |= VAR_10;
 else if (FUNC_1(VAR_17) != 0)
  VAR_20 |= VAR_13;

 VAR_24 = FUNC_0(FUNC_10(VAR_17->base + VAR_15));

 FUNC_14(VAR_24, VAR_17->base + VAR_15);

 if (VAR_17->msg_err)
  goto out;

 if (!VAR_19) {
  FUNC_14(VAR_2, VAR_17->base + VAR_7);
  VAR_20 |= VAR_11;
 } else {
  FUNC_14(VAR_0, VAR_17->base + VAR_7);
  VAR_20 |= VAR_12;
 }

 FUNC_14(VAR_16 | VAR_24, VAR_17->base + VAR_15);

 FUNC_6(VAR_17, VAR_20);

 VAR_23 = FUNC_13(&VAR_17->msg_complete,
           VAR_6);

 FUNC_5(VAR_17, VAR_20);

 if (FUNC_10(VAR_17->base + VAR_7) & VAR_1)
  FUNC_4(VAR_17->dev, "busy after xfer\n");

 if (VAR_23 == 0) {
  VAR_17->msg_err = -VAR_4;
  FUNC_9(&VAR_17->adapter);
  FUNC_2(VAR_17);
 }

out:
 if (FUNC_12(VAR_17->msg_err) && VAR_17->msg_err != -VAR_3 &&
   VAR_17->msg_err != -VAR_4)
  FUNC_2(VAR_17);

 return VAR_17->msg_err;
}
