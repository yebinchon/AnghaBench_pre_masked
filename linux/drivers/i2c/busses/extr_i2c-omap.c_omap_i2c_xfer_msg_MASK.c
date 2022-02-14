
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {int receiver; int buf_len; int cmd_err; int speed; int dev; int cmd_complete; scalar_t__ b_hw; int buf; } ;
struct i2c_msg {int addr; int len; int flags; int buf; } ;
struct i2c_adapter {int dummy; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned long VAR_25 ;
 int FUNC_0 (struct omap_i2c_dev*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int,int,int,int) ;
 int FUNC_4 (int ,char*) ;
 struct omap_i2c_dev* FUNC_5 (struct i2c_adapter*) ;
 unsigned long VAR_26 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct omap_i2c_dev*,int ) ;
 int FUNC_8 (struct omap_i2c_dev*) ;
 int FUNC_9 (struct omap_i2c_dev*,int,int) ;
 int FUNC_10 (struct omap_i2c_dev*) ;
 int FUNC_11 (struct omap_i2c_dev*,int ,int) ;
 int FUNC_12 (struct omap_i2c_dev*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (unsigned long,unsigned long) ;
 unsigned long FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct i2c_adapter *VAR_27,
        struct i2c_msg *VAR_28, int VAR_29, bool VAR_30)
{
 struct omap_i2c_dev *VAR_31 = FUNC_5(VAR_27);
 unsigned long VAR_32;
 u16 VAR_33;
 int VAR_34;

 FUNC_3(VAR_31->dev, "addr: 0x%04x, len: %d, flags: 0x%x, stop: %d\n",
  VAR_28->addr, VAR_28->len, VAR_28->flags, VAR_29);

 VAR_31->receiver = !!(VAR_28->flags & VAR_5);
 FUNC_9(VAR_31, VAR_28->len, VAR_31->receiver);

 FUNC_11(VAR_31, VAR_20, VAR_28->addr);


 VAR_31->buf = VAR_28->buf;
 VAR_31->buf_len = VAR_28->len;


 FUNC_1();

 FUNC_11(VAR_31, VAR_11, VAR_31->buf_len);


 VAR_33 = FUNC_7(VAR_31, VAR_8);
 VAR_33 |= VAR_9 | VAR_10;
 FUNC_11(VAR_31, VAR_8, VAR_33);

 if (!VAR_30)
  FUNC_13(&VAR_31->cmd_complete);
 VAR_31->cmd_err = 0;

 VAR_33 = VAR_12 | VAR_13 | VAR_17;


 if (VAR_31->speed > 400)
  VAR_33 |= VAR_14;

 if (VAR_28->flags & VAR_6)
  VAR_29 = 1;
 if (VAR_28->flags & VAR_7)
  VAR_33 |= VAR_19;
 if (!(VAR_28->flags & VAR_5))
  VAR_33 |= VAR_18;

 if (!VAR_31->b_hw && VAR_29)
  VAR_33 |= VAR_16;





 FUNC_11(VAR_31, VAR_15, VAR_33);




 if (VAR_31->b_hw && VAR_29) {
  unsigned long VAR_35 = VAR_26 + VAR_25;
  u16 VAR_36 = FUNC_7(VAR_31, VAR_15);
  while (VAR_36 & VAR_17) {
   VAR_36 = FUNC_7(VAR_31, VAR_15);


   if (FUNC_14(VAR_26, VAR_35)) {
    FUNC_4(VAR_31->dev, "controller timed out "
    "waiting for start condition to finish\n");
    return -VAR_3;
   }
   FUNC_2();
  }

  VAR_33 |= VAR_16;
  VAR_33 &= ~VAR_17;
  FUNC_11(VAR_31, VAR_15, VAR_33);
 }





 if (!VAR_30) {
  VAR_32 = FUNC_15(&VAR_31->cmd_complete,
            VAR_25);
 } else {
  do {
   FUNC_10(VAR_31);
   VAR_34 = FUNC_12(VAR_31);
  } while (VAR_34 == -VAR_0);

  VAR_32 = !VAR_34;
 }

 if (VAR_32 == 0) {
  FUNC_4(VAR_31->dev, "controller timed out\n");
  FUNC_8(VAR_31);
  FUNC_0(VAR_31);
  return -VAR_3;
 }

 if (FUNC_6(!VAR_31->cmd_err))
  return 0;


 if (VAR_31->cmd_err & (VAR_23 | VAR_24)) {
  FUNC_8(VAR_31);
  FUNC_0(VAR_31);
  return -VAR_1;
 }

 if (VAR_31->cmd_err & VAR_21)
  return -VAR_0;

 if (VAR_31->cmd_err & VAR_22) {
  if (VAR_28->flags & VAR_4)
   return 0;

  VAR_33 = FUNC_7(VAR_31, VAR_15);
  VAR_33 |= VAR_16;
  FUNC_11(VAR_31, VAR_15, VAR_33);
  return -VAR_2;
 }
 return -VAR_1;
}
