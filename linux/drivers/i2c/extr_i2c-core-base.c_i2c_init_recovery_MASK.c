
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_bus_recovery_info {scalar_t__ recover_bus; int get_sda; int set_sda; int get_scl; int set_scl; scalar_t__ sda_gpiod; scalar_t__ scl_gpiod; } ;
struct i2c_adapter {struct i2c_bus_recovery_info* bus_recovery_info; int dev; } ;


 int FUNC_0 (int *,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_5)
{
 struct i2c_bus_recovery_info *VAR_6 = VAR_5->bus_recovery_info;
 char *VAR_7;

 if (!VAR_6)
  return;

 if (!VAR_6->recover_bus) {
  VAR_7 = "no recover_bus() found";
  goto err;
 }

 if (VAR_6->scl_gpiod && VAR_6->recover_bus == VAR_2) {
  VAR_6->get_scl = VAR_0;
  VAR_6->set_scl = VAR_3;
  if (VAR_6->sda_gpiod) {
   VAR_6->get_sda = VAR_1;

   if (FUNC_1(VAR_6->sda_gpiod) == 0)
    VAR_6->set_sda = VAR_4;
  }
  return;
 }

 if (VAR_6->recover_bus == VAR_2) {

  if (!VAR_6->set_scl || !VAR_6->get_scl) {
   VAR_7 = "no {get|set}_scl() found";
   goto err;
  }
  if (!VAR_6->set_sda && !VAR_6->get_sda) {
   VAR_7 = "either get_sda() or set_sda() needed";
   goto err;
  }
 }

 return;
 err:
 FUNC_0(&VAR_5->dev, "Not using recovery: %s\n", VAR_7);
 VAR_5->bus_recovery_info = ((void*)0);
}
