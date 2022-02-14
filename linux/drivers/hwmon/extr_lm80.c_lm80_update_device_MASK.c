
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm80_data {int error; int valid; int** in; int** fan; int* temp; int* fan_div; int alarms; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 struct lm80_data* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct device*,char*) ;
 struct lm80_data* FUNC_6 (struct device*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 size_t VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct lm80_data *FUNC_12(struct device *VAR_17)
{
 struct lm80_data *VAR_18 = FUNC_6(VAR_17);
 struct i2c_client *VAR_19 = VAR_18->client;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 struct lm80_data *VAR_23 = VAR_18;

 FUNC_9(&VAR_18->update_lock);

 if (VAR_18->error)
  FUNC_7(VAR_19);

 if (FUNC_11(VAR_13, VAR_18->last_updated + 2 * VAR_0) || !VAR_18->valid) {
  FUNC_5(VAR_17, "Starting lm80 update\n");
  for (VAR_20 = 0; VAR_20 <= 6; VAR_20++) {
   VAR_21 = FUNC_8(VAR_19, FUNC_2(VAR_20));
   if (VAR_21 < 0)
    goto abort;
   VAR_18->in[VAR_10][VAR_20] = VAR_21;

   VAR_21 = FUNC_8(VAR_19, FUNC_4(VAR_20));
   if (VAR_21 < 0)
    goto abort;
   VAR_18->in[VAR_12][VAR_20] = VAR_21;

   VAR_21 = FUNC_8(VAR_19, FUNC_3(VAR_20));
   if (VAR_21 < 0)
    goto abort;
   VAR_18->in[VAR_11][VAR_20] = VAR_21;
  }

  VAR_21 = FUNC_8(VAR_19, VAR_3);
  if (VAR_21 < 0)
   goto abort;
  VAR_18->fan[VAR_8][0] = VAR_21;

  VAR_21 = FUNC_8(VAR_19, FUNC_1(1));
  if (VAR_21 < 0)
   goto abort;
  VAR_18->fan[VAR_9][0] = VAR_21;

  VAR_21 = FUNC_8(VAR_19, VAR_4);
  if (VAR_21 < 0)
   goto abort;
  VAR_18->fan[VAR_8][1] = VAR_21;

  VAR_21 = FUNC_8(VAR_19, FUNC_1(2));
  if (VAR_21 < 0)
   goto abort;
  VAR_18->fan[VAR_9][1] = VAR_21;

  VAR_22 = VAR_21 = FUNC_8(VAR_19, VAR_7);
  if (VAR_21 < 0)
   goto abort;
  VAR_21 = FUNC_8(VAR_19, VAR_6);
  if (VAR_21 < 0)
   goto abort;
  VAR_18->temp[VAR_14] = (VAR_22 << 8) | (VAR_21 & 0xf0);

  for (VAR_20 = VAR_14 + 1; VAR_20 < VAR_15; VAR_20++) {
   VAR_21 = FUNC_8(VAR_19, VAR_16[VAR_20]);
   if (VAR_21 < 0)
    goto abort;
   VAR_18->temp[VAR_20] = VAR_21 << 8;
  }

  VAR_21 = FUNC_8(VAR_19, VAR_5);
  if (VAR_21 < 0)
   goto abort;
  VAR_18->fan_div[0] = (VAR_21 >> 2) & 0x03;
  VAR_18->fan_div[1] = (VAR_21 >> 4) & 0x03;

  VAR_22 = VAR_21 = FUNC_8(VAR_19, VAR_1);
  if (VAR_21 < 0)
   goto abort;
  VAR_21 = FUNC_8(VAR_19, VAR_2);
  if (VAR_21 < 0)
   goto abort;
  VAR_18->alarms = VAR_22 + (VAR_21 << 8);

  VAR_18->last_updated = VAR_13;
  VAR_18->valid = 1;
  VAR_18->error = 0;
 }
 goto done;

abort:
 VAR_23 = FUNC_0(VAR_21);
 VAR_18->valid = 0;
 VAR_18->error = 1;

done:
 FUNC_10(&VAR_18->update_lock);

 return VAR_23;
}
