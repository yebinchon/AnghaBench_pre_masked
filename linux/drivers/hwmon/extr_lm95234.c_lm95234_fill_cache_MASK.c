
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95234_data {int* tcrit1; int* tcrit2; int* toffset; int thyst; int sensor_type; int interval; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_6(struct lm95234_data *VAR_4,
         struct i2c_client *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_4(VAR_5, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->interval = FUNC_5(VAR_3[VAR_7 & 0x03]);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->tcrit1); VAR_6++) {
  VAR_7 = FUNC_4(VAR_5, FUNC_2(VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  VAR_4->tcrit1[VAR_6] = VAR_7;
 }
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->tcrit2); VAR_6++) {
  VAR_7 = FUNC_4(VAR_5, FUNC_3(VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  VAR_4->tcrit2[VAR_6] = VAR_7;
 }
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->toffset); VAR_6++) {
  VAR_7 = FUNC_4(VAR_5, FUNC_1(VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  VAR_4->toffset[VAR_6] = VAR_7;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_4->thyst = VAR_7;

 VAR_7 = FUNC_4(VAR_5, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_4->sensor_type = VAR_7;

 return 0;
}
