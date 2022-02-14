
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int alarms; int has_voltage; int** voltage; int** temp; int** tach; int** pwm; int vid; scalar_t__ has_vid; int has_pwm2; int has_fan4; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 struct adt7475_data* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_13)
{
 struct adt7475_data *VAR_14 = FUNC_6(VAR_13);
 struct i2c_client *VAR_15 = VAR_14->client;
 u16 VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_4(VAR_9);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_14->alarms = VAR_18 << 8;

 VAR_18 = FUNC_4(VAR_8);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_14->alarms |= VAR_18;

 VAR_18 = FUNC_4(VAR_6);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_16 = (VAR_18 << 8);

 VAR_18 = FUNC_4(VAR_5);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_16 |= VAR_18;

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  if (!(VAR_14->has_voltage & (1 << VAR_17)))
   continue;
  VAR_18 = FUNC_4(FUNC_3(VAR_17));
  if (VAR_18 < 0)
   return VAR_18;
  VAR_14->voltage[VAR_4][VAR_17] =
   (VAR_18 << 2) |
   ((VAR_16 >> (VAR_17 * 2)) & 3);
 }

 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  VAR_18 = FUNC_4(FUNC_2(VAR_17));
  if (VAR_18 < 0)
   return VAR_18;
  VAR_14->temp[VAR_4][VAR_17] =
   (VAR_18 << 2) |
   ((VAR_16 >> ((VAR_17 + 5) * 2)) & 3);
 }

 if (VAR_14->has_voltage & (1 << 5)) {
  VAR_18 = FUNC_4(VAR_10);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_14->alarms |= VAR_18 << 24;

  VAR_18 = FUNC_4(VAR_7);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_16 = VAR_18;

  VAR_18 = FUNC_4(VAR_12);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_14->voltage[VAR_4][5] = VAR_18 << 2 |
   ((VAR_16 >> 4) & 3);
 }

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  if (VAR_17 == 3 && !VAR_14->has_fan4)
   continue;
  VAR_18 = FUNC_5(VAR_15, FUNC_1(VAR_17));
  if (VAR_18 < 0)
   return VAR_18;
  VAR_14->tach[VAR_4][VAR_17] = VAR_18;
 }


 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  if (VAR_17 == 1 && !VAR_14->has_pwm2)
   continue;
  VAR_18 = FUNC_4(FUNC_0(VAR_17));
  if (VAR_18 < 0)
   return VAR_18;
  VAR_14->pwm[VAR_4][VAR_17] = VAR_18;
 }

 if (VAR_14->has_vid) {
  VAR_18 = FUNC_4(VAR_11);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_14->vid = VAR_18 & 0x3f;
 }

 return 0;
}
