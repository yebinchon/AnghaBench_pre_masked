
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int,int,int *) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static u8 *FUNC_5(struct i2c_client *VAR_4)
{
 struct i2c_adapter *VAR_5 = VAR_4->adapter;
 unsigned char VAR_6 = 0x00;
 unsigned int VAR_7;
 u8 *VAR_8 = FUNC_4(VAR_1, VAR_2);

 struct i2c_msg VAR_9[] = {
  {
   .addr = VAR_4->addr,
   .flags = 0,
   .len = 1,
   .buf = &VAR_6,
  }, {
   .addr = VAR_4->addr,
   .flags = VAR_3,
   .len = VAR_1,
   .buf = VAR_8,
  }
 };

 if (!VAR_8)
  return ((void*)0);

 if (FUNC_2(VAR_5, VAR_9, 2) != 2) {
  FUNC_0("Unable to read EDID.\n");
  goto err;
 }

 if (!FUNC_1(VAR_8, 0, 0, ((void*)0))) {
  FUNC_0("Invalid EDID data\n");
  goto err;
 }

 VAR_7 = (VAR_8[VAR_0] + 1) * VAR_1;
 if (VAR_7 > VAR_1) {
  FUNC_3(VAR_8);
  VAR_8 = FUNC_4(VAR_7, VAR_2);
  if (!VAR_8)
   return ((void*)0);




  VAR_6 = 0x00;
  VAR_9[1].len = VAR_7;
  VAR_9[1].buf = VAR_8;

  if (FUNC_2(VAR_5, VAR_9, 2) != 2) {
   FUNC_0("Unable to read EDID extension blocks.\n");
   goto err;
  }
  if (!FUNC_1(VAR_8, 1, 0, ((void*)0))) {
   FUNC_0("Invalid EDID data\n");
   goto err;
  }
 }

 return VAR_8;

err:
 FUNC_3(VAR_8);
 return ((void*)0);
}
