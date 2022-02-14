
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int len; } ;
struct axxia_i2c_dev {int last; int msg_err; int adapter; int dev; scalar_t__ base; int msg_complete; scalar_t__ msg_xfrd_r; scalar_t__ msg_xfrd; struct i2c_msg* msg_r; struct i2c_msg* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct axxia_i2c_dev*) ;
 scalar_t__ FUNC_1 (struct axxia_i2c_dev*) ;
 int FUNC_2 (struct axxia_i2c_dev*) ;
 int FUNC_3 (struct axxia_i2c_dev*,struct i2c_msg*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct axxia_i2c_dev*,int) ;
 scalar_t__ FUNC_6 (struct i2c_msg*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 unsigned long FUNC_11 (int *,int ) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct axxia_i2c_dev *VAR_12, struct i2c_msg VAR_13[])
{
 u32 VAR_14 = VAR_8 | VAR_10 | VAR_9;
 u32 VAR_15 = FUNC_6(&VAR_13[1]) ? VAR_4 : VAR_13[1].len;
 unsigned long VAR_16;

 FUNC_3(VAR_12, &VAR_13[0]);

 FUNC_12(VAR_13[0].len, VAR_12->base + VAR_11);
 FUNC_12(VAR_15, VAR_12->base + VAR_7);

 VAR_12->msg = &VAR_13[0];
 VAR_12->msg_r = &VAR_13[1];
 VAR_12->msg_xfrd = 0;
 VAR_12->msg_xfrd_r = 0;
 VAR_12->last = 1;
 FUNC_0(VAR_12);

 FUNC_12(VAR_1, VAR_12->base + VAR_6);

 FUNC_9(&VAR_12->msg_complete);
 FUNC_5(VAR_12, VAR_14);

 VAR_16 = FUNC_11(&VAR_12->msg_complete,
      VAR_5);

 if (VAR_12->msg_err == -VAR_2) {
  if (FUNC_1(VAR_12))
   FUNC_2(VAR_12);
 } else if (FUNC_8(VAR_12->base + VAR_6) & VAR_0) {
  FUNC_4(VAR_12->dev, "busy after xfer\n");
 }

 if (VAR_16 == 0) {
  VAR_12->msg_err = -VAR_3;
  FUNC_7(&VAR_12->adapter);
  FUNC_2(VAR_12);
 }

 if (FUNC_10(VAR_12->msg_err) && VAR_12->msg_err != -VAR_2)
  FUNC_2(VAR_12);

 return VAR_12->msg_err;
}
