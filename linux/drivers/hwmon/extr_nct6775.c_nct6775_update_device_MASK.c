
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct nct6775_data {int valid; int in_num; int have_in; int** in; int has_fan; int has_fan_min; int* fan_min; int* fan_pulses; int* FAN_PULSE_SHIFT; int have_temp; int have_temp_fixed; int* temp_offset; int alarms; int beeps; int update_lock; scalar_t__ last_updated; scalar_t__* REG_BEEP; scalar_t__* REG_ALARM; scalar_t__* REG_TEMP_OFFSET; scalar_t__** reg_temp; int ** temp; scalar_t__* REG_FAN_PULSES; scalar_t__* REG_FAN_MIN; int * fan_div; scalar_t__* (* fan_from_reg ) (int,int ) ;scalar_t__** rpm; scalar_t__* REG_FAN; scalar_t__** REG_IN_MINMAX; scalar_t__* REG_VIN; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nct6775_data* FUNC_2 (struct device*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nct6775_data*,scalar_t__) ;
 int FUNC_6 (struct nct6775_data*,scalar_t__) ;
 int FUNC_7 (struct device*,struct nct6775_data*,int,int) ;
 int FUNC_8 (struct nct6775_data*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 scalar_t__* FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct nct6775_data *FUNC_13(struct device *VAR_6)
{
 struct nct6775_data *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9;

 FUNC_3(&VAR_7->update_lock);

 if (FUNC_12(VAR_5, VAR_7->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_7->valid) {

  FUNC_8(VAR_7);


  for (VAR_8 = 0; VAR_8 < VAR_7->in_num; VAR_8++) {
   if (!(VAR_7->have_in & FUNC_1(VAR_8)))
    continue;

   VAR_7->in[VAR_8][0] = FUNC_6(VAR_7,
           VAR_7->REG_VIN[VAR_8]);
   VAR_7->in[VAR_8][1] = FUNC_6(VAR_7,
       VAR_7->REG_IN_MINMAX[0][VAR_8]);
   VAR_7->in[VAR_8][2] = FUNC_6(VAR_7,
       VAR_7->REG_IN_MINMAX[1][VAR_8]);
  }


  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->rpm); VAR_8++) {
   u16 VAR_10;

   if (!(VAR_7->has_fan & FUNC_1(VAR_8)))
    continue;

   VAR_10 = FUNC_6(VAR_7, VAR_7->REG_FAN[VAR_8]);
   VAR_7->rpm[VAR_8] = VAR_7->fan_from_reg(VAR_10,
         VAR_7->fan_div[VAR_8]);

   if (VAR_7->has_fan_min & FUNC_1(VAR_8))
    VAR_7->fan_min[VAR_8] = FUNC_6(VAR_7,
        VAR_7->REG_FAN_MIN[VAR_8]);

   if (VAR_7->REG_FAN_PULSES[VAR_8]) {
    VAR_7->fan_pulses[VAR_8] =
      (FUNC_6(VAR_7,
            VAR_7->REG_FAN_PULSES[VAR_8])
       >> VAR_7->FAN_PULSE_SHIFT[VAR_8]) & 0x03;
   }

   FUNC_7(VAR_6, VAR_7, VAR_8, VAR_10);
  }

  FUNC_9(VAR_6);
  FUNC_10(VAR_6);


  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   if (!(VAR_7->have_temp & FUNC_1(VAR_8)))
    continue;
   for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->reg_temp); VAR_9++) {
    if (VAR_7->reg_temp[VAR_9][VAR_8])
     VAR_7->temp[VAR_9][VAR_8]
       = FUNC_5(VAR_7,
      VAR_7->reg_temp[VAR_9][VAR_8]);
   }
   if (VAR_8 >= VAR_4 ||
       !(VAR_7->have_temp_fixed & FUNC_1(VAR_8)))
    continue;
   VAR_7->temp_offset[VAR_8]
     = FUNC_6(VAR_7, VAR_7->REG_TEMP_OFFSET[VAR_8]);
  }

  VAR_7->alarms = 0;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   u8 VAR_11;

   if (!VAR_7->REG_ALARM[VAR_8])
    continue;
   VAR_11 = FUNC_6(VAR_7, VAR_7->REG_ALARM[VAR_8]);
   VAR_7->alarms |= ((u64)VAR_11) << (VAR_8 << 3);
  }

  VAR_7->beeps = 0;
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   u8 VAR_12;

   if (!VAR_7->REG_BEEP[VAR_8])
    continue;
   VAR_12 = FUNC_6(VAR_7, VAR_7->REG_BEEP[VAR_8]);
   VAR_7->beeps |= ((u64)VAR_12) << (VAR_8 << 3);
  }

  VAR_7->last_updated = VAR_5;
  VAR_7->valid = 1;
 }

 FUNC_4(&VAR_7->update_lock);
 return VAR_7;
}
