
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmbus_driver_info {int dummy; } ;
struct ltc2978_data {scalar_t__ id; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct ltc2978_data*) ;
 struct pmbus_driver_info* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 struct ltc2978_data* FUNC_5 (struct pmbus_driver_info const*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_9)
{
 unsigned long VAR_10 = VAR_7 + FUNC_0(VAR_6);
 const struct pmbus_driver_info *VAR_11 = FUNC_2(VAR_9);
 struct ltc2978_data *VAR_12 = FUNC_5(VAR_11);
 int VAR_13;
 u8 VAR_14;

 if (!FUNC_1(VAR_12))
  return 0;





 VAR_14 = VAR_4;
 if (VAR_12->id != VAR_8)
  VAR_14 |= VAR_5;

 do {
  VAR_13 = FUNC_3(VAR_9, 0, VAR_3);
  if (VAR_13 == -VAR_0 || VAR_13 == -VAR_1) {

   FUNC_6(50, 100);
   continue;
  }
  if (VAR_13 < 0)
   return VAR_13;

  if ((VAR_13 & VAR_14) == VAR_14)
   return 0;

  FUNC_6(50, 100);
 } while (FUNC_4(VAR_7, VAR_10));

 return -VAR_2;
}
