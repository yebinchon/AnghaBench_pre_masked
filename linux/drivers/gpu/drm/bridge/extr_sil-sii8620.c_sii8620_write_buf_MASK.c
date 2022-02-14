
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sii8620 {int error; struct device* dev; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int adapter; int flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int,int,int const*,int) ;
 int FUNC_1 (struct device*,char*,int,int,int const*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (int*,int const*,int) ;
 int * VAR_3 ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct sii8620 *VAR_4, u16 VAR_5, const u8 *VAR_6,
         int VAR_7)
{
 struct device *VAR_8 = VAR_4->dev;
 struct i2c_client *VAR_9 = FUNC_6(VAR_8);
 u8 VAR_10[2];
 struct i2c_msg VAR_11 = {
  .addr = VAR_3[VAR_5 >> 8],
  .flags = VAR_9->flags,
  .len = VAR_7 + 1,
 };
 int VAR_12;

 if (VAR_4->error)
  return;

 if (VAR_7 > 1) {
  VAR_11.buf = FUNC_4(VAR_7 + 1, VAR_2);
  if (!VAR_11.buf) {
   VAR_4->error = -VAR_1;
   return;
  }
  FUNC_5(VAR_11.buf + 1, VAR_6, VAR_7);
 } else {
  VAR_11.buf = VAR_10;
  VAR_11.buf[1] = *VAR_6;
 }

 VAR_11.buf[0] = VAR_5;

 VAR_12 = FUNC_2(VAR_9->adapter, &VAR_11, 1);
 FUNC_0(VAR_8, "write at %04x: %*ph, %d\n", VAR_5, VAR_7, VAR_6, VAR_12);

 if (VAR_12 != 1) {
  FUNC_1(VAR_8, "Write at %#06x of %*ph failed with code %d.\n",
   VAR_5, VAR_7, VAR_6, VAR_12);
  VAR_4->error = VAR_12 ?: -VAR_0;
 }

 if (VAR_7 > 1)
  FUNC_3(VAR_11.buf);
}
