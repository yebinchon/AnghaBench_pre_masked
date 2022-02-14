
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zl6100_data {scalar_t__ id; int access; } ;
struct pmbus_driver_info {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;







 int FUNC_1 () ;
 struct pmbus_driver_info* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 struct zl6100_data* FUNC_4 (struct pmbus_driver_info const*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct zl6100_data*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6, int VAR_7, int VAR_8)
{
 const struct pmbus_driver_info *VAR_9 = FUNC_2(VAR_6);
 struct zl6100_data *VAR_10 = FUNC_4(VAR_9);
 int VAR_11, VAR_12;

 if (VAR_7 > 0)
  return -VAR_0;

 if (VAR_10->id == VAR_5) {




  switch (VAR_8) {
  case 129:
  case 128:
  case 135:
   return -VAR_0;
  }
 }

 switch (VAR_8) {
 case 134:
  VAR_12 = VAR_1;
  break;
 case 132:
 case 133:
  VAR_12 = VAR_2;
  break;
 case 130:
 case 131:
  VAR_12 = VAR_3;
  break;
 default:
  if (VAR_8 >= VAR_4)
   return -VAR_0;
  VAR_12 = VAR_8;
  break;
 }

 FUNC_7(VAR_10);
 VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_12);
 VAR_10->access = FUNC_1();
 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_8) {
 case 132:
  VAR_11 = FUNC_5(FUNC_0(FUNC_6(VAR_11) * 9, 10));
  break;
 case 130:
  VAR_11 = FUNC_5(FUNC_0(FUNC_6(VAR_11) * 11, 10));
  break;
 }

 return VAR_11;
}
