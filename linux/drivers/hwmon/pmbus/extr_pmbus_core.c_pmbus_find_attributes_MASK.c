
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_data {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_client*,struct pmbus_data*) ;
 int FUNC_2 (struct i2c_client*,struct pmbus_data*) ;
 int FUNC_3 (struct i2c_client*,struct pmbus_data*,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
     struct pmbus_data *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_3(VAR_4, VAR_5, "in", VAR_3,
         FUNC_0(VAR_3));
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_4, VAR_5, "curr", VAR_0,
         FUNC_0(VAR_0));
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_4, VAR_5, "power", VAR_1,
         FUNC_0(VAR_1));
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_4, VAR_5, "temp", VAR_2,
         FUNC_0(VAR_2));
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 return VAR_6;
}
