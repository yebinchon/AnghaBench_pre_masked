
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sht21 {scalar_t__* eic; struct i2c_client* client; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (scalar_t__*,int,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct sht21 *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_5->client;
 u8 VAR_7[2];
 u8 VAR_8[8];
 u8 VAR_9[8];
 struct i2c_msg VAR_10[2] = {
  {
   .addr = VAR_6->addr,
   .flags = 0,
   .len = 2,
   .buf = VAR_7,
  },
  {
   .addr = VAR_6->addr,
   .flags = VAR_0,
   .len = 8,
   .buf = VAR_8,
  },
 };
 int VAR_11;

 VAR_7[0] = VAR_3;
 VAR_7[1] = VAR_4;
 VAR_11 = FUNC_0(VAR_6->adapter, VAR_10, 2);
 if (VAR_11 < 0)
  goto out;
 VAR_9[2] = VAR_8[0];
 VAR_9[3] = VAR_8[2];
 VAR_9[4] = VAR_8[4];
 VAR_9[5] = VAR_8[6];

 VAR_7[0] = VAR_1;
 VAR_7[1] = VAR_2;
 VAR_10[1].len = 6;
 VAR_11 = FUNC_0(VAR_6->adapter, VAR_10, 2);
 if (VAR_11 < 0)
  goto out;
 VAR_9[0] = VAR_8[3];
 VAR_9[1] = VAR_8[4];
 VAR_9[6] = VAR_8[0];
 VAR_9[7] = VAR_8[1];

 VAR_11 = FUNC_1(VAR_5->eic, sizeof(VAR_5->eic),
         "%02x%02x%02x%02x%02x%02x%02x%02x\n",
         VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3],
         VAR_9[4], VAR_9[5], VAR_9[6], VAR_9[7]);
out:
 if (VAR_11 < 0)
  VAR_5->eic[0] = 0;

 return VAR_11;
}
