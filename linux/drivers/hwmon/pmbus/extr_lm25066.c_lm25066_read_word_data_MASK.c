
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct lm25066_data {int id; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int,int) ;
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
 int VAR_11 ;
 struct pmbus_driver_info* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 struct lm25066_data* FUNC_4 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_12, int VAR_13, int VAR_14)
{
 const struct pmbus_driver_info *VAR_15 = FUNC_1(VAR_12);
 const struct lm25066_data *VAR_16 = FUNC_4(VAR_15);
 int VAR_17;

 switch (VAR_14) {
 case 136:
  VAR_17 = FUNC_3(VAR_12, 0, VAR_10);
  if (VAR_17 < 0)
   break;

  switch (VAR_16->id) {
  case 132:

   VAR_17 = FUNC_0(VAR_17 * 293, 6140);
   break;
  case 131:

   VAR_17 = FUNC_0(VAR_17 * 2832, 45400);
   break;
  case 130:

   VAR_17 = FUNC_0(VAR_17 * 70, 453);
   break;
  case 129:
  case 128:

   VAR_17 = FUNC_0(VAR_17 * 725, 2180);
   break;
  }
  break;
 case 142:
  VAR_17 = FUNC_3(VAR_12, 0, VAR_3);
  break;
 case 141:
  VAR_17 = FUNC_3(VAR_12, 0, VAR_4);
  break;
 case 144:
  VAR_17 = FUNC_3(VAR_12, 0,
        VAR_1);
  break;
 case 143:
  VAR_17 = FUNC_3(VAR_12, 0,
        VAR_2);
  break;
 case 137:
  VAR_17 = FUNC_3(VAR_12, 0, VAR_7);
  break;
 case 135:
  VAR_17 = FUNC_3(VAR_12, 0, VAR_8);
  break;
 case 140:
  VAR_17 = FUNC_3(VAR_12, 0, VAR_5);
  break;
 case 139:
  VAR_17 = FUNC_3(VAR_12, 0, VAR_6);
  break;
 case 138:
  VAR_17 = FUNC_3(VAR_12, 0, VAR_9);
  break;
 case 134:
  VAR_17 = 0;
  break;
 case 133:
  VAR_17 = FUNC_2(VAR_12, 0, VAR_11);
  if (VAR_17 < 0)
   break;
  VAR_17 = 1 << VAR_17;
  break;
 default:
  VAR_17 = -VAR_0;
  break;
 }
 return VAR_17;
}
