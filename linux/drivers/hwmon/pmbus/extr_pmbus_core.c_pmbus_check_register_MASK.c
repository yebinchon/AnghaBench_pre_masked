
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_data {int flags; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct pmbus_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int) ;

__attribute__((used)) static bool FUNC_3(struct i2c_client *VAR_1,
     int (*VAR_2)(struct i2c_client *VAR_3,
          int VAR_4, int VAR_5),
     int VAR_6, int VAR_7)
{
 int VAR_8;
 struct pmbus_data *VAR_9 = FUNC_0(VAR_1);

 VAR_8 = VAR_2(VAR_1, VAR_6, VAR_7);
 if (VAR_8 >= 0 && !(VAR_9->flags & VAR_0))
  VAR_8 = FUNC_1(VAR_1);
 FUNC_2(VAR_1, -1);
 return VAR_8 >= 0;
}
