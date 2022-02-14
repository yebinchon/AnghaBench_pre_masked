
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_touchkey_data {int (* poweron ) (int) ;} ;
struct i2c_client {int dummy; } ;


 struct mcs_touchkey_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{
 struct mcs_touchkey_data *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->poweron)
  VAR_1->poweron(0);
}
