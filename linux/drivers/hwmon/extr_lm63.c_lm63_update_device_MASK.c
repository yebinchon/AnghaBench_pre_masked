
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {unsigned long last_updated; int valid; int config; int* fan; int pwm1_freq; int* pwm1; int* temp8; int* temp11; scalar_t__ kind; int temp11u; int temp2_crit_hyst; int alarms; int update_lock; int update_interval; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct lm63_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 unsigned long VAR_21 ;
 int FUNC_2 (struct lm63_data*) ;
 scalar_t__ VAR_22 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static struct lm63_data *FUNC_7(struct device *VAR_23)
{
 struct lm63_data *VAR_24 = FUNC_0(VAR_23);
 struct i2c_client *VAR_25 = VAR_24->client;
 unsigned long VAR_26;

 FUNC_4(&VAR_24->update_lock);

 VAR_26 = VAR_24->last_updated +
        FUNC_3(VAR_24->update_interval);
 if (FUNC_6(VAR_21, VAR_26) || !VAR_24->valid) {
  if (VAR_24->config & 0x04) {

   VAR_24->fan[0] = FUNC_1(VAR_25,
           VAR_15) & 0xFC;
   VAR_24->fan[0] |= FUNC_1(VAR_25,
     VAR_16) << 8;
   VAR_24->fan[1] = (FUNC_1(VAR_25,
     VAR_17) & 0xFC)
         | (FUNC_1(VAR_25,
     VAR_18) << 8);
  }

  VAR_24->pwm1_freq = FUNC_1(VAR_25,
      VAR_3);
  if (VAR_24->pwm1_freq == 0)
   VAR_24->pwm1_freq = 1;
  VAR_24->pwm1[0] = FUNC_1(VAR_25,
    VAR_4);

  VAR_24->temp8[0] = FUNC_1(VAR_25,
     VAR_2);
  VAR_24->temp8[1] = FUNC_1(VAR_25,
     VAR_1);


  VAR_24->temp11[0] = FUNC_1(VAR_25,
      VAR_14) << 8;
  VAR_24->temp11[0] |= FUNC_1(VAR_25,
       VAR_13);
  VAR_24->temp11[1] = (FUNC_1(VAR_25,
      VAR_8) << 8)
    | FUNC_1(VAR_25,
      VAR_7);
  VAR_24->temp11[2] = (FUNC_1(VAR_25,
      VAR_6) << 8)
    | FUNC_1(VAR_25,
      VAR_5);
  VAR_24->temp11[3] = (FUNC_1(VAR_25,
      VAR_10) << 8)
    | FUNC_1(VAR_25,
      VAR_9);

  if (VAR_24->kind == VAR_22)
   VAR_24->temp11u = (FUNC_1(VAR_25,
     VAR_20) << 8)
          | FUNC_1(VAR_25,
     VAR_19);

  VAR_24->temp8[2] = FUNC_1(VAR_25,
     VAR_11);
  VAR_24->temp2_crit_hyst = FUNC_1(VAR_25,
     VAR_12);

  VAR_24->alarms = FUNC_1(VAR_25,
          VAR_0) & 0x7F;

  VAR_24->last_updated = VAR_21;
  VAR_24->valid = 1;
 }

 FUNC_2(VAR_24);

 FUNC_5(&VAR_24->update_lock);

 return VAR_24;
}
