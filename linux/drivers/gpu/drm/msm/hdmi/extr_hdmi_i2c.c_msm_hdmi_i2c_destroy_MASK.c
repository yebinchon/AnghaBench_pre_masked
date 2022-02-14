
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct hdmi_i2c_adapter {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct hdmi_i2c_adapter*) ;
 struct hdmi_i2c_adapter* FUNC_2 (struct i2c_adapter*) ;

void FUNC_3(struct i2c_adapter *VAR_0)
{
 struct hdmi_i2c_adapter *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
