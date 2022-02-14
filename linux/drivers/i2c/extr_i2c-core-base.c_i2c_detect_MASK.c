
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct i2c_driver {unsigned short* address_list; int class; TYPE_1__ driver; int detect; } ;
struct i2c_client {unsigned short addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int class; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short const VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_client*,struct i2c_driver*) ;
 int FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_4, struct i2c_driver *VAR_5)
{
 const unsigned short *VAR_6;
 struct i2c_client *VAR_7;
 int VAR_8, VAR_9 = 0;
 int VAR_10 = FUNC_1(VAR_4);

 VAR_6 = VAR_5->address_list;
 if (!VAR_5->detect || !VAR_6)
  return 0;


 if (VAR_4->class == VAR_2) {
  FUNC_0(&VAR_4->dev,
   "This adapter dropped support for I2C classes and won't auto-detect %s devices anymore. "
   "If you need it, check 'Documentation/i2c/instantiating-devices.rst' for alternatives.\n",
   VAR_5->driver.name);
  return 0;
 }


 if (!(VAR_4->class & VAR_5->class))
  return 0;


 VAR_7 = FUNC_4(sizeof(struct i2c_client), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->adapter = VAR_4;

 for (VAR_8 = 0; VAR_6[VAR_8] != VAR_3; VAR_8 += 1) {
  FUNC_0(&VAR_4->dev,
   "found normal entry for adapter %d, addr 0x%02x\n",
   VAR_10, VAR_6[VAR_8]);
  VAR_7->addr = VAR_6[VAR_8];
  VAR_9 = FUNC_2(VAR_7, VAR_5);
  if (FUNC_5(VAR_9))
   break;
 }

 FUNC_3(VAR_7);
 return VAR_9;
}
