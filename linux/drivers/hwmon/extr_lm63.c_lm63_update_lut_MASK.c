
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int lut_valid; int lut_size; scalar_t__ lut_last_updated; void* lut_temp_hyst; void** temp8; void** pwm1; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 void* FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct lm63_data *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;

 if (FUNC_3(VAR_2, VAR_3->lut_last_updated + 5 * VAR_0) ||
     !VAR_3->lut_valid) {
  for (VAR_5 = 0; VAR_5 < VAR_3->lut_size; VAR_5++) {
   VAR_3->pwm1[1 + VAR_5] = FUNC_2(VAR_4,
         FUNC_0(VAR_5));
   VAR_3->temp8[3 + VAR_5] = FUNC_2(VAR_4,
          FUNC_1(VAR_5));
  }
  VAR_3->lut_temp_hyst = FUNC_2(VAR_4,
          VAR_1);

  VAR_3->lut_last_updated = VAR_2;
  VAR_3->lut_valid = 1;
 }
}
