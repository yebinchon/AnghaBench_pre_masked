
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_data {int aux; int bridge; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tc_data* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct tc_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->bridge);
 FUNC_1(&VAR_1->aux);

 return 0;
}
