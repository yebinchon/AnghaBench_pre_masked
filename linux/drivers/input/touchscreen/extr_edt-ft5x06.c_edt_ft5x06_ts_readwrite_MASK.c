
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct i2c_msg {int * buf; void* len; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2,
       u16 VAR_3, u8 *VAR_4,
       u16 VAR_5, u8 *VAR_6)
{
 struct i2c_msg VAR_7[2];
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_3) {
  VAR_7[VAR_8].addr = VAR_2->addr;
  VAR_7[VAR_8].flags = 0;
  VAR_7[VAR_8].len = VAR_3;
  VAR_7[VAR_8].buf = VAR_4;
  VAR_8++;
 }
 if (VAR_5) {
  VAR_7[VAR_8].addr = VAR_2->addr;
  VAR_7[VAR_8].flags = VAR_1;
  VAR_7[VAR_8].len = VAR_5;
  VAR_7[VAR_8].buf = VAR_6;
  VAR_8++;
 }

 VAR_9 = FUNC_0(VAR_2->adapter, VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 != VAR_8)
  return -VAR_0;

 return 0;
}
