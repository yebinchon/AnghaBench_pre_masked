
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abituguru_data {int bank2_sensors; int** bank2_settings; } ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct abituguru_data *VAR_4)
{
 int VAR_5;

 if (VAR_3 > 0 && VAR_3 <= VAR_0) {
  VAR_4->bank2_sensors = VAR_3;
  FUNC_0(2, "assuming %d fan sensors because of "
   "\"fan_sensors\" module param\n",
   (int)VAR_4->bank2_sensors);
  return;
 }

 FUNC_0(2, "detecting number of fan sensors\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->bank2_settings[VAR_5][0] & ~0xC9) {
   FUNC_0(2, "  bank2 sensor %d does not seem "
    "to be a fan sensor: settings[0] = %02X\n",
    VAR_5, (unsigned int)VAR_4->bank2_settings[VAR_5][0]);
   break;
  }


  if (VAR_4->bank2_settings[VAR_5][1] <
    VAR_2) {
   FUNC_0(2, "  bank2 sensor %d does not seem "
    "to be a fan sensor: the threshold (%d) is "
    "below the minimum (%d)\n", VAR_5,
    (int)VAR_4->bank2_settings[VAR_5][1],
    (int)VAR_2);
   break;
  }
  if (VAR_4->bank2_settings[VAR_5][1] >
    VAR_1) {
   FUNC_0(2, "  bank2 sensor %d does not seem "
    "to be a fan sensor: the threshold (%d) is "
    "above the maximum (%d)\n", VAR_5,
    (int)VAR_4->bank2_settings[VAR_5][1],
    (int)VAR_1);
   break;
  }
 }

 VAR_4->bank2_sensors = VAR_5;
 FUNC_0(2, " found: %d fan sensors\n",
  (int)VAR_4->bank2_sensors);
}
