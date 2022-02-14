
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct i2c_msg {size_t* buf; int len; scalar_t__ flags; int addr; } ;
struct device {int dummy; } ;
struct i2c_client {int adapter; int addr; struct device dev; } ;
struct atmel_captouch_device {size_t* xfer_buf; struct i2c_client* client; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct device*,char*,size_t,size_t) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (size_t*,size_t*,size_t) ;

__attribute__((used)) static int FUNC_4(struct atmel_captouch_device *VAR_4,
    u8 VAR_5, u8 *VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8 = VAR_4->client;
 struct device *VAR_9 = &VAR_8->dev;
 struct i2c_msg VAR_10[2];
 int VAR_11;

 if (VAR_7 > sizeof(VAR_4->xfer_buf) - 2)
  return -VAR_1;

 VAR_4->xfer_buf[0] = VAR_5;
 VAR_4->xfer_buf[1] = VAR_7;

 VAR_10[0].addr = VAR_8->addr;
 VAR_10[0].flags = 0;
 VAR_10[0].buf = VAR_4->xfer_buf;
 VAR_10[0].len = 2;

 VAR_10[1].addr = VAR_8->addr;
 VAR_10[1].flags = VAR_3;
 VAR_10[1].buf = VAR_4->xfer_buf;
 VAR_10[1].len = VAR_7 + 2;

 VAR_11 = FUNC_2(VAR_8->adapter, VAR_10, FUNC_0(VAR_10));
 if (VAR_11 != FUNC_0(VAR_10))
  return VAR_11 < 0 ? VAR_11 : -VAR_2;

 if (VAR_4->xfer_buf[0] != VAR_5) {
  FUNC_1(VAR_9,
   "I2C read error: register address does not match (%#02x vs %02x)\n",
   VAR_4->xfer_buf[0], VAR_5);
  return -VAR_0;
 }

 FUNC_3(VAR_6, &VAR_4->xfer_buf[2], VAR_7);

 return 0;
}
