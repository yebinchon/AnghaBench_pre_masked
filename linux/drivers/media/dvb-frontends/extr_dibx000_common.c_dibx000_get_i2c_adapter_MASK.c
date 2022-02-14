
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dibx000_i2c_master {struct i2c_adapter master_i2c_adap_gpio67; struct i2c_adapter master_i2c_adap_gpio34; struct i2c_adapter master_i2c_adap_gpio12; struct i2c_adapter gated_tuner_i2c_adap; } ;
typedef enum dibx000_i2c_interface { ____Placeholder_dibx000_i2c_interface } dibx000_i2c_interface ;






 int FUNC_0 (char*) ;

struct i2c_adapter *FUNC_1(struct dibx000_i2c_master *VAR_0,
      enum dibx000_i2c_interface VAR_1,
      int VAR_2)
{
 struct i2c_adapter *VAR_3 = ((void*)0);

 switch (VAR_1) {
 case 128:
  if (VAR_2)
   VAR_3 = &VAR_0->gated_tuner_i2c_adap;
  break;
 case 131:
  if (!VAR_2)
   VAR_3 = &VAR_0->master_i2c_adap_gpio12;
  break;
 case 130:
  if (!VAR_2)
   VAR_3 = &VAR_0->master_i2c_adap_gpio34;
  break;
 case 129:
  if (VAR_2)
   VAR_3 = &VAR_0->master_i2c_adap_gpio67;
  break;
 default:
  FUNC_0("incorrect I2C interface selected\n");
  break;
 }

 return VAR_3;
}
