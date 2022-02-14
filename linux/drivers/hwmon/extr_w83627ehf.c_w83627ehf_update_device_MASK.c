
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83627ehf_sio_data {scalar_t__ kind; } ;
struct w83627ehf_data {int valid; int in_num; int* in; int* in_min; int* in_max; int has_fan; int* REG_FAN; int* fan_div; int has_fan_min; int* fan_min; int* REG_FAN_MIN; int pwm_num; int* fan_start_output; int* REG_FAN_START_OUTPUT; int* fan_stop_output; int* REG_FAN_STOP_OUTPUT; int* fan_stop_time; int* REG_FAN_STOP_TIME; int* REG_FAN_MAX_OUTPUT; int* fan_max_output; int* REG_FAN_STEP_OUTPUT; int* fan_step_output; int* target_temp; int* REG_TARGET; int* pwm_mode; int have_temp; int have_temp_offset; int* temp_offset; int alarms; int caseopen; int update_lock; scalar_t__ last_updated; scalar_t__* reg_temp_hyst; void** temp_max_hyst; scalar_t__* reg_temp_over; void** temp_max; scalar_t__* reg_temp; void** temp; scalar_t__ has_fan_div; int (* fan_from_reg ) (int,int) ;int * rpm; scalar_t__ in6_skip; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_6 ;
 int FUNC_3 (struct device*,char*,int,int ,int ) ;
 struct w83627ehf_data* FUNC_4 (struct device*) ;
 struct w83627ehf_sio_data* FUNC_5 (struct device*) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 void* FUNC_11 (struct w83627ehf_data*,scalar_t__) ;
 int FUNC_12 (struct w83627ehf_data*,int) ;
 int FUNC_13 (struct device*,struct w83627ehf_data*) ;
 int FUNC_14 (struct device*,struct w83627ehf_data*) ;
 int FUNC_15 (struct device*,struct w83627ehf_data*,int) ;
 int FUNC_16 (struct w83627ehf_data*,int,int) ;

__attribute__((used)) static struct w83627ehf_data *FUNC_17(struct device *VAR_9)
{
 struct w83627ehf_data *VAR_10 = FUNC_4(VAR_9);
 struct w83627ehf_sio_data *VAR_11 = FUNC_5(VAR_9);

 int VAR_12;

 FUNC_7(&VAR_10->update_lock);

 if (FUNC_10(VAR_7, VAR_10->last_updated + VAR_0 + VAR_0/2)
  || !VAR_10->valid) {

  FUNC_13(VAR_9, VAR_10);


  for (VAR_12 = 0; VAR_12 < VAR_10->in_num; VAR_12++) {
   if ((VAR_12 == 6) && VAR_10->in6_skip)
    continue;

   VAR_10->in[VAR_12] = FUNC_12(VAR_10,
          FUNC_0(VAR_12));
   VAR_10->in_min[VAR_12] = FUNC_12(VAR_10,
       FUNC_2(VAR_12));
   VAR_10->in_max[VAR_12] = FUNC_12(VAR_10,
       FUNC_1(VAR_12));
  }


  for (VAR_12 = 0; VAR_12 < 5; VAR_12++) {
   u16 VAR_13;

   if (!(VAR_10->has_fan & (1 << VAR_12)))
    continue;

   VAR_13 = FUNC_12(VAR_10, VAR_10->REG_FAN[VAR_12]);
   VAR_10->rpm[VAR_12] = VAR_10->fan_from_reg(VAR_13,
         VAR_10->fan_div[VAR_12]);

   if (VAR_10->has_fan_min & (1 << VAR_12))
    VAR_10->fan_min[VAR_12] = FUNC_12(VAR_10,
        VAR_10->REG_FAN_MIN[VAR_12]);






   if (VAR_10->has_fan_div
       && (VAR_13 >= 0xff || (VAR_11->kind == VAR_8
      && VAR_13 == 0x00))
       && VAR_10->fan_div[VAR_12] < 0x07) {
    FUNC_3(VAR_9,
     "Increasing fan%d clock divider from %u to %u\n",
     VAR_12 + 1, FUNC_6(VAR_10->fan_div[VAR_12]),
     FUNC_6(VAR_10->fan_div[VAR_12] + 1));
    VAR_10->fan_div[VAR_12]++;
    FUNC_15(VAR_9, VAR_10, VAR_12);

    if ((VAR_10->has_fan_min & (1 << VAR_12))
     && VAR_10->fan_min[VAR_12] >= 2
     && VAR_10->fan_min[VAR_12] != 255)
     FUNC_16(VAR_10,
      VAR_10->REG_FAN_MIN[VAR_12],
      (VAR_10->fan_min[VAR_12] /= 2));
   }
  }

  FUNC_14(VAR_9, VAR_10);

  for (VAR_12 = 0; VAR_12 < VAR_10->pwm_num; VAR_12++) {
   if (!(VAR_10->has_fan & (1 << VAR_12)))
    continue;

   VAR_10->fan_start_output[VAR_12] =
     FUNC_12(VAR_10,
            VAR_10->REG_FAN_START_OUTPUT[VAR_12]);
   VAR_10->fan_stop_output[VAR_12] =
     FUNC_12(VAR_10,
            VAR_10->REG_FAN_STOP_OUTPUT[VAR_12]);
   VAR_10->fan_stop_time[VAR_12] =
     FUNC_12(VAR_10,
            VAR_10->REG_FAN_STOP_TIME[VAR_12]);

   if (VAR_10->REG_FAN_MAX_OUTPUT &&
       VAR_10->REG_FAN_MAX_OUTPUT[VAR_12] != 0xff)
    VAR_10->fan_max_output[VAR_12] =
      FUNC_12(VAR_10,
      VAR_10->REG_FAN_MAX_OUTPUT[VAR_12]);

   if (VAR_10->REG_FAN_STEP_OUTPUT &&
       VAR_10->REG_FAN_STEP_OUTPUT[VAR_12] != 0xff)
    VAR_10->fan_step_output[VAR_12] =
      FUNC_12(VAR_10,
      VAR_10->REG_FAN_STEP_OUTPUT[VAR_12]);

   VAR_10->target_temp[VAR_12] =
    FUNC_12(VAR_10,
     VAR_10->REG_TARGET[VAR_12]) &
     (VAR_10->pwm_mode[VAR_12] == 1 ? 0x7f : 0xff);
  }


  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   if (!(VAR_10->have_temp & (1 << VAR_12)))
    continue;
   VAR_10->temp[VAR_12] = FUNC_11(VAR_10,
      VAR_10->reg_temp[VAR_12]);
   if (VAR_10->reg_temp_over[VAR_12])
    VAR_10->temp_max[VAR_12]
      = FUNC_11(VAR_10,
      VAR_10->reg_temp_over[VAR_12]);
   if (VAR_10->reg_temp_hyst[VAR_12])
    VAR_10->temp_max_hyst[VAR_12]
      = FUNC_11(VAR_10,
      VAR_10->reg_temp_hyst[VAR_12]);
   if (VAR_12 > 2)
    continue;
   if (VAR_10->have_temp_offset & (1 << VAR_12))
    VAR_10->temp_offset[VAR_12]
      = FUNC_12(VAR_10,
      VAR_6[VAR_12]);
  }

  VAR_10->alarms = FUNC_12(VAR_10,
     VAR_2) |
          (FUNC_12(VAR_10,
     VAR_3) << 8) |
          (FUNC_12(VAR_10,
     VAR_4) << 16);

  VAR_10->caseopen = FUNC_12(VAR_10,
      VAR_5);

  VAR_10->last_updated = VAR_7;
  VAR_10->valid = 1;
 }

 FUNC_8(&VAR_10->update_lock);
 return VAR_10;
}
