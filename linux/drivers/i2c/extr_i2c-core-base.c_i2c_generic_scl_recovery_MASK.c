
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_bus_recovery_info {int (* unprepare_recovery ) (struct i2c_adapter*) ;int (* set_sda ) (struct i2c_adapter*,int) ;int (* set_scl ) (struct i2c_adapter*,int) ;int (* get_scl ) (struct i2c_adapter*) ;int (* prepare_recovery ) (struct i2c_adapter*) ;} ;
struct i2c_adapter {int dev; struct i2c_bus_recovery_info* bus_recovery_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct i2c_adapter*,int) ;
 int FUNC_5 (struct i2c_adapter*,int) ;
 int FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (struct i2c_adapter*,int) ;
 int FUNC_8 (struct i2c_adapter*,int) ;
 int FUNC_9 (struct i2c_adapter*) ;

int FUNC_10(struct i2c_adapter *VAR_4)
{
 struct i2c_bus_recovery_info *VAR_5 = VAR_4->bus_recovery_info;
 int VAR_6 = 0, VAR_7 = 1, VAR_8 = 0;

 if (VAR_5->prepare_recovery)
  VAR_5->prepare_recovery(VAR_4);







 VAR_5->set_scl(VAR_4, VAR_7);
 FUNC_2(VAR_3 / 2);
 if (VAR_5->set_sda)
  VAR_5->set_sda(VAR_4, VAR_7);
 FUNC_2(VAR_3 / 2);




 while (VAR_6++ < VAR_2 * 2) {
  if (VAR_7) {

   if (!VAR_5->get_scl(VAR_4)) {
    FUNC_0(&VAR_4->dev,
     "SCL is stuck low, exit recovery\n");
    VAR_8 = -VAR_0;
    break;
   }
  }

  VAR_7 = !VAR_7;
  VAR_5->set_scl(VAR_4, VAR_7);

  FUNC_2(VAR_3 / 2);
  if (VAR_5->set_sda)
   VAR_5->set_sda(VAR_4, VAR_7);
  FUNC_2(VAR_3 / 2);

  if (VAR_7) {
   VAR_8 = FUNC_1(VAR_4);
   if (VAR_8 == 0)
    break;
  }
 }


 if (VAR_8 == -VAR_1)
  VAR_8 = 0;

 if (VAR_5->unprepare_recovery)
  VAR_5->unprepare_recovery(VAR_4);

 return VAR_8;
}
