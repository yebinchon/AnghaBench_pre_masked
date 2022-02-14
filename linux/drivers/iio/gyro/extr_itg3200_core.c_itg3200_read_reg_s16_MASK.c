
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct itg3200 {struct i2c_client* i2c; } ;
struct iio_dev {int dummy; } ;
struct i2c_msg {int flags; int len; char* buf; int addr; } ;
struct i2c_client {int flags; int adapter; int addr; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 struct itg3200* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1, u8 VAR_2,
  int *VAR_3)
{
 struct itg3200 *VAR_4 = FUNC_2(VAR_1);
 struct i2c_client *VAR_5 = VAR_4->i2c;
 int VAR_6;
 s16 VAR_7;

 struct i2c_msg VAR_8[2] = {
  {
   .addr = VAR_5->addr,
   .flags = VAR_5->flags,
   .len = 1,
   .buf = (char *)&VAR_2,
  },
  {
   .addr = VAR_5->addr,
   .flags = VAR_5->flags | VAR_0,
   .len = 2,
   .buf = (char *)&VAR_7,
  },
 };

 VAR_2 |= 0x80;
 VAR_6 = FUNC_1(VAR_5->adapter, VAR_8, 2);
 FUNC_0(&VAR_7);
 *VAR_3 = VAR_7;

 return (VAR_6 == 2) ? 0 : VAR_6;
}
