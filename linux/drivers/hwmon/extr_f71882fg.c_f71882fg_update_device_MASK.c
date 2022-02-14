
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f71882fg_data {size_t type; int valid; int temp_start; int* temp_type; int update_lock; void* last_updated; void** in; void* in_status; void** fan; void** pwm; void** fan_full_speed; void** fan_target; void* fan_status; int * temp; void* temp_diode_open; void* temp_status; void* last_limits; void*** pwm_auto_point_temp; void*** pwm_auto_point_pwm; void** pwm_auto_point_mapping; void** pwm_auto_point_hyst; void* pwm_enable; void* temp_beep; void* fan_beep; void** temp_hyst; void** temp_high; void** temp_ovt; void* in_beep; void* in1_max; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct f71882fg_data* FUNC_12 (struct device*) ;
 int VAR_15 ;

 size_t VAR_16 ;


 scalar_t__* VAR_17 ;
 scalar_t__** VAR_18 ;
 scalar_t__* VAR_19 ;
 int* VAR_20 ;
 int* VAR_21 ;
 void* FUNC_13 (struct f71882fg_data*,int ) ;
 void* FUNC_14 (struct f71882fg_data*,int ) ;
 int FUNC_15 (struct f71882fg_data*,int) ;
 scalar_t__* VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 void* VAR_25 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (void*,void*) ;

__attribute__((used)) static struct f71882fg_data *FUNC_19(struct device *VAR_26)
{
 struct f71882fg_data *VAR_27 = FUNC_12(VAR_26);
 int VAR_28 = VAR_20[VAR_27->type];
 int VAR_29 = VAR_21[VAR_27->type];
 int VAR_30, VAR_31, VAR_32;

 FUNC_16(&VAR_27->update_lock);


 if (FUNC_18(VAR_25, VAR_27->last_limits + 60 * VAR_14) ||
   !VAR_27->valid) {
  if (VAR_19[VAR_27->type]) {
   if (VAR_27->type == VAR_24) {
    VAR_27->in1_max =
     FUNC_14(VAR_27,
             VAR_11);
    VAR_27->in_beep =
     FUNC_14(VAR_27,
             VAR_12);
   } else {
    VAR_27->in1_max =
     FUNC_14(VAR_27,
             VAR_3);
    VAR_27->in_beep =
     FUNC_14(VAR_27,
             VAR_4);
   }
  }


  for (VAR_30 = VAR_27->temp_start; VAR_30 < VAR_29 + VAR_27->temp_start;
         VAR_30++) {
   VAR_27->temp_ovt[VAR_30] = FUNC_14(VAR_27,
      FUNC_11(VAR_30));
   VAR_27->temp_high[VAR_30] = FUNC_14(VAR_27,
      FUNC_9(VAR_30));
  }

  if (VAR_27->type != VAR_23) {
   VAR_27->temp_hyst[0] = FUNC_14(VAR_27,
      FUNC_10(0));
   VAR_27->temp_hyst[1] = FUNC_14(VAR_27,
      FUNC_10(1));
  }

  if ((VAR_27->type != VAR_16) && (VAR_27->type != VAR_23)) {
   VAR_31 = FUNC_14(VAR_27, VAR_10);
   VAR_27->temp_type[1] = (VAR_31 & 0x02) ? 2 : 4;
   VAR_27->temp_type[2] = (VAR_31 & 0x04) ? 2 : 4;
   VAR_27->temp_type[3] = (VAR_31 & 0x08) ? 2 : 4;
  }

  if (VAR_17[VAR_27->type])
   VAR_27->fan_beep = FUNC_14(VAR_27,
      VAR_1);

  if (VAR_22[VAR_27->type])
   VAR_27->temp_beep = FUNC_14(VAR_27,
      VAR_7);

  VAR_27->pwm_enable = FUNC_14(VAR_27,
        VAR_6);
  VAR_27->pwm_auto_point_hyst[0] =
   FUNC_14(VAR_27, FUNC_2(0));
  VAR_27->pwm_auto_point_hyst[1] =
   FUNC_14(VAR_27, FUNC_2(1));

  for (VAR_30 = 0; VAR_30 < VAR_28; VAR_30++) {
   VAR_27->pwm_auto_point_mapping[VAR_30] =
       FUNC_14(VAR_27,
        FUNC_5(VAR_30));

   switch (VAR_27->type) {
   default:
    for (VAR_32 = 0; VAR_32 < 5; VAR_32++) {
     VAR_27->pwm_auto_point_pwm[VAR_30][VAR_32] =
      FUNC_14(VAR_27,
       FUNC_6
       (VAR_30, VAR_32));
    }
    for (VAR_32 = 0; VAR_32 < 4; VAR_32++) {
     VAR_27->pwm_auto_point_temp[VAR_30][VAR_32] =
      FUNC_14(VAR_27,
       FUNC_7
       (VAR_30, VAR_32));
    }
    break;
   case 130:
   case 128:
    VAR_27->pwm_auto_point_pwm[VAR_30][0] =
     FUNC_14(VAR_27,
      FUNC_6(VAR_30, 0));

   case 129:
    VAR_27->pwm_auto_point_pwm[VAR_30][1] =
     FUNC_14(VAR_27,
      FUNC_6
      (VAR_30, 1));
    VAR_27->pwm_auto_point_pwm[VAR_30][4] =
     FUNC_14(VAR_27,
      FUNC_6
      (VAR_30, 4));
    VAR_27->pwm_auto_point_temp[VAR_30][0] =
     FUNC_14(VAR_27,
      FUNC_7
      (VAR_30, 0));
    VAR_27->pwm_auto_point_temp[VAR_30][3] =
     FUNC_14(VAR_27,
      FUNC_7
      (VAR_30, 3));
    break;
   }
  }
  VAR_27->last_limits = VAR_25;
 }


 if (FUNC_18(VAR_25, VAR_27->last_updated + VAR_14) || !VAR_27->valid) {
  VAR_27->temp_status = FUNC_14(VAR_27,
      VAR_9);
  VAR_27->temp_diode_open = FUNC_14(VAR_27,
      VAR_8);
  for (VAR_30 = VAR_27->temp_start; VAR_30 < VAR_29 + VAR_27->temp_start;
         VAR_30++)
   VAR_27->temp[VAR_30] = FUNC_15(VAR_27, VAR_30);

  VAR_27->fan_status = FUNC_14(VAR_27,
      VAR_2);
  for (VAR_30 = 0; VAR_30 < VAR_28; VAR_30++) {
   VAR_27->fan[VAR_30] = FUNC_13(VAR_27,
      FUNC_0(VAR_30));
   VAR_27->fan_target[VAR_30] =
       FUNC_13(VAR_27, FUNC_3(VAR_30));
   VAR_27->fan_full_speed[VAR_30] =
       FUNC_13(VAR_27,
         FUNC_1(VAR_30));
   VAR_27->pwm[VAR_30] =
       FUNC_14(VAR_27, FUNC_8(VAR_30));
  }

  if (VAR_27->type == VAR_15) {
   VAR_27->fan[2] = FUNC_13(VAR_27,
      FUNC_0(2));
   VAR_27->pwm[2] = FUNC_14(VAR_27,
       FUNC_8(2));
  }
  if (VAR_27->type == VAR_23)
   VAR_27->fan[3] = FUNC_13(VAR_27,
      FUNC_0(3));

  if (VAR_19[VAR_27->type]) {
   if (VAR_27->type == VAR_24)
    VAR_27->in_status = FUNC_14(VAR_27,
      VAR_13);

   else
    VAR_27->in_status = FUNC_14(VAR_27,
      VAR_5);
  }

  for (VAR_30 = 0; VAR_30 < VAR_0; VAR_30++)
   if (VAR_18[VAR_27->type][VAR_30])
    VAR_27->in[VAR_30] = FUNC_14(VAR_27,
       FUNC_4(VAR_30));

  VAR_27->last_updated = VAR_25;
  VAR_27->valid = 1;
 }

 FUNC_17(&VAR_27->update_lock);

 return VAR_27;
}
