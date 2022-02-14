
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_3)
{
 u8 *VAR_4, *VAR_5;
 struct i2c_msg VAR_6[2] = {
  {.addr = 18 >> 1, .flags = 0, .len = 2},
  {.addr = 18 >> 1, .flags = VAR_2, .len = 2},
 };
 int VAR_7 = 0;

 VAR_4 = FUNC_3(2, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_3(2, VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto rx_memory_error;
 }

 VAR_6[0].buf = VAR_4;
 VAR_6[1].buf = VAR_5;

 VAR_4[0] = 0x03;
 VAR_4[1] = 0x00;

 if (FUNC_1(VAR_3, VAR_6, 2) == 2)
  if (VAR_5[0] == 0x01 && VAR_5[1] == 0xb3) {
   FUNC_0("-D-  DiB7000PC detected\n");
   VAR_7 = 1;
   goto out;
  }

 VAR_6[0].addr = VAR_6[1].addr = 0x40;

 if (FUNC_1(VAR_3, VAR_6, 2) == 2)
  if (VAR_5[0] == 0x01 && VAR_5[1] == 0xb3) {
   FUNC_0("-D-  DiB7000PC detected\n");
   VAR_7 = 1;
   goto out;
  }

 FUNC_0("-D-  DiB7000PC not detected\n");

out:
 FUNC_2(VAR_5);
rx_memory_error:
 FUNC_2(VAR_4);
 return VAR_7;
}
