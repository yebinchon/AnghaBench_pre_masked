
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adc128_data {int valid; size_t mode; int** in; int* temp; int alarms; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct adc128_data* FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 struct adc128_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int* VAR_6 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct adc128_data *FUNC_10(struct device *VAR_7)
{
 struct adc128_data *VAR_8 = FUNC_4(VAR_7);
 struct i2c_client *VAR_9 = VAR_8->client;
 struct adc128_data *VAR_10 = VAR_8;
 int VAR_11, VAR_12;

 FUNC_7(&VAR_8->update_lock);

 if (FUNC_9(VAR_5, VAR_8->last_updated + VAR_4) || !VAR_8->valid) {
  for (VAR_11 = 0; VAR_11 < VAR_6[VAR_8->mode]; VAR_11++) {
   VAR_12 = FUNC_6(VAR_9,
        FUNC_0(VAR_11));
   if (VAR_12 < 0)
    goto abort;
   VAR_8->in[0][VAR_11] = VAR_12 >> 4;

   VAR_12 = FUNC_5(VAR_9,
            FUNC_2(VAR_11));
   if (VAR_12 < 0)
    goto abort;
   VAR_8->in[1][VAR_11] = VAR_12 << 4;

   VAR_12 = FUNC_5(VAR_9,
            FUNC_1(VAR_11));
   if (VAR_12 < 0)
    goto abort;
   VAR_8->in[2][VAR_11] = VAR_12 << 4;
  }

  if (VAR_8->mode != 1) {
   VAR_12 = FUNC_6(VAR_9,
        VAR_1);
   if (VAR_12 < 0)
    goto abort;
   VAR_8->temp[0] = VAR_12 >> 7;

   VAR_12 = FUNC_5(VAR_9,
            VAR_3);
   if (VAR_12 < 0)
    goto abort;
   VAR_8->temp[1] = VAR_12 << 1;

   VAR_12 = FUNC_5(VAR_9,
            VAR_2);
   if (VAR_12 < 0)
    goto abort;
   VAR_8->temp[2] = VAR_12 << 1;
  }

  VAR_12 = FUNC_5(VAR_9, VAR_0);
  if (VAR_12 < 0)
   goto abort;
  VAR_8->alarms |= VAR_12;

  VAR_8->last_updated = VAR_5;
  VAR_8->valid = 1;
 }
 goto done;

abort:
 VAR_10 = FUNC_3(VAR_12);
 VAR_8->valid = 0;
done:
 FUNC_8(&VAR_8->update_lock);
 return VAR_10;
}
