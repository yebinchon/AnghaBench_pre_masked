
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct i2c_driver {int (* detect ) (struct i2c_client*,struct i2c_board_info*) ;int clients; TYPE_1__ driver; } ;
struct i2c_client {int addr; int detected; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int addr; char* type; } ;
struct i2c_adapter {int class; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (int *,char*,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct i2c_adapter*,int) ;
 int FUNC_5 (struct i2c_adapter*,int) ;
 struct i2c_client* FUNC_6 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct i2c_board_info*,int ,int) ;
 int FUNC_9 (struct i2c_client*,struct i2c_board_info*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_2,
         struct i2c_driver *VAR_3)
{
 struct i2c_board_info VAR_4;
 struct i2c_adapter *VAR_5 = VAR_2->adapter;
 int VAR_6 = VAR_2->addr;
 int VAR_7;


 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_5->dev, "Invalid probe address 0x%02x\n",
    VAR_6);
  return VAR_7;
 }


 if (FUNC_4(VAR_5, VAR_6))
  return 0;


 if (!FUNC_5(VAR_5, VAR_6))
  return 0;


 FUNC_8(&VAR_4, 0, sizeof(struct i2c_board_info));
 VAR_4.addr = VAR_6;
 VAR_7 = VAR_3->detect(VAR_2, &VAR_4);
 if (VAR_7) {


  return VAR_7 == -VAR_0 ? 0 : VAR_7;
 }


 if (VAR_4.type[0] == '\0') {
  FUNC_1(&VAR_5->dev,
   "%s detection function provided no name for 0x%x\n",
   VAR_3->driver.name, VAR_6);
 } else {
  struct i2c_client *VAR_8;


  if (VAR_5->class & VAR_1)
   FUNC_2(&VAR_5->dev,
    "This adapter will soon drop class based instantiation of devices. "
    "Please make sure client 0x%02x gets instantiated by other means. "
    "Check 'Documentation/i2c/instantiating-devices.rst' for details.\n",
    VAR_4.addr);

  FUNC_0(&VAR_5->dev, "Creating %s at 0x%02x\n",
   VAR_4.type, VAR_4.addr);
  VAR_8 = FUNC_6(VAR_5, &VAR_4);
  if (VAR_8)
   FUNC_7(&VAR_8->detected, &VAR_3->clients);
  else
   FUNC_1(&VAR_5->dev, "Failed creating %s at 0x%02x\n",
    VAR_4.type, VAR_4.addr);
 }
 return 0;
}
