
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;
struct adm1031_data {unsigned long last_updated; int valid; scalar_t__ chip_type; int* ext_temp; int* temp_offset; int* temp_min; int* temp_max; int* temp_crit; int* auto_temp; int conf1; int conf2; int alarm; int* fan_div; int* fan_min; int* fan; int* pwm; int update_lock; scalar_t__* temp; int update_interval; struct i2c_client* client; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (int *,char*) ;
 struct adm1031_data* FUNC_12 (struct device*) ;
 int FUNC_13 (int *,char*) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (unsigned long,unsigned long) ;

__attribute__((used)) static struct adm1031_data *FUNC_18(struct device *VAR_7)
{
 struct adm1031_data *VAR_8 = FUNC_12(VAR_7);
 struct i2c_client *VAR_9 = VAR_8->client;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_15(&VAR_8->update_lock);

 VAR_10 = VAR_8->last_updated
   + FUNC_14(VAR_8->update_interval);
 if (FUNC_17(VAR_6, VAR_10) || !VAR_8->valid) {

  FUNC_11(&VAR_9->dev, "Starting adm1031 update\n");
  for (VAR_11 = 0;
       VAR_11 < ((VAR_8->chip_type == VAR_5) ? 3 : 2); VAR_11++) {
   u8 VAR_12, VAR_13;

   VAR_12 =
       FUNC_10(VAR_9, FUNC_5(VAR_11));
   VAR_8->ext_temp[VAR_11] =
       FUNC_10(VAR_9, VAR_2);
   VAR_13 =
       FUNC_10(VAR_9, FUNC_5(VAR_11));
   if (VAR_13 != VAR_12) {
    VAR_8->ext_temp[VAR_11] =
        FUNC_10(VAR_9,
             VAR_2);
   }
   VAR_8->temp[VAR_11] = VAR_13;

   VAR_8->temp_offset[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_9(VAR_11));
   VAR_8->temp_min[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_8(VAR_11));
   VAR_8->temp_max[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_7(VAR_11));
   VAR_8->temp_crit[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_6(VAR_11));
   VAR_8->auto_temp[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_0(VAR_11));

  }

  VAR_8->conf1 = FUNC_10(VAR_9, VAR_0);
  VAR_8->conf2 = FUNC_10(VAR_9, VAR_1);

  VAR_8->alarm = FUNC_10(VAR_9, FUNC_4(0))
      | (FUNC_10(VAR_9, FUNC_4(1)) << 8);
  if (VAR_8->chip_type == VAR_4)
   VAR_8->alarm &= 0xc0ff;

  for (VAR_11 = 0; VAR_11 < (VAR_8->chip_type == VAR_4 ? 1 : 2);
       VAR_11++) {
   VAR_8->fan_div[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_1(VAR_11));
   VAR_8->fan_min[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_2(VAR_11));
   VAR_8->fan[VAR_11] =
       FUNC_10(VAR_9,
            FUNC_3(VAR_11));
   VAR_8->pwm[VAR_11] =
     (FUNC_10(VAR_9,
     VAR_3) >> (4 * VAR_11)) & 0x0f;
  }
  VAR_8->last_updated = VAR_6;
  VAR_8->valid = 1;
 }

 FUNC_16(&VAR_8->update_lock);

 return VAR_8;
}
