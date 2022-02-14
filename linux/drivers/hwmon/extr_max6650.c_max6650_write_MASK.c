
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct max6650_data {int config; int update_lock; void* count; int client; void* dac; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 long FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (long,int ,int) ;
 struct max6650_data* FUNC_2 (struct device*) ;






 int FUNC_3 (int ,int ,void*) ;
 int * VAR_5 ;
 int FUNC_4 (struct max6650_data*,int ) ;
 int FUNC_5 (struct max6650_data*,long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_6, enum hwmon_sensor_types VAR_7,
    u32 VAR_8, int VAR_9, long VAR_10)
{
 struct max6650_data *VAR_11 = FUNC_2(VAR_6);
 int VAR_12 = 0;
 u8 VAR_13;

 FUNC_6(&VAR_11->update_lock);

 switch (VAR_7) {
 case 130:
  switch (VAR_8) {
  case 128:
   VAR_13 = FUNC_8(FUNC_1(VAR_10, 0, 255),
      VAR_11->config & VAR_2);
   VAR_12 = FUNC_3(VAR_11->client,
       VAR_4, VAR_13);
   if (VAR_12)
    break;
   VAR_11->dac = VAR_13;
   break;
  case 129:
   if (VAR_10 < 0 || VAR_10 >= FUNC_0(VAR_5)) {
    VAR_12 = -VAR_0;
    break;
   }
   VAR_12 = FUNC_4(VAR_11,
      VAR_5[VAR_10]);
   break;
  default:
   VAR_12 = -VAR_1;
   break;
  }
  break;
 case 133:
  switch (VAR_8) {
  case 132:
   switch (VAR_10) {
   case 1:
    VAR_13 = 0;
    break;
   case 2:
    VAR_13 = 1;
    break;
   case 4:
    VAR_13 = 2;
    break;
   case 8:
    VAR_13 = 3;
    break;
   default:
    VAR_12 = -VAR_0;
    goto error;
   }
   VAR_12 = FUNC_3(VAR_11->client,
       VAR_3, VAR_13);
   if (VAR_12)
    break;
   VAR_11->count = VAR_13;
   break;
  case 131:
   if (VAR_10 < 0) {
    VAR_12 = -VAR_0;
    break;
   }
   VAR_12 = FUNC_5(VAR_11, VAR_10);
   break;
  default:
   VAR_12 = -VAR_1;
   break;
  }
  break;
 default:
  VAR_12 = -VAR_1;
  break;
 }

error:
 FUNC_7(&VAR_11->update_lock);
 return VAR_12;
}
