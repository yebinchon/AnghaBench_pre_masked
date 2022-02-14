
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct i2c_msg {int flags; int len; int * buf; int addr; } ;
struct i2c_client {int flags; int dev; int adapter; int addr; } ;
typedef int __u8 ;
typedef scalar_t__ __be64 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,struct i2c_msg*,int) ;
 int FUNC_5 (int) ;

int FUNC_6(struct i2c_client *VAR_4, u64 *VAR_5)
{
 u8 VAR_6;
 __be64 VAR_7 = 0;
 u64 VAR_8;
 __be16 VAR_9;
 int VAR_10;

 struct i2c_msg VAR_11[2] = {
  {
   .addr = VAR_4->addr,
   .flags = VAR_4->flags,
   .len = 2,
   .buf = (__u8 *)&VAR_9,
   },
  {
   .addr = VAR_4->addr,
   .flags = VAR_4->flags | VAR_1,
   .buf = (__u8 *)&VAR_7,
   },
 };


 VAR_9 = FUNC_1(VAR_3);
 VAR_11[1].len = 8;
 VAR_10 = FUNC_4(VAR_4->adapter, VAR_11, 2);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_4->dev, "Unable to read device serial number");
  return VAR_10;
 }

 VAR_8 = FUNC_0(VAR_7);
 FUNC_2(&VAR_4->dev, "Serial MSB raw : %llx\n", VAR_8);

 for (VAR_6 = 0; VAR_6 < 64; VAR_6 += 16) {
  if (!FUNC_5((VAR_8 >> VAR_6) & 0xFFFF))
   return -VAR_0;
 }

 *VAR_5 = (((VAR_8 >> 32) & 0xFF000000) |
        ((VAR_8 >> 24) & 0x00FF0000) |
        ((VAR_8 >> 16) & 0x0000FF00) |
        ((VAR_8 >> 8) & 0x000000FF)) << 16;


 VAR_9 = FUNC_1(VAR_2);
 VAR_11[1].len = 6;
 VAR_7 = 0;
 VAR_10 = FUNC_4(VAR_4->adapter, VAR_11, 2);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_4->dev, "Unable to read device serial number");
  return VAR_10;
 }

 VAR_8 = FUNC_0(VAR_7) >> 16;
 FUNC_2(&VAR_4->dev, "Serial MSB raw : %llx\n", VAR_8);

 for (VAR_6 = 0; VAR_6 < 48; VAR_6 += 24) {
  if (!FUNC_5((VAR_8 >> VAR_6) & 0xFFFFFF))
   return -VAR_0;
 }

 *VAR_5 |= (VAR_8 & 0xFFFF00) << 40 | (VAR_8 >> 32);

 return 0;
}
