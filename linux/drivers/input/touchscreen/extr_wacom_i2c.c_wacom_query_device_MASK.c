
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wacom_features {void* fw_version; void* pressure_max; void* y_max; void* x_max; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
typedef int data ;
typedef int cmd2 ;
typedef int cmd1 ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,void*,void*,void*,void*) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_9,
         struct wacom_features *VAR_10)
{
 int VAR_11;
 u8 VAR_12[] = { VAR_2, VAR_3,
   VAR_4, VAR_5 };
 u8 VAR_13[] = { VAR_6, VAR_7 };
 u8 VAR_14[VAR_8];
 struct i2c_msg VAR_15[] = {
  {
   .addr = VAR_9->addr,
   .flags = 0,
   .len = sizeof(VAR_12),
   .buf = VAR_12,
  },
  {
   .addr = VAR_9->addr,
   .flags = 0,
   .len = sizeof(VAR_13),
   .buf = VAR_13,
  },
  {
   .addr = VAR_9->addr,
   .flags = VAR_1,
   .len = sizeof(VAR_14),
   .buf = VAR_14,
  },
 };

 VAR_11 = FUNC_3(VAR_9->adapter, VAR_15, FUNC_0(VAR_15));
 if (VAR_11 < 0)
  return VAR_11;
 if (VAR_11 != FUNC_0(VAR_15))
  return -VAR_0;

 VAR_10->x_max = FUNC_2(&VAR_14[3]);
 VAR_10->y_max = FUNC_2(&VAR_14[5]);
 VAR_10->pressure_max = FUNC_2(&VAR_14[11]);
 VAR_10->fw_version = FUNC_2(&VAR_14[13]);

 FUNC_1(&VAR_9->dev,
  "x_max:%d, y_max:%d, pressure:%d, fw:%d\n",
  VAR_10->x_max, VAR_10->y_max,
  VAR_10->pressure_max, VAR_10->fw_version);

 return 0;
}
