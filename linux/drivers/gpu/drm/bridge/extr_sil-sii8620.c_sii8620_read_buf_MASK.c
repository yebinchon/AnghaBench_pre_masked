
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sii8620 {int error; struct device* dev; } ;
struct i2c_msg {int flags; int len; int* buf; int addr; } ;
struct i2c_client {int flags; int adapter; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int,int*,int) ;
 int FUNC_1 (struct device*,char*,int,int,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int * VAR_2 ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct sii8620 *VAR_3, u16 VAR_4, u8 *VAR_5, int VAR_6)
{
 struct device *VAR_7 = VAR_3->dev;
 struct i2c_client *VAR_8 = FUNC_3(VAR_7);
 u8 VAR_9 = VAR_4;
 struct i2c_msg VAR_10[] = {
  {
   .addr = VAR_2[VAR_4 >> 8],
   .flags = VAR_8->flags,
   .len = 1,
   .buf = &VAR_9
  },
  {
   .addr = VAR_2[VAR_4 >> 8],
   .flags = VAR_8->flags | VAR_1,
   .len = VAR_6,
   .buf = VAR_5
  },
 };
 int VAR_11;

 if (VAR_3->error)
  return;

 VAR_11 = FUNC_2(VAR_8->adapter, VAR_10, 2);
 FUNC_0(VAR_7, "read at %04x: %*ph, %d\n", VAR_4, VAR_6, VAR_5, VAR_11);

 if (VAR_11 != 2) {
  FUNC_1(VAR_7, "Read at %#06x of %d bytes failed with code %d.\n",
   VAR_4, VAR_6, VAR_11);
  VAR_3->error = VAR_11 < 0 ? VAR_11 : -VAR_0;
 }
}
