
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_dummy_devres {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct i2c_client*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct i2c_dummy_devres*) ;
 struct i2c_dummy_devres* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct i2c_dummy_devres*) ;
 struct i2c_client* FUNC_5 (struct i2c_adapter*,int ) ;

struct i2c_client *FUNC_6(struct device *VAR_3,
          struct i2c_adapter *VAR_4,
          u16 VAR_5)
{
 struct i2c_dummy_devres *VAR_6;
 struct i2c_client *VAR_7;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_6);
 } else {
  VAR_6->client = VAR_7;
  FUNC_2(VAR_3, VAR_6);
 }

 return VAR_7;
}
