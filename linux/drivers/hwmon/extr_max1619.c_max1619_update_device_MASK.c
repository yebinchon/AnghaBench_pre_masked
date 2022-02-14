
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1619_data {int valid; int alarms; int update_lock; scalar_t__ last_updated; void** temp; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct max1619_data* FUNC_1 (struct device*) ;
 void* FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct max1619_data *FUNC_6(struct device *VAR_6)
{
 struct max1619_data *VAR_7 = FUNC_1(VAR_6);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9, VAR_10;

 FUNC_3(&VAR_7->update_lock);

 if (FUNC_5(VAR_3, VAR_7->last_updated + VAR_0 * 2) || !VAR_7->valid) {
  FUNC_0(&VAR_8->dev, "Updating max1619 data.\n");
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   VAR_7->temp[VAR_10] = FUNC_2(VAR_8,
     VAR_4[VAR_10]);
  VAR_7->alarms = FUNC_2(VAR_8,
     VAR_2);

  VAR_9 = FUNC_2(VAR_8, VAR_1);
  if (!(VAR_9 & 0x20))
   VAR_7->alarms ^= 0x02;

  VAR_7->last_updated = VAR_3;
  VAR_7->valid = 1;
 }

 FUNC_4(&VAR_7->update_lock);

 return VAR_7;
}
