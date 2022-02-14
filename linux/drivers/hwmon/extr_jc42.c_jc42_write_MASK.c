
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jc42_data {int* temp; int config; int update_lock; struct i2c_client* client; int extended; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_0 (long,int ,int ) ;
 struct jc42_data* FUNC_1 (struct device*) ;




 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (long,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_11, enum hwmon_sensor_types VAR_12,
        u32 VAR_13, int VAR_14, long VAR_15)
{
 struct jc42_data *VAR_16 = FUNC_1(VAR_11);
 struct i2c_client *VAR_17 = VAR_16->client;
 int VAR_18, VAR_19;
 int VAR_20;

 FUNC_5(&VAR_16->update_lock);

 switch (VAR_13) {
 case 128:
  VAR_16->temp[VAR_9] = FUNC_4(VAR_15, VAR_16->extended);
  VAR_20 = FUNC_2(VAR_17, VAR_10[VAR_9],
         VAR_16->temp[VAR_9]);
  break;
 case 129:
  VAR_16->temp[VAR_8] = FUNC_4(VAR_15, VAR_16->extended);
  VAR_20 = FUNC_2(VAR_17, VAR_10[VAR_8],
         VAR_16->temp[VAR_8]);
  break;
 case 131:
  VAR_16->temp[VAR_7] = FUNC_4(VAR_15, VAR_16->extended);
  VAR_20 = FUNC_2(VAR_17, VAR_10[VAR_7],
         VAR_16->temp[VAR_7]);
  break;
 case 130:




  VAR_15 = FUNC_0(VAR_15, (VAR_16->extended ? VAR_6
           : VAR_5) - 6000,
    VAR_4);
  VAR_18 = FUNC_3(VAR_16->temp[VAR_7]) - VAR_15;
  VAR_19 = 0;
  if (VAR_18 > 0) {
   if (VAR_18 < 2250)
    VAR_19 = 1;
   else if (VAR_18 < 4500)
    VAR_19 = 2;
   else
    VAR_19 = 3;
  }
  VAR_16->config = (VAR_16->config & ~VAR_1) |
    (VAR_19 << VAR_2);
  VAR_20 = FUNC_2(VAR_16->client,
         VAR_3,
         VAR_16->config);
  break;
 default:
  VAR_20 = -VAR_0;
  break;
 }

 FUNC_6(&VAR_16->update_lock);

 return VAR_20;
}
