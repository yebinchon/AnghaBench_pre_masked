
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmbus_driver_info {int vrm_version; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;





 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4,
        struct pmbus_driver_info *VAR_5)
{
 u8 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_4, 0, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = VAR_7 & FUNC_0(4, 0);

 switch (VAR_6) {
 case 129:
 case 130:
  VAR_5->vrm_version = VAR_3;
  break;
 case 128:
 case 131:
 case 132:
  VAR_5->vrm_version = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
