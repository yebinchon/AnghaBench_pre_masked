
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_dummy_devres {int client; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct i2c_dummy_devres *VAR_2 = VAR_1;

 FUNC_0(VAR_2->client);
}
