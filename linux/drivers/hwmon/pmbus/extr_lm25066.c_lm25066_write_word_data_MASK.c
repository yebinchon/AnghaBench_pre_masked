
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pmbus_driver_info {int dummy; } ;
struct lm25066_data {int rlimit; } ;
struct i2c_client {int dummy; } ;
typedef int s16 ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct i2c_client*) ;
 struct pmbus_driver_info* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int ,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int,scalar_t__) ;
 struct lm25066_data* FUNC_8 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_8, int VAR_9, int VAR_10,
       u16 VAR_11)
{
 const struct pmbus_driver_info *VAR_12 = FUNC_4(VAR_8);
 const struct lm25066_data *VAR_13 = FUNC_8(VAR_12);
 int VAR_14;

 switch (VAR_10) {
 case 138:
 case 137:
 case 128:
 case 141:
 case 140:
 case 143:
 case 133:
 case 134:
 case 136:
 case 135:
  VAR_11 = ((s16)VAR_11 < 0) ? 0 : FUNC_1(VAR_11, 0, VAR_13->rlimit);
  VAR_14 = FUNC_7(VAR_8, 0, VAR_10, VAR_11);
  FUNC_3(VAR_8);
  break;
 case 142:
  VAR_11 = ((s16)VAR_11 < 0) ? 0 : FUNC_1(VAR_11, 0, VAR_13->rlimit);
  VAR_14 = FUNC_7(VAR_8, 0,
         VAR_4,
         VAR_11);
  FUNC_3(VAR_8);
  break;
 case 139:
  VAR_11 = ((s16)VAR_11 < 0) ? 0 : FUNC_1(VAR_11, 0, VAR_13->rlimit);
  VAR_14 = FUNC_7(VAR_8, 0,
         VAR_5,
         VAR_11);
  FUNC_3(VAR_8);
  break;
 case 129:

  VAR_11 = FUNC_0((int)VAR_11 * 6140, 293);
  VAR_11 = ((s16)VAR_11 < 0) ? 0 : FUNC_1(VAR_11, 0, VAR_13->rlimit);
  VAR_14 = FUNC_7(VAR_8, 0,
         VAR_2, VAR_11);
  FUNC_3(VAR_8);
  break;
 case 130:

  VAR_11 = FUNC_0((int)VAR_11 * 6140, 293);
  VAR_11 = ((s16)VAR_11 < 0) ? 0 : FUNC_1(VAR_11, 0, VAR_13->rlimit);
  VAR_14 = FUNC_7(VAR_8, 0,
         VAR_1, VAR_11);
  FUNC_3(VAR_8);
  break;
 case 132:
  VAR_14 = FUNC_5(VAR_8, 0, VAR_3);
  break;
 case 131:
  VAR_11 = FUNC_1(VAR_11, 1, VAR_7);
  VAR_14 = FUNC_6(VAR_8, 0, VAR_6,
         FUNC_2(VAR_11));
  break;
 default:
  VAR_14 = -VAR_0;
  break;
 }
 return VAR_14;
}
