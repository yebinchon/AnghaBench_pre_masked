
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zl6100_data {int access; } ;
struct pmbus_driver_info {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 struct pmbus_driver_info* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 struct zl6100_data* FUNC_3 (struct pmbus_driver_info const*) ;
 int FUNC_4 (struct zl6100_data*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_10, int VAR_11, int VAR_12)
{
 const struct pmbus_driver_info *VAR_13 = FUNC_1(VAR_10);
 struct zl6100_data *VAR_14 = FUNC_3(VAR_13);
 int VAR_15, VAR_16;

 if (VAR_11 > 0)
  return -VAR_0;

 FUNC_4(VAR_14);

 switch (VAR_12) {
 case 128:
  VAR_15 = FUNC_2(VAR_10, 0,
        VAR_5);
  if (VAR_15 < 0)
   break;

  VAR_16 = 0;
  if (VAR_15 & VAR_9)
   VAR_16 |= VAR_4;
  if (VAR_15 & VAR_7)
   VAR_16 |= VAR_2;
  if (VAR_15 & VAR_8)
   VAR_16 |= VAR_3;
  if (VAR_15 & VAR_6)
   VAR_16 |= VAR_1;
  VAR_15 = VAR_16;
  break;
 default:
  VAR_15 = FUNC_2(VAR_10, VAR_11, VAR_12);
  break;
 }
 VAR_14->access = FUNC_0();

 return VAR_15;
}
