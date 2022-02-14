
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct i2c_client {int addr; int dev; int adapter; } ;
typedef int bl_cmd ;
typedef int bl_addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6, u8 VAR_7, u16 VAR_8)
{
 struct i2c_msg VAR_9;
 int VAR_10;
 u8 VAR_11[sizeof(VAR_7) + sizeof(VAR_8)];

 VAR_9.addr = VAR_6->addr ^ VAR_3;
 VAR_9.flags = 0;
 VAR_9.len = sizeof(VAR_7);
 VAR_9.buf = VAR_11;

 *VAR_11 = VAR_7;

 switch (VAR_7) {
 case 128:
 case 131:
 case 130:
  break;
 case 129:
  VAR_9.len += sizeof(VAR_8);
  FUNC_4(VAR_8, VAR_11 + sizeof(VAR_7));
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_2(VAR_6->adapter, &VAR_9, 1);
 if (VAR_10 != 1)
  goto msg_fail;

 switch (VAR_7) {
 case 128:
  VAR_9.len = sizeof(u16);
  break;
 case 131:
  VAR_9.len = sizeof(u8);





  FUNC_3(50);
  break;
 case 130:
  FUNC_5(10000, 10100);

 default:
  return 0;
 }

 VAR_9.flags = VAR_2;

 VAR_10 = FUNC_2(VAR_6->adapter, &VAR_9, 1);
 if (VAR_10 != 1)
  goto msg_fail;

 if (VAR_7 == 128 &&
     FUNC_1(VAR_11) != VAR_5) {
  FUNC_0(&VAR_6->dev, "Unrecognized bootloader ID: 0x%04X\n",
   FUNC_1(VAR_11));
  return -VAR_0;
 }

 if (VAR_7 == 131 && *VAR_11 != VAR_4) {
  FUNC_0(&VAR_6->dev, "Bootloader CRC failed\n");
  return -VAR_1;
 }

 return 0;

msg_fail:
 if (VAR_10 >= 0)
  VAR_10 = -VAR_1;

 if (VAR_7 != 128)
  FUNC_0(&VAR_6->dev,
   "Unsuccessful bootloader command 0x%02X: %d\n",
   VAR_7, VAR_10);

 return VAR_10;
}
