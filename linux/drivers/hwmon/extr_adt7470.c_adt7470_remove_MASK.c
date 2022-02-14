
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adt7470_data {int auto_update; } ;


 struct adt7470_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct adt7470_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->auto_update);
 return 0;
}
