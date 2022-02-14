
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int* buf; int len; int addr; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,int,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int*,void const*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2, u16 VAR_3,
         int VAR_4, int VAR_5,
         const void *VAR_6, int VAR_7, bool VAR_8)
{
 u8 VAR_9[3 + 32];
 int VAR_10, VAR_11;
 struct i2c_msg VAR_12 = {
  .addr = VAR_3,
  .buf = VAR_9,
  .len = VAR_5 / 8 + VAR_7,
 };

 if (FUNC_0(VAR_7 > 32))
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < (VAR_5 / 8); VAR_10++)
  VAR_9[VAR_10] = (VAR_4 >> (VAR_5 - (VAR_10 + 1) * 8)) & 0xff;

 FUNC_3(VAR_9 + VAR_5 / 8, VAR_6, VAR_7);

 VAR_11 = FUNC_2(VAR_2->adapter, &VAR_12, 1);
 if (VAR_11 != 1) {
  if (VAR_11 >= 0)
   VAR_11 = -VAR_1;
  if (!VAR_8)
   FUNC_1(&VAR_2->dev,
    "Error writing addr %#x reg %#x: %d\n",
    VAR_3, VAR_4, VAR_11);
  return VAR_11;
 }

 return 0;
}
