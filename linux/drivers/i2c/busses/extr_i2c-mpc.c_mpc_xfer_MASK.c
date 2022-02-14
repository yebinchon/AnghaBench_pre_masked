
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpc_i2c {scalar_t__ base; int dev; } ;
struct i2c_msg {int flags; int len; int buf; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 struct mpc_i2c* FUNC_2 (struct i2c_adapter*) ;
 unsigned long VAR_11 ;
 int FUNC_3 (struct mpc_i2c*) ;
 int FUNC_4 (struct mpc_i2c*) ;
 int FUNC_5 (struct mpc_i2c*) ;
 int FUNC_6 (struct mpc_i2c*,int ,int ,int,int,int) ;
 int FUNC_7 (struct mpc_i2c*,int ,int ,int,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (unsigned long,scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (struct mpc_i2c*,int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_adapter *VAR_12, struct i2c_msg *VAR_13, int VAR_14)
{
 struct i2c_msg *VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 unsigned long VAR_18 = VAR_11;
 struct mpc_i2c *VAR_19 = FUNC_2(VAR_12);

 FUNC_4(VAR_19);


 while (FUNC_8(VAR_19->base + VAR_9) & VAR_1) {
  if (FUNC_10(VAR_10)) {
   FUNC_1(VAR_19->dev, "Interrupted\n");
   FUNC_13(VAR_19, 0);
   return -VAR_4;
  }
  if (FUNC_11(VAR_11, VAR_18 + VAR_6)) {
   u8 VAR_20 = FUNC_8(VAR_19->base + VAR_9);

   FUNC_1(VAR_19->dev, "timeout\n");
   if ((VAR_20 & (VAR_2 | VAR_1 | VAR_3)) != 0) {
    FUNC_12(VAR_20 & ~VAR_0,
           VAR_19->base + VAR_9);
    FUNC_3(VAR_19);
   }
   return -VAR_5;
  }
  FUNC_9();
 }

 for (VAR_16 = 0; VAR_17 >= 0 && VAR_16 < VAR_14; VAR_16++) {
  VAR_15 = &VAR_13[VAR_16];
  FUNC_1(VAR_19->dev,
   "Doing %s %d bytes to 0x%02x - %d of %d messages\n",
   VAR_15->flags & VAR_7 ? "read" : "write",
   VAR_15->len, VAR_15->addr, VAR_16 + 1, VAR_14);
  if (VAR_15->flags & VAR_7) {
   bool VAR_21 = VAR_15->flags & VAR_8;

   VAR_17 = FUNC_6(VAR_19, VAR_15->addr, VAR_15->buf, VAR_15->len, VAR_16,
           VAR_21);
   if (VAR_21 && VAR_17 > 0)
    VAR_15->len = VAR_17;
  } else {
   VAR_17 =
       FUNC_7(VAR_19, VAR_15->addr, VAR_15->buf, VAR_15->len, VAR_16);
  }
 }
 FUNC_5(VAR_19);
 VAR_18 = VAR_11;

 while (FUNC_8(VAR_19->base + VAR_9) & VAR_1) {
  if (FUNC_11(VAR_11, VAR_18 + VAR_6)) {
   u8 VAR_22 = FUNC_8(VAR_19->base + VAR_9);

   FUNC_1(VAR_19->dev, "timeout\n");
   if ((VAR_22 & (VAR_2 | VAR_1 | VAR_3)) != 0) {
    FUNC_12(VAR_22 & ~VAR_0,
           VAR_19->base + VAR_9);
    FUNC_3(VAR_19);
   }
   return -VAR_5;
  }
  FUNC_0();
 }
 return (VAR_17 < 0) ? VAR_17 : VAR_14;
}
