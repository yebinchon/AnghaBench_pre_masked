
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int rspbuf ;
typedef int cmdbuf ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct i2c_msg*,int ) ;
 int FUNC_2 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, int VAR_2,
       int VAR_3, u32 *VAR_4)
{
 unsigned char VAR_5[1];
 unsigned char VAR_6[4];
 int VAR_7;

 struct i2c_msg VAR_8[2] = {
  {
   .addr = VAR_1->addr,
   .flags = 0,
   .len = sizeof(VAR_5),
   .buf = VAR_5,
  },
  {
   .addr = VAR_1->addr,
   .flags = VAR_0,
   .len = sizeof(VAR_6),
   .buf = VAR_6,
  },
 };

 VAR_5[0] = VAR_3;

 VAR_7 = FUNC_2(VAR_1, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_1->adapter, VAR_8, FUNC_0(VAR_8));
 if (VAR_7 < 0)
  return VAR_7;

 *VAR_4 = (VAR_6[0] << (0 * 8)) | (VAR_6[1] << (1 * 8)) |
  (VAR_6[2] << (2 * 8)) | (VAR_6[3] << (3 * 8));

 return VAR_7;
}
