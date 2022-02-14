
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm77_data {int valid; int alarms; int update_lock; scalar_t__ last_updated; int * temp; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 struct lm77_data* FUNC_2 (struct device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct lm77_data *FUNC_7(struct device *VAR_5)
{
 struct lm77_data *VAR_6 = FUNC_2(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;

 FUNC_4(&VAR_6->update_lock);

 if (FUNC_6(VAR_2, VAR_6->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_6->valid) {
  FUNC_1(&VAR_7->dev, "Starting lm77 update\n");
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   VAR_6->temp[VAR_8] =
     FUNC_0(FUNC_3(VAR_7,
            VAR_4[VAR_8]));
  }
  VAR_6->alarms =
   FUNC_3(VAR_7, VAR_1) & 0x0007;
  VAR_6->last_updated = VAR_2;
  VAR_6->valid = 1;
 }

 FUNC_5(&VAR_6->update_lock);

 return VAR_6;
}
