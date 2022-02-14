
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_piix4_adapdata {unsigned short smba; } ;
struct i2c_adapter {int dev; } ;


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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 struct i2c_piix4_adapdata* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_12)
{
 struct i2c_piix4_adapdata *VAR_13 = FUNC_2(VAR_12);
 unsigned short VAR_14 = VAR_13->smba;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_0(&VAR_12->dev, "Transaction (pre): CNT=%02x, CMD=%02x, "
  "ADD=%02x, DAT0=%02x, DAT1=%02x\n", FUNC_4(VAR_7),
  FUNC_4(VAR_6), FUNC_4(VAR_5), FUNC_4(VAR_8),
  FUNC_4(VAR_9));


 if ((VAR_15 = FUNC_4(VAR_10)) != 0x00) {
  FUNC_0(&VAR_12->dev, "SMBus busy (%02x). "
   "Resetting...\n", VAR_15);
  FUNC_5(VAR_15, VAR_10);
  if ((VAR_15 = FUNC_4(VAR_10)) != 0x00) {
   FUNC_1(&VAR_12->dev, "Failed! (%02x)\n", VAR_15);
   return -VAR_0;
  } else {
   FUNC_0(&VAR_12->dev, "Successful!\n");
  }
 }


 FUNC_5(FUNC_3(VAR_7) | 0x040, VAR_7);


 if (VAR_11)
  FUNC_6(2000, 2100);
 else
  FUNC_6(250, 500);

 while ((++VAR_17 < VAR_4) &&
        ((VAR_15 = FUNC_4(VAR_10)) & 0x01))
  FUNC_6(250, 500);


 if (VAR_17 == VAR_4) {
  FUNC_1(&VAR_12->dev, "SMBus Timeout!\n");
  VAR_16 = -VAR_3;
 }

 if (VAR_15 & 0x10) {
  VAR_16 = -VAR_1;
  FUNC_1(&VAR_12->dev, "Error: Failed bus transaction\n");
 }

 if (VAR_15 & 0x08) {
  VAR_16 = -VAR_1;
  FUNC_0(&VAR_12->dev, "Bus collision! SMBus may be "
   "locked until next hard reset. (sorry!)\n");

 }

 if (VAR_15 & 0x04) {
  VAR_16 = -VAR_2;
  FUNC_0(&VAR_12->dev, "Error: no response!\n");
 }

 if (FUNC_4(VAR_10) != 0x00)
  FUNC_5(FUNC_3(VAR_10), VAR_10);

 if ((VAR_15 = FUNC_4(VAR_10)) != 0x00) {
  FUNC_1(&VAR_12->dev, "Failed reset at end of "
   "transaction (%02x)\n", VAR_15);
 }
 FUNC_0(&VAR_12->dev, "Transaction (post): CNT=%02x, CMD=%02x, "
  "ADD=%02x, DAT0=%02x, DAT1=%02x\n", FUNC_4(VAR_7),
  FUNC_4(VAR_6), FUNC_4(VAR_5), FUNC_4(VAR_8),
  FUNC_4(VAR_9));
 return VAR_16;
}
