
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct ds620_data {int valid; int* temp; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 int * VAR_0 ;
 struct ds620_data* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 struct ds620_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct ds620_data *FUNC_8(struct device *VAR_3)
{
 struct ds620_data *VAR_4 = FUNC_3(VAR_3);
 struct i2c_client *VAR_5 = VAR_4->client;
 struct ds620_data *VAR_6 = VAR_4;

 FUNC_5(&VAR_4->update_lock);

 if (FUNC_7(VAR_2, VAR_4->last_updated + VAR_1 + VAR_1 / 2)
     || !VAR_4->valid) {
  int VAR_7;
  int VAR_8;

  FUNC_2(&VAR_5->dev, "Starting ds620 update\n");

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->temp); VAR_7++) {
   VAR_8 = FUNC_4(VAR_5,
         VAR_0[VAR_7]);
   if (VAR_8 < 0) {
    VAR_6 = FUNC_1(VAR_8);
    goto abort;
   }

   VAR_4->temp[VAR_7] = VAR_8;
  }

  VAR_4->last_updated = VAR_2;
  VAR_4->valid = 1;
 }
abort:
 FUNC_6(&VAR_4->update_lock);

 return VAR_6;
}
