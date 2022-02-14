
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct hdmi_i2c_adapter {int ddc_event; } ;


 scalar_t__ FUNC_0 (struct hdmi_i2c_adapter*) ;
 struct hdmi_i2c_adapter* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct i2c_adapter *VAR_0)
{
 struct hdmi_i2c_adapter *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_1))
  FUNC_2(&VAR_1->ddc_event);
}
