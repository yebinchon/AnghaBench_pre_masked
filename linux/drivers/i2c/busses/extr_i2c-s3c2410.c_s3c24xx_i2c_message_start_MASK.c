
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int quirks; scalar_t__ msg_num; int dev; scalar_t__ regs; int tx_setup; } ;
struct i2c_msg {int addr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_0 (int ,char*,unsigned long,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct s3c24xx_i2c*,unsigned long) ;
 scalar_t__ FUNC_3 (struct s3c24xx_i2c*) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct s3c24xx_i2c*) ;
 int FUNC_7 (unsigned int,scalar_t__) ;
 int FUNC_8 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct s3c24xx_i2c *VAR_11,
          struct i2c_msg *VAR_12)
{
 unsigned int VAR_13 = (VAR_12->addr & 0x7f) << 1;
 unsigned long VAR_14;
 unsigned long VAR_15;

 VAR_14 = 0;
 VAR_14 |= VAR_10;

 if (VAR_12->flags & VAR_0) {
  VAR_14 |= VAR_7;
  VAR_13 |= 1;
 } else
  VAR_14 |= VAR_8;

 if (VAR_12->flags & VAR_1)
  VAR_13 ^= 1;


 FUNC_6(VAR_11);

 VAR_15 = FUNC_5(VAR_11->regs + VAR_3);
 FUNC_8(VAR_14, VAR_11->regs + VAR_5);

 FUNC_0(VAR_11->dev, "START: %08lx to IICSTAT, %02x to DS\n", VAR_14, VAR_13);
 FUNC_7(VAR_13, VAR_11->regs + VAR_4);





 FUNC_4(VAR_11->tx_setup);

 FUNC_0(VAR_11->dev, "iiccon, %08lx\n", VAR_15);
 FUNC_8(VAR_15, VAR_11->regs + VAR_3);

 VAR_14 |= VAR_9;
 FUNC_8(VAR_14, VAR_11->regs + VAR_5);

 if (VAR_11->quirks & VAR_2) {
  while ((VAR_11->msg_num != 0) && FUNC_3(VAR_11)) {
   FUNC_2(VAR_11, VAR_14);
   VAR_14 = FUNC_5(VAR_11->regs + VAR_5);

   if (VAR_14 & VAR_6)
    FUNC_1(VAR_11->dev, "deal with arbitration loss\n");
  }
 }
}
