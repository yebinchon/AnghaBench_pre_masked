
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmbus_driver_info {int dummy; } ;
struct max34440_data {int id; } ;
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
 int VAR_10 ;
 struct pmbus_driver_info* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int ,int) ;
 struct max34440_data* FUNC_2 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_11, int VAR_12,
        int VAR_13, u16 VAR_14)
{
 const struct pmbus_driver_info *VAR_15 = FUNC_0(VAR_11);
 const struct max34440_data *VAR_16 = FUNC_2(VAR_15);
 int VAR_17;

 switch (VAR_13) {
 case 130:
  VAR_17 = FUNC_1(VAR_11, VAR_12,
         VAR_7, 0);
  if (VAR_17)
   break;
  VAR_17 = FUNC_1(VAR_11, VAR_12,
         VAR_6, 0);
  break;
 case 128:
  VAR_17 = FUNC_1(VAR_11, VAR_12,
         VAR_3, 0x7fff);
  if (VAR_17)
   break;
  VAR_17 = FUNC_1(VAR_11, VAR_12,
         VAR_4, 0);
  break;
 case 131:
  VAR_17 = FUNC_1(VAR_11, VAR_12,
         VAR_1, 0);
  if (!VAR_17 && (VAR_16->id == VAR_9 || VAR_16->id == VAR_10))
   VAR_17 = FUNC_1(VAR_11, VAR_12,
     VAR_5, 0);

  break;
 case 129:
  VAR_17 = FUNC_1(VAR_11, VAR_12,
         VAR_2,
         0x8000);
  if (!VAR_17 && VAR_16->id == VAR_9)
   VAR_17 = FUNC_1(VAR_11, VAR_12,
     VAR_8, 0);
  break;
 default:
  VAR_17 = -VAR_0;
  break;
 }
 return VAR_17;
}
