
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adt7475_data {int config4; int config5; int has_voltage; int** voltage; int** temp; int** tach; int** pwm; int* range; int has_pwm2; int has_fan4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 size_t VAR_12 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct i2c_client*) ;
 int FUNC_13 (struct i2c_client*,int) ;
 int FUNC_14 (struct i2c_client*,int ) ;
 struct adt7475_data* FUNC_15 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_13)
{
 struct adt7475_data *VAR_14 = FUNC_15(VAR_13);
 int VAR_15;
 int VAR_16;

 VAR_16 = FUNC_11(VAR_8);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14->config4 = VAR_16;

 VAR_16 = FUNC_11(VAR_9);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14->config5 = VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (!(VAR_14->has_voltage & (1 << VAR_15)))
   continue;

  VAR_16 = FUNC_11(FUNC_10(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->voltage[VAR_6][VAR_15] = VAR_16 << 2;

  VAR_16 = FUNC_11(FUNC_9(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->voltage[VAR_5][VAR_15] = VAR_16 << 2;
 }

 if (VAR_14->has_voltage & (1 << 5)) {
  VAR_16 = FUNC_11(VAR_11);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->voltage[VAR_6][5] = VAR_16 << 2;

  VAR_16 = FUNC_11(VAR_10);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->voltage[VAR_5][5] = VAR_16 << 2;
 }

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {

  VAR_16 = FUNC_11(FUNC_4(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->temp[VAR_6][VAR_15] = VAR_16 << 2;

  VAR_16 = FUNC_11(FUNC_3(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->temp[VAR_5][VAR_15] = VAR_16 << 2;

  VAR_16 = FUNC_11(FUNC_7(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->temp[VAR_4][VAR_15] = VAR_16 << 2;

  VAR_16 = FUNC_11(FUNC_6(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->temp[VAR_12][VAR_15] = VAR_16 << 2;

  VAR_16 = FUNC_11(FUNC_5(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->temp[VAR_7][VAR_15] = VAR_16;
 }
 FUNC_12(VAR_13);

 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  if (VAR_15 == 3 && !VAR_14->has_fan4)
   continue;
  VAR_16 = FUNC_14(VAR_13, FUNC_2(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->tach[VAR_6][VAR_15] = VAR_16;
 }

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  if (VAR_15 == 1 && !VAR_14->has_pwm2)
   continue;
  VAR_16 = FUNC_11(FUNC_0(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->pwm[VAR_5][VAR_15] = VAR_16;

  VAR_16 = FUNC_11(FUNC_1(VAR_15));
  if (VAR_16 < 0)
   return VAR_16;
  VAR_14->pwm[VAR_6][VAR_15] = VAR_16;

  FUNC_13(VAR_13, VAR_15);
 }

 VAR_16 = FUNC_11(FUNC_8(0));
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14->range[0] = VAR_16;

 VAR_16 = FUNC_11(FUNC_8(1));
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14->range[1] = VAR_16;

 VAR_16 = FUNC_11(FUNC_8(2));
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14->range[2] = VAR_16;

 return 0;
}
