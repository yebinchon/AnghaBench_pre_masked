
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct p2wi {scalar_t__ slave_addr; int status; scalar_t__ regs; int complete; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *,char*) ;
 struct p2wi* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_15, u16 VAR_16,
      unsigned short VAR_17, char VAR_18,
      u8 VAR_19, int VAR_20, union i2c_smbus_data *VAR_21)
{
 struct p2wi *VAR_22 = FUNC_2(VAR_15);
 unsigned long VAR_23 = FUNC_0(1);

 if (VAR_22->slave_addr >= 0 && VAR_16 != VAR_22->slave_addr) {
  FUNC_1(&VAR_15->dev, "invalid P2WI address\n");
  return -VAR_1;
 }

 if (!VAR_21)
  return -VAR_1;

 FUNC_6(VAR_19, VAR_22->regs + VAR_7);

 if (VAR_18 == VAR_3)
  VAR_23 |= VAR_10;
 else
  FUNC_6(VAR_21->byte, VAR_22->regs + VAR_8);

 FUNC_6(VAR_23, VAR_22->regs + VAR_9);

 if (FUNC_3(VAR_22->regs + VAR_4) & VAR_6) {
  FUNC_1(&VAR_15->dev, "P2WI bus busy\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_22->complete);

 FUNC_6(VAR_12 | VAR_13 | VAR_14,
        VAR_22->regs + VAR_11);

 FUNC_6(VAR_6 | VAR_5,
        VAR_22->regs + VAR_4);

 FUNC_5(&VAR_22->complete);

 if (VAR_22->status & VAR_12) {
  FUNC_1(&VAR_15->dev, "P2WI bus busy\n");
  return -VAR_0;
 }

 if (VAR_22->status & VAR_13) {
  FUNC_1(&VAR_15->dev, "P2WI bus xfer error\n");
  return -VAR_2;
 }

 if (VAR_18 == VAR_3)
  VAR_21->byte = FUNC_3(VAR_22->regs + VAR_8);

 return 0;
}
