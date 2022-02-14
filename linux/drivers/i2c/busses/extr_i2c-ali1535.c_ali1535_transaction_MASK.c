
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_21)
{
 int VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;

 FUNC_0(&VAR_21->dev, "Transaction (pre): STS=%02x, TYP=%02x, "
  "CMD=%02x, ADD=%02x, DAT0=%02x, DAT1=%02x\n",
  FUNC_3(VAR_19), FUNC_3(VAR_20), FUNC_3(VAR_15),
  FUNC_3(VAR_14), FUNC_3(VAR_16), FUNC_3(VAR_17));


 VAR_22 = FUNC_3(VAR_19);



 if (VAR_22 & VAR_2) {
  FUNC_2(&VAR_21->dev,
   "Resetting entire SMB Bus to clear busy condition (%02x)\n",
   VAR_22);
  FUNC_4(VAR_8, VAR_20);
  VAR_22 = FUNC_3(VAR_19);
 }


 if (VAR_22 & (VAR_5 | VAR_2)) {

  FUNC_4(0xFF, VAR_19);
  VAR_22 = FUNC_3(VAR_19);
  if (VAR_22 & (VAR_5 | VAR_2)) {




   FUNC_1(&VAR_21->dev,
    "SMBus reset failed! (0x%02x) - controller or "
    "device on bus is probably hung\n", VAR_22);
   return -VAR_9;
  }
 } else {

  if (VAR_22 & VAR_4)
   FUNC_4(VAR_22, VAR_19);
 }


 FUNC_4(0xFF, VAR_18);


 VAR_24 = 0;
 do {
  FUNC_5(1000, 2000);
  VAR_22 = FUNC_3(VAR_19);
 } while (((VAR_22 & VAR_2) && !(VAR_22 & VAR_7))
   && (VAR_24++ < VAR_13));


 if (VAR_24 > VAR_13) {
  VAR_23 = -VAR_12;
  FUNC_1(&VAR_21->dev, "SMBus Timeout!\n");
 }

 if (VAR_22 & VAR_6) {
  VAR_23 = -VAR_10;
  FUNC_0(&VAR_21->dev, "Error: Failed bus transaction\n");
 }





 if (VAR_22 & VAR_1) {
  VAR_23 = -VAR_11;
  FUNC_0(&VAR_21->dev,
   "Error: no response or bus collision ADD=%02x\n",
   FUNC_3(VAR_14));
 }


 if (VAR_22 & VAR_3) {
  VAR_23 = -VAR_10;
  FUNC_1(&VAR_21->dev, "Error: device error\n");
 }


 if (!(VAR_22 & VAR_4)) {
  VAR_23 = -VAR_12;
  FUNC_1(&VAR_21->dev, "Error: command never completed\n");
 }

 FUNC_0(&VAR_21->dev, "Transaction (post): STS=%02x, TYP=%02x, "
  "CMD=%02x, ADD=%02x, DAT0=%02x, DAT1=%02x\n",
  FUNC_3(VAR_19), FUNC_3(VAR_20), FUNC_3(VAR_15),
  FUNC_3(VAR_14), FUNC_3(VAR_16), FUNC_3(VAR_17));


 if (!(VAR_22 & VAR_4)) {

  FUNC_4(VAR_0, VAR_20);
  FUNC_4(0xFF, VAR_19);
 } else if (VAR_22 & VAR_5) {

  FUNC_4(VAR_8, VAR_20);
  FUNC_4(0xFF, VAR_19);
 }

 return VAR_23;
}
