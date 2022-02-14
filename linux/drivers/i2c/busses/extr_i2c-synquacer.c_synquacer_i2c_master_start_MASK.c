
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synquacer_i2c {int dev; scalar_t__ base; int pclkrate; } ;
struct i2c_msg {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned char FUNC_2 (struct i2c_msg*) ;
 unsigned char FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct synquacer_i2c *VAR_11,
          struct i2c_msg *VAR_12)
{
 unsigned char VAR_13, VAR_14;

 FUNC_4(FUNC_2(VAR_12), VAR_11->base + VAR_10);

 FUNC_1(VAR_11->dev, "slave:0x%02x\n", VAR_12->addr);


 VAR_13 = FUNC_3(VAR_11->base + VAR_9);
 VAR_14 = FUNC_3(VAR_11->base + VAR_8);
 FUNC_1(VAR_11->dev, "bsr:0x%02x, bcr:0x%02x\n", VAR_13, VAR_14);

 if ((VAR_13 & VAR_7) &&
     !(VAR_14 & VAR_4)) {
  FUNC_1(VAR_11->dev, "bus is busy");
  return -VAR_1;
 }

 if (VAR_13 & VAR_7) {
  FUNC_1(VAR_11->dev, "Continuous Start");
  FUNC_4(VAR_14 | VAR_5,
         VAR_11->base + VAR_8);
 } else {
  if (VAR_14 & VAR_4) {
   FUNC_1(VAR_11->dev, "not in master mode");
   return -VAR_0;
  }
  FUNC_1(VAR_11->dev, "Start Condition");

  FUNC_4(VAR_14 | VAR_4 |
         VAR_3 | VAR_2,
         VAR_11->base + VAR_8);
 }

 FUNC_0(10, VAR_11->pclkrate);


 VAR_13 = FUNC_3(VAR_11->base + VAR_9);
 VAR_14 = FUNC_3(VAR_11->base + VAR_8);
 FUNC_1(VAR_11->dev, "bsr:0x%02x, bcr:0x%02x\n", VAR_13, VAR_14);

 if ((VAR_13 & VAR_6) ||
     !(VAR_14 & VAR_4)) {
  FUNC_1(VAR_11->dev, "arbitration lost\n");
  return -VAR_0;
 }

 return 0;
}
