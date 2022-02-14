
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct adt7411_data {int device_lock; } ;


 struct adt7411_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0, u8 VAR_1, u8 VAR_2,
    bool VAR_3)
{
 struct adt7411_data *VAR_4 = FUNC_0(VAR_0);
 int VAR_5, VAR_6;

 FUNC_3(&VAR_4->device_lock);

 VAR_5 = FUNC_1(VAR_0, VAR_1);
 if (VAR_5 < 0)
  goto exit_unlock;

 if (VAR_3)
  VAR_6 = VAR_5 | VAR_2;
 else
  VAR_6 = VAR_5 & ~VAR_2;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_6);

 exit_unlock:
 FUNC_4(&VAR_4->device_lock);
 return VAR_5;
}
