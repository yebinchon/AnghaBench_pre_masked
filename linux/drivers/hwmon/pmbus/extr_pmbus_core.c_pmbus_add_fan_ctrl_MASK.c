
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pmbus_sensor {int dummy; } ;
struct pmbus_data {TYPE_1__* info; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pmbus_sensor* FUNC_0 (struct pmbus_data*,char*,char*,int,int,scalar_t__,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_8,
  struct pmbus_data *VAR_9, int VAR_10, int VAR_11, int VAR_12,
  u8 VAR_13)
{
 struct pmbus_sensor *VAR_14;

 VAR_14 = FUNC_0(VAR_9, "fan", "target", VAR_10, VAR_11,
      VAR_3 + VAR_12, VAR_6,
      0, 0, 1);

 if (!VAR_14)
  return -VAR_0;

 if (!((VAR_9->info->func[VAR_11] & VAR_1) ||
   (VAR_9->info->func[VAR_11] & VAR_2)))
  return 0;

 VAR_14 = FUNC_0(VAR_9, "pwm", ((void*)0), VAR_10, VAR_11,
      VAR_4 + VAR_12, VAR_7,
      0, 0, 1);

 if (!VAR_14)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_9, "pwm", "enable", VAR_10, VAR_11,
      VAR_5 + VAR_12, VAR_7,
      1, 0, 0);

 if (!VAR_14)
  return -VAR_0;

 return 0;
}
