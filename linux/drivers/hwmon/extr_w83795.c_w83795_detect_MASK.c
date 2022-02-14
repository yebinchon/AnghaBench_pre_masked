
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {unsigned short addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
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
 int FUNC_0 (int *,char*,unsigned short,char*) ;
 int FUNC_1 (int *,char*,char const*,char,unsigned short) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_9,
    struct i2c_board_info *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct i2c_adapter *VAR_17 = VAR_9->adapter;
 unsigned short VAR_18 = VAR_9->addr;
 const char *VAR_19;

 if (!FUNC_2(VAR_17, VAR_1))
  return -VAR_0;
 VAR_11 = FUNC_3(VAR_9, VAR_3);
 if (VAR_11 < 0 || (VAR_11 & 0x7c)) {
  FUNC_0(&VAR_17->dev,
   "w83795: Detection failed at addr 0x%02hx, check %s\n",
   VAR_18, "bank");
  return -VAR_0;
 }


 VAR_12 = FUNC_3(VAR_9, VAR_8);
 VAR_14 = VAR_11 & 0x80 ? 0x5c : 0xa3;
 if (VAR_12 != VAR_14) {
  FUNC_0(&VAR_17->dev,
   "w83795: Detection failed at addr 0x%02hx, check %s\n",
   VAR_18, "vendor id");
  return -VAR_0;
 }


 VAR_13 = FUNC_6(VAR_9) |
      (FUNC_3(VAR_9, VAR_4) << 8);
 if ((VAR_13 >> 4) != 0x795) {
  FUNC_0(&VAR_17->dev,
   "w83795: Detection failed at addr 0x%02hx, check %s\n",
   VAR_18, "device id\n");
  return -VAR_0;
 }





 if ((VAR_11 & 0x07) == 0) {
  VAR_15 = FUNC_3(VAR_9,
          VAR_7);
  if ((VAR_15 & 0x7f) != VAR_18) {
   FUNC_0(&VAR_17->dev,
    "w83795: Detection failed at addr 0x%02hx, "
    "check %s\n", VAR_18, "i2c addr");
   return -VAR_0;
  }
 }







 if ((VAR_11 & 0x07) != 0)
  FUNC_4(VAR_9, VAR_3,
       VAR_11 & ~0x07);
 VAR_16 = FUNC_3(VAR_9, VAR_5);
 if (VAR_16 & VAR_6)
  VAR_19 = "w83795adg";
 else
  VAR_19 = "w83795g";

 FUNC_5(VAR_10->type, VAR_19, VAR_2);
 FUNC_1(&VAR_17->dev, "Found %s rev. %c at 0x%02hx\n", VAR_19,
   'A' + (VAR_13 & 0xf), VAR_18);

 return 0;
}
