
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid {int flags; } ;
struct i2c_client {int dummy; } ;
struct hid_device {struct i2c_client* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct i2c_hid* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->driver_data;
 struct i2c_hid *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_0, &VAR_3->flags);
}
