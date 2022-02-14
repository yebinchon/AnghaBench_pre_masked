
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zl6100_data {int access; } ;
struct pmbus_driver_info {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_1 () ;
 int FUNC_2 (struct i2c_client*) ;
 struct pmbus_driver_info* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int,int,int ) ;
 struct zl6100_data* FUNC_5 (struct pmbus_driver_info const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct zl6100_data*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_4, int VAR_5, int VAR_6,
      u16 VAR_7)
{
 const struct pmbus_driver_info *VAR_8 = FUNC_3(VAR_4);
 struct zl6100_data *VAR_9 = FUNC_5(VAR_8);
 int VAR_10, VAR_11;

 if (VAR_5 > 0)
  return -VAR_0;

 switch (VAR_6) {
 case 130:
  VAR_7 = FUNC_6(FUNC_0(FUNC_7(VAR_7) * 10, 9));
  VAR_11 = VAR_1;
  FUNC_2(VAR_4);
  break;
 case 131:
  VAR_11 = VAR_1;
  FUNC_2(VAR_4);
  break;
 case 128:
  VAR_7 = FUNC_6(FUNC_0(FUNC_7(VAR_7) * 10, 11));
  VAR_11 = VAR_2;
  FUNC_2(VAR_4);
  break;
 case 129:
  VAR_11 = VAR_2;
  FUNC_2(VAR_4);
  break;
 default:
  if (VAR_6 >= VAR_3)
   return -VAR_0;
  VAR_11 = VAR_6;
 }

 FUNC_8(VAR_9);
 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_11, VAR_7);
 VAR_9->access = FUNC_1();

 return VAR_10;
}
