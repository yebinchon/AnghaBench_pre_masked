
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct abituguru_data {int pwms; int** pwm_settings; int* bank1_sensors; int** bank1_address; } ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct abituguru_data *VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_4 > 0 && VAR_4 <= VAR_0) {
  VAR_5->pwms = VAR_4;
  FUNC_0(2, "assuming %d PWM outputs because of "
   "\"pwms\" module param\n", (int)VAR_5->pwms);
  return;
 }

 FUNC_0(2, "detecting number of PWM outputs\n");
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {





  if (VAR_5->pwm_settings[VAR_6][0] & ~0x8F) {
   FUNC_0(2, "  pwm channel %d does not seem "
    "to be a pwm channel: settings[0] = %02X\n",
    VAR_6, (unsigned int)VAR_5->pwm_settings[VAR_6][0]);
   break;
  }





  for (VAR_7 = 0; VAR_7 < VAR_5->bank1_sensors[VAR_1];
    VAR_7++) {
   if (VAR_5->bank1_address[VAR_1][VAR_7] ==
     (VAR_5->pwm_settings[VAR_6][0] & 0x0F))
    break;
  }
  if (VAR_7 == VAR_5->bank1_sensors[VAR_1]) {
   FUNC_0(2, "  pwm channel %d does not seem "
    "to be a pwm channel: %d is not a valid temp "
    "sensor address\n", VAR_6,
    VAR_5->pwm_settings[VAR_6][0] & 0x0F);
   break;
  }


  for (VAR_7 = 1; VAR_7 < 5; VAR_7++) {
   u8 VAR_8;

   if ((VAR_6 == 0) && ((VAR_7 == 1) || (VAR_7 == 2)))
    VAR_8 = 77;
   else
    VAR_8 = VAR_3[VAR_7];
   if (VAR_5->pwm_settings[VAR_6][VAR_7] < VAR_8) {
    FUNC_0(2, "  pwm channel %d does "
     "not seem to be a pwm channel: "
     "setting %d (%d) is below the minimum "
     "value (%d)\n", VAR_6, VAR_7,
     (int)VAR_5->pwm_settings[VAR_6][VAR_7],
     (int)VAR_8);
    goto abituguru_detect_no_pwms_exit;
   }
   if (VAR_5->pwm_settings[VAR_6][VAR_7] > VAR_2[VAR_7]) {
    FUNC_0(2, "  pwm channel %d does "
     "not seem to be a pwm channel: "
     "setting %d (%d) is above the maximum "
     "value (%d)\n", VAR_6, VAR_7,
     (int)VAR_5->pwm_settings[VAR_6][VAR_7],
     (int)VAR_2[VAR_7]);
    goto abituguru_detect_no_pwms_exit;
   }
  }


  if (VAR_5->pwm_settings[VAR_6][1] >= VAR_5->pwm_settings[VAR_6][2]) {
   FUNC_0(2, "  pwm channel %d does not seem "
    "to be a pwm channel: min pwm (%d) >= "
    "max pwm (%d)\n", VAR_6,
    (int)VAR_5->pwm_settings[VAR_6][1],
    (int)VAR_5->pwm_settings[VAR_6][2]);
   break;
  }
  if (VAR_5->pwm_settings[VAR_6][3] >= VAR_5->pwm_settings[VAR_6][4]) {
   FUNC_0(2, "  pwm channel %d does not seem "
    "to be a pwm channel: min temp (%d) >= "
    "max temp (%d)\n", VAR_6,
    (int)VAR_5->pwm_settings[VAR_6][3],
    (int)VAR_5->pwm_settings[VAR_6][4]);
   break;
  }
 }

abituguru_detect_no_pwms_exit:
 VAR_5->pwms = VAR_6;
 FUNC_0(2, " found: %d PWM outputs\n", (int)VAR_5->pwms);
}
