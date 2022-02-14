
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dme1737_data {int valid; int has_features; int vid; int* in; int* in_min; int* in_max; int* temp; int* temp_min; int* temp_max; int* temp_offset; int* fan; int* fan_min; int* fan_opt; int* fan_max; int* pwm; int* pwm_freq; int* pwm_config; int* pwm_min; int* pwm_rr; int* zone_low; scalar_t__ type; int* zone_abs; int* zone_hyst; int alarms; int update_lock; void* last_update; int client; void* last_vbat; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 size_t* VAR_4 ;
 int* VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 size_t* VAR_6 ;
 int* VAR_7 ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int VAR_9 ;
 int FUNC_22 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct dme1737_data* FUNC_23 (struct device*) ;
 int FUNC_24 (struct dme1737_data*,scalar_t__) ;
 int FUNC_25 (struct dme1737_data*,scalar_t__,int) ;
 void* VAR_15 ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_28 (void*,void*) ;

__attribute__((used)) static struct dme1737_data *FUNC_29(struct device *VAR_17)
{
 struct dme1737_data *VAR_18 = FUNC_23(VAR_17);
 int VAR_19;
 u8 VAR_20[6];

 FUNC_26(&VAR_18->update_lock);


 if (FUNC_28(VAR_15, VAR_18->last_vbat + 600 * VAR_14) || !VAR_18->valid) {
  FUNC_25(VAR_18, VAR_3, FUNC_24(VAR_18,
      VAR_3) | 0x10);
  VAR_18->last_vbat = VAR_15;
 }


 if (FUNC_28(VAR_15, VAR_18->last_update + VAR_14) || !VAR_18->valid) {
  if (VAR_18->has_features & VAR_11) {
   VAR_18->vid = FUNC_24(VAR_18, VAR_8) &
    0x3f;
  }


  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->in); VAR_19++) {





   if (VAR_19 == 7 && !(VAR_18->has_features & VAR_9))
    continue;
   VAR_18->in[VAR_19] = FUNC_24(VAR_18,
     FUNC_5(VAR_19)) << 8;
   VAR_18->in_min[VAR_19] = FUNC_24(VAR_18,
     FUNC_7(VAR_19));
   VAR_18->in_max[VAR_19] = FUNC_24(VAR_18,
     FUNC_6(VAR_19));
  }


  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->temp); VAR_19++) {







   VAR_18->temp[VAR_19] = FUNC_24(VAR_18,
     FUNC_14(VAR_19)) << 8;
   VAR_18->temp_min[VAR_19] = FUNC_24(VAR_18,
     FUNC_16(VAR_19));
   VAR_18->temp_max[VAR_19] = FUNC_24(VAR_18,
     FUNC_15(VAR_19));
   if (VAR_18->has_features & VAR_10) {
    VAR_18->temp_offset[VAR_19] = FUNC_24(VAR_18,
      FUNC_17(VAR_19));
   }
  }







  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_20); VAR_19++) {
   if (VAR_19 == 5 && !(VAR_18->has_features & VAR_9))
    continue;
   VAR_20[VAR_19] = FUNC_24(VAR_18,
     FUNC_8(VAR_19));
  }
  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->in); VAR_19++) {
   if (VAR_19 == 7 && !(VAR_18->has_features & VAR_9))
    continue;
   VAR_18->in[VAR_19] |= (VAR_20[VAR_4[VAR_19]] <<
     VAR_5[VAR_19]) & 0xf0;
  }
  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->temp); VAR_19++) {
   VAR_18->temp[VAR_19] |= (VAR_20[VAR_6[VAR_19]] <<
     VAR_7[VAR_19]) & 0xf0;
  }


  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->fan); VAR_19++) {




   if (!(VAR_18->has_features & FUNC_21(VAR_19)))
    continue;
   VAR_18->fan[VAR_19] = FUNC_24(VAR_18,
     FUNC_1(VAR_19));
   VAR_18->fan[VAR_19] |= FUNC_24(VAR_18,
     FUNC_1(VAR_19) + 1) << 8;
   VAR_18->fan_min[VAR_19] = FUNC_24(VAR_18,
     FUNC_3(VAR_19));
   VAR_18->fan_min[VAR_19] |= FUNC_24(VAR_18,
     FUNC_3(VAR_19) + 1) << 8;
   VAR_18->fan_opt[VAR_19] = FUNC_24(VAR_18,
     FUNC_4(VAR_19));

   if (VAR_19 > 3) {
    VAR_18->fan_max[VAR_19 - 4] = FUNC_24(VAR_18,
     FUNC_2(VAR_19));
   }
  }


  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->pwm); VAR_19++) {




   if (!(VAR_18->has_features & FUNC_22(VAR_19)))
    continue;
   VAR_18->pwm[VAR_19] = FUNC_24(VAR_18,
     FUNC_9(VAR_19));
   VAR_18->pwm_freq[VAR_19] = FUNC_24(VAR_18,
     FUNC_11(VAR_19));

   if (VAR_19 < 3) {
    VAR_18->pwm_config[VAR_19] = FUNC_24(VAR_18,
      FUNC_10(VAR_19));
    VAR_18->pwm_min[VAR_19] = FUNC_24(VAR_18,
      FUNC_12(VAR_19));
   }
  }
  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->pwm_rr); VAR_19++) {
   VAR_18->pwm_rr[VAR_19] = FUNC_24(VAR_18,
      FUNC_13(VAR_19));
  }


  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->zone_low); VAR_19++) {

   if ((VAR_19 == 2) && !(VAR_18->has_features & VAR_12))
    continue;

   if ((VAR_19 == 1) && (VAR_18->type == VAR_16)) {
    VAR_18->zone_low[1] = FUNC_24(VAR_18,
      FUNC_20(2));
    VAR_18->zone_abs[1] = FUNC_24(VAR_18,
      FUNC_18(2));
   } else {
    VAR_18->zone_low[VAR_19] = FUNC_24(VAR_18,
      FUNC_20(VAR_19));
    VAR_18->zone_abs[VAR_19] = FUNC_24(VAR_18,
      FUNC_18(VAR_19));
   }
  }
  if (VAR_18->has_features & VAR_13) {
   for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->zone_hyst); VAR_19++) {
    VAR_18->zone_hyst[VAR_19] = FUNC_24(VAR_18,
      FUNC_19(VAR_19));
   }
  }


  VAR_18->alarms = FUNC_24(VAR_18,
      VAR_0);




  if (VAR_18->alarms & 0x80) {
   VAR_18->alarms |= FUNC_24(VAR_18,
      VAR_1) << 8;
   VAR_18->alarms |= FUNC_24(VAR_18,
      VAR_2) << 16;
  }






  if (!VAR_18->client) {
   if (VAR_18->alarms & 0xff0000)
    FUNC_25(VAR_18, VAR_2, 0xff);
   if (VAR_18->alarms & 0xff00)
    FUNC_25(VAR_18, VAR_1, 0xff);
   if (VAR_18->alarms & 0xff)
    FUNC_25(VAR_18, VAR_0, 0xff);
  }

  VAR_18->last_update = VAR_15;
  VAR_18->valid = 1;
 }

 FUNC_27(&VAR_18->update_lock);

 return VAR_18;
}
