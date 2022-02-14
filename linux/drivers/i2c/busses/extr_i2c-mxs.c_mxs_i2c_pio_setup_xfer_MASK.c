
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mxs_i2c_dev {scalar_t__ dev_type; scalar_t__ regs; int dev; } ;
struct i2c_msg {int flags; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (struct mxs_i2c_dev*) ;
 scalar_t__ FUNC_3 (struct mxs_i2c_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct i2c_msg*) ;
 struct mxs_i2c_dev* FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (struct mxs_i2c_dev*) ;
 int FUNC_8 (struct mxs_i2c_dev*,int) ;
 int FUNC_9 (struct mxs_i2c_dev*,int,int) ;
 int FUNC_10 (struct mxs_i2c_dev*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct i2c_adapter *VAR_18,
   struct i2c_msg *VAR_19, uint32_t VAR_20)
{
 struct mxs_i2c_dev *VAR_21 = FUNC_6(VAR_18);
 uint32_t VAR_22 = FUNC_5(VAR_19);
 uint32_t VAR_23 = 0;
 int VAR_24, VAR_25, VAR_26 = 0, VAR_27 = 0;
 uint32_t VAR_28;


 FUNC_12(VAR_14 << 8, VAR_21->regs + VAR_11);
 if (VAR_19->flags & VAR_1) {
  FUNC_0(VAR_19->len > 4);


  FUNC_9(VAR_21, VAR_3,
           VAR_22);

  VAR_25 = FUNC_10(VAR_21);
  if (VAR_25) {
   FUNC_4(VAR_21->dev,
    "PIO: Failed to send SELECT command!\n");
   goto cleanup;
  }


  FUNC_8(VAR_21,
     VAR_2 | VAR_20 |
     FUNC_1(VAR_19->len));

  VAR_25 = FUNC_10(VAR_21);
  if (VAR_25) {
   FUNC_4(VAR_21->dev,
    "PIO: Failed to send READ command!\n");
   goto cleanup;
  }

  VAR_23 = FUNC_11(VAR_21->regs + FUNC_2(VAR_21));
  for (VAR_24 = 0; VAR_24 < VAR_19->len; VAR_24++) {
   VAR_19->buf[VAR_24] = VAR_23 & 0xff;
   VAR_23 >>= 8;
  }
 } else {
  VAR_23 = VAR_22 << 24;


  VAR_28 = VAR_9;


  if (VAR_19->len > 3)
   VAR_28 |= VAR_10;

  for (VAR_24 = 0; VAR_24 < VAR_19->len; VAR_24++) {
   VAR_23 >>= 8;
   VAR_23 |= (VAR_19->buf[VAR_24] << 24);

   VAR_27 = 0;


   if (VAR_24 + 1 == VAR_19->len) {

    VAR_28 |= VAR_20;

    VAR_28 &= ~VAR_10;
    VAR_27 = 1;
   }


   if ((VAR_24 & 3) == 2)
    VAR_27 = 1;


   if (!VAR_27)
    continue;
   if ((VAR_24 % 4) == 3)
    VAR_26 = 1;
   else
    VAR_26 = (VAR_24 % 4) + 2;

   VAR_23 >>= (4 - VAR_26) * 8;

   FUNC_4(VAR_21->dev,
    "PIO: len=%i pos=%i total=%i [W%s%s%s]\n",
    VAR_26, VAR_24, VAR_19->len,
    VAR_28 & VAR_9 ? "S" : "",
    VAR_28 & VAR_8 ? "E" : "",
    VAR_28 & VAR_10 ? "C" : "");

   FUNC_12(VAR_13,
          VAR_21->regs + FUNC_3(VAR_21));

   FUNC_9(VAR_21,
    VAR_28 | VAR_6 |
    VAR_5 |
    FUNC_1(VAR_26), VAR_23);


   VAR_28 &= ~VAR_9;


   VAR_25 = FUNC_10(VAR_21);
   if (VAR_25) {
    FUNC_4(VAR_21->dev,
     "PIO: Failed to finish WRITE cmd!\n");
    break;
   }


   VAR_25 = FUNC_11(VAR_21->regs + VAR_15) &
        VAR_16;
   if (VAR_25) {
    VAR_25 = -VAR_0;
    goto cleanup;
   }
  }
 }


 VAR_25 = FUNC_7(VAR_21);

cleanup:

 FUNC_12(VAR_14, VAR_21->regs + VAR_11);
 FUNC_12(VAR_14 << 8, VAR_21->regs + VAR_12);


 if (VAR_21->dev_type == VAR_17)
  FUNC_12(VAR_7, VAR_21->regs + VAR_4);

 return VAR_25;
}
