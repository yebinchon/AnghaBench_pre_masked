
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm87_data {int valid; int channel; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int* temp; int* temp_high; int* temp_low; int* fan_div; int vid; int alarms; int aout; int update_lock; scalar_t__ last_updated; void* temp_crit_ext; void* temp_crit_int; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int *,char*) ;
 struct i2c_client* FUNC_10 (struct device*) ;
 struct lm87_data* FUNC_11 (struct i2c_client*) ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (struct i2c_client*,int ) ;
 void* FUNC_13 (int,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct lm87_data *FUNC_17(struct device *VAR_15)
{
 struct i2c_client *VAR_16 = FUNC_10(VAR_15);
 struct lm87_data *VAR_17 = FUNC_11(VAR_16);

 FUNC_14(&VAR_17->update_lock);

 if (FUNC_16(VAR_14, VAR_17->last_updated + VAR_1) || !VAR_17->valid) {
  int VAR_18, VAR_19;

  FUNC_9(&VAR_16->dev, "Updating data.\n");

  VAR_18 = (VAR_17->channel & VAR_0) ? 1 : 0;
  VAR_19 = (VAR_17->channel & VAR_0) ? 5 : 6;
  for (; VAR_18 < VAR_19; VAR_18++) {
   VAR_17->in[VAR_18] = FUNC_12(VAR_16,
          FUNC_6(VAR_18));
   VAR_17->in_min[VAR_18] = FUNC_12(VAR_16,
       FUNC_8(VAR_18));
   VAR_17->in_max[VAR_18] = FUNC_12(VAR_16,
       FUNC_7(VAR_18));
  }

  for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
   if (VAR_17->channel & FUNC_0(VAR_18)) {
    VAR_17->in[6+VAR_18] = FUNC_12(VAR_16,
      FUNC_1(VAR_18));
    VAR_17->in_max[6+VAR_18] = FUNC_12(VAR_16,
          FUNC_2(VAR_18));
    VAR_17->in_min[6+VAR_18] = FUNC_12(VAR_16,
          FUNC_3(VAR_18));

   } else {
    VAR_17->fan[VAR_18] = FUNC_12(VAR_16,
            FUNC_4(VAR_18));
    VAR_17->fan_min[VAR_18] = FUNC_12(VAR_16,
         FUNC_5(VAR_18));
   }
  }

  VAR_19 = (VAR_17->channel & VAR_0) ? 3 : 2;
  for (VAR_18 = 0 ; VAR_18 < VAR_19; VAR_18++) {
   VAR_17->temp[VAR_18] = FUNC_12(VAR_16,
     VAR_5[VAR_18]);
   VAR_17->temp_high[VAR_18] = FUNC_12(VAR_16,
          VAR_6[VAR_18]);
   VAR_17->temp_low[VAR_18] = FUNC_12(VAR_16,
         VAR_11[VAR_18]);
  }

  VAR_18 = FUNC_12(VAR_16, VAR_10);
  VAR_19 = FUNC_12(VAR_16, VAR_9);
  VAR_17->temp_crit_int = FUNC_13(VAR_18, VAR_19);

  VAR_18 = FUNC_12(VAR_16, VAR_8);
  VAR_19 = FUNC_12(VAR_16, VAR_7);
  VAR_17->temp_crit_ext = FUNC_13(VAR_18, VAR_19);

  VAR_18 = FUNC_12(VAR_16, VAR_13);
  VAR_17->fan_div[0] = (VAR_18 >> 4) & 0x03;
  VAR_17->fan_div[1] = (VAR_18 >> 6) & 0x03;
  VAR_17->vid = (VAR_18 & 0x0F)
     | (FUNC_12(VAR_16, VAR_12) & 0x01)
        << 4;

  VAR_17->alarms = FUNC_12(VAR_16, VAR_2)
        | (FUNC_12(VAR_16, VAR_3)
    << 8);
  VAR_17->aout = FUNC_12(VAR_16, VAR_4);

  VAR_17->last_updated = VAR_14;
  VAR_17->valid = 1;
 }

 FUNC_15(&VAR_17->update_lock);

 return VAR_17;
}
