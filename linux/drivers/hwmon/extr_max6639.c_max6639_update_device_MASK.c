
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6639_data {int valid; int status; int* fan; int* temp; int* temp_fault; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 struct max6639_data* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;
 struct max6639_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct max6639_data *FUNC_10(struct device *VAR_3)
{
 struct max6639_data *VAR_4 = FUNC_5(VAR_3);
 struct i2c_client *VAR_5 = VAR_4->client;
 struct max6639_data *VAR_6 = VAR_4;
 int VAR_7;
 int VAR_8;

 FUNC_7(&VAR_4->update_lock);

 if (FUNC_9(VAR_2, VAR_4->last_updated + 2 * VAR_0) || !VAR_4->valid) {
  int VAR_9;

  FUNC_4(&VAR_5->dev, "Starting max6639 update\n");

  VAR_8 = FUNC_6(VAR_5,
            VAR_1);
  if (VAR_8 < 0) {
   VAR_6 = FUNC_0(VAR_8);
   goto abort;
  }

  VAR_4->status = VAR_8;

  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   VAR_9 = FUNC_6(VAR_5,
     FUNC_1(VAR_7));
   if (VAR_9 < 0) {
    VAR_6 = FUNC_0(VAR_9);
    goto abort;
   }
   VAR_4->fan[VAR_7] = VAR_9;

   VAR_9 = FUNC_6(VAR_5,
     FUNC_3(VAR_7));
   if (VAR_9 < 0) {
    VAR_6 = FUNC_0(VAR_9);
    goto abort;
   }
   VAR_4->temp[VAR_7] = VAR_9 >> 5;
   VAR_4->temp_fault[VAR_7] = VAR_9 & 0x01;

   VAR_9 = FUNC_6(VAR_5,
     FUNC_2(VAR_7));
   if (VAR_9 < 0) {
    VAR_6 = FUNC_0(VAR_9);
    goto abort;
   }
   VAR_4->temp[VAR_7] |= VAR_9 << 3;
  }

  VAR_4->last_updated = VAR_2;
  VAR_4->valid = 1;
 }
abort:
 FUNC_8(&VAR_4->update_lock);

 return VAR_6;
}
