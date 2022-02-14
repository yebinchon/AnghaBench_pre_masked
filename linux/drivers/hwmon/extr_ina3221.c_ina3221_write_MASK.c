
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ina3221_data {int lock; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 struct ina3221_data* FUNC_0 (struct device*) ;



 int FUNC_1 (struct device*,int ,long) ;
 int FUNC_2 (struct device*,int ,int,long) ;
 int FUNC_3 (struct device*,int,long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, enum hwmon_sensor_types VAR_2,
    u32 VAR_3, int VAR_4, long VAR_5)
{
 struct ina3221_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 FUNC_4(&VAR_6->lock);

 switch (VAR_2) {
 case 130:
  VAR_7 = FUNC_1(VAR_1, VAR_3, VAR_5);
  break;
 case 128:

  VAR_7 = FUNC_3(VAR_1, VAR_4 - 1, VAR_5);
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }

 FUNC_5(&VAR_6->lock);

 return VAR_7;
}
