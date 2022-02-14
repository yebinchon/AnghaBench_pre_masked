
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm83_data {int valid; int* temp; int update_lock; scalar_t__ last_updated; scalar_t__ alarms; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct lm83_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct lm83_data *FUNC_6(struct device *VAR_5)
{
 struct lm83_data *VAR_6 = FUNC_1(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;

 FUNC_3(&VAR_6->update_lock);

 if (FUNC_5(VAR_4, VAR_6->last_updated + VAR_0 * 2) || !VAR_6->valid) {
  int VAR_8;

  FUNC_0(&VAR_7->dev, "Updating lm83 data.\n");
  for (VAR_8 = 0; VAR_8 < 9; VAR_8++) {
   VAR_6->temp[VAR_8] =
       FUNC_2(VAR_7,
       VAR_3[VAR_8]);
  }
  VAR_6->alarms =
      FUNC_2(VAR_7, VAR_1)
      + (FUNC_2(VAR_7, VAR_2)
      << 8);

  VAR_6->last_updated = VAR_4;
  VAR_6->valid = 1;
 }

 FUNC_4(&VAR_6->update_lock);

 return VAR_6;
}
