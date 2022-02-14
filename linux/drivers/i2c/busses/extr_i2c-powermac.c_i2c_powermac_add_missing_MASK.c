
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
struct pmac_i2c_bus {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_adapter*,char*,int) ;
 int FUNC_1 (struct i2c_adapter*,int,int ,int ,int ,int ,union i2c_smbus_data*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 struct device_node* FUNC_3 (struct pmac_i2c_bus*) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_3,
            struct pmac_i2c_bus *VAR_4,
            bool VAR_5)
{
 struct device_node *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;



 if (FUNC_2(VAR_6, "k2-i2c") && !VAR_5) {
  union i2c_smbus_data VAR_8;

  VAR_7 = FUNC_1(VAR_3, 0x46, 0, VAR_1,
        67, VAR_0,
        &VAR_8);
  if (VAR_7 >= 0)
   FUNC_0(VAR_3, "MAC,pcm3052", 0x46);

  VAR_7 = FUNC_1(VAR_3, 0x47, 0, VAR_1,
        67, VAR_0,
        &VAR_8);
  if (VAR_7 >= 0)
   FUNC_0(VAR_3, "MAC,pcm3052", 0x47);
 }
}
