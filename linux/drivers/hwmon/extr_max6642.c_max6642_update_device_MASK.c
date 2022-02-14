
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct max6642_data {int valid; int* temp_input; int update_lock; scalar_t__ last_updated; void* alarms; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 struct max6642_data* FUNC_1 (struct device*) ;
 void* FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct max6642_data *FUNC_6(struct device *VAR_7)
{
 struct max6642_data *VAR_8 = FUNC_1(VAR_7);
 struct i2c_client *VAR_9 = VAR_8->client;
 u16 VAR_10, VAR_11;

 FUNC_3(&VAR_8->update_lock);

 if (FUNC_5(VAR_6, VAR_8->last_updated + VAR_0) || !VAR_8->valid) {
  FUNC_0(VAR_7, "Updating max6642 data.\n");
  VAR_10 = FUNC_2(VAR_9,
     VAR_2);
  VAR_11 = (VAR_10 >> 6) & 3;
  VAR_10 = FUNC_2(VAR_9,
     VAR_1);
  VAR_10 = (VAR_10 << 2) | VAR_11;
  VAR_8->temp_input[0] = VAR_10;
  VAR_10 = FUNC_2(VAR_9,
     VAR_4);
  VAR_11 = (VAR_10 >> 6) & 3;
  VAR_10 = FUNC_2(VAR_9,
     VAR_3);
  VAR_10 = (VAR_10 << 2) | VAR_11;
  VAR_8->temp_input[1] = VAR_10;
  VAR_8->alarms = FUNC_2(VAR_9,
     VAR_5);

  VAR_8->last_updated = VAR_6;
  VAR_8->valid = 1;
 }

 FUNC_4(&VAR_8->update_lock);

 return VAR_8;
}
