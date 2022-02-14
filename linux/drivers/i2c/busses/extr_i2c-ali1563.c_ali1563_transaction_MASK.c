
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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
 int FUNC_0 (int *,char*,int,int,int,int,int,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_21, int VAR_22)
{
 u32 VAR_23;
 int VAR_24;
 int VAR_25 = -VAR_2;

 FUNC_0(&VAR_21->dev, "Transaction (pre): STS=%02x, CNTL1=%02x, "
  "CNTL2=%02x, CMD=%02x, ADD=%02x, DAT0=%02x, DAT1=%02x\n",
  FUNC_2(VAR_20), FUNC_2(VAR_16), FUNC_2(VAR_17),
  FUNC_2(VAR_15), FUNC_2(VAR_14), FUNC_2(VAR_18),
  FUNC_2(VAR_19));

 VAR_23 = FUNC_2(VAR_20);
 if (VAR_23 & VAR_9) {
  FUNC_1(&VAR_21->dev, "ali1563: Trying to reset busy device\n");
  FUNC_4(VAR_23 | VAR_9, VAR_20);
  VAR_23 = FUNC_2(VAR_20);
  if (VAR_23 & VAR_9)
   return -VAR_1;
 }
 FUNC_4(FUNC_2(VAR_17) | VAR_8, VAR_17);

 VAR_24 = VAR_0;
 do {
  FUNC_3(1);
 } while (((VAR_23 = FUNC_2(VAR_20)) & VAR_11) && --VAR_24);

 FUNC_0(&VAR_21->dev, "Transaction (post): STS=%02x, CNTL1=%02x, "
  "CNTL2=%02x, CMD=%02x, ADD=%02x, DAT0=%02x, DAT1=%02x\n",
  FUNC_2(VAR_20), FUNC_2(VAR_16), FUNC_2(VAR_17),
  FUNC_2(VAR_15), FUNC_2(VAR_14), FUNC_2(VAR_18),
  FUNC_2(VAR_19));

 if (VAR_24 && !(VAR_23 & VAR_9))
  return 0;

 if (!VAR_24) {
  FUNC_1(&VAR_21->dev, "Timeout - Trying to KILL transaction!\n");

  FUNC_4(VAR_6, VAR_17);
  VAR_23 = FUNC_2(VAR_20);
  VAR_25 = -VAR_4;
 }


 if (VAR_23 & VAR_12) {
  if (VAR_22 != VAR_7)
   FUNC_1(&VAR_21->dev, "Device error!\n");
  VAR_25 = -VAR_3;
 }

 if (VAR_23 & VAR_10) {
  FUNC_1(&VAR_21->dev, "Bus collision!\n");

  FUNC_4(VAR_5, VAR_16);
 }

 if (VAR_23 & VAR_13) {
  FUNC_1(&VAR_21->dev, "Cleaning fail after KILL!\n");
  FUNC_4(0x0, VAR_17);
 }

 return VAR_25;
}
