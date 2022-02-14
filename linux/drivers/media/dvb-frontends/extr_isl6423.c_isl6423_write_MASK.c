
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct isl6423_dev {TYPE_1__* config; struct i2c_adapter* i2c; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct isl6423_dev *VAR_2, u8 VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_2->i2c;
 u8 VAR_5 = VAR_2->config->addr;
 int VAR_6 = 0;

 struct i2c_msg VAR_7 = { .addr = VAR_5, .flags = 0, .buf = &VAR_3, .len = 1 };

 FUNC_0(VAR_0, 1, "write reg %02X", VAR_3);
 VAR_6 = FUNC_1(VAR_4, &VAR_7, 1);
 if (VAR_6 < 0)
  goto exit;
 return 0;

exit:
 FUNC_0(VAR_1, 1, "I/O error <%d>", VAR_6);
 return VAR_6;
}
