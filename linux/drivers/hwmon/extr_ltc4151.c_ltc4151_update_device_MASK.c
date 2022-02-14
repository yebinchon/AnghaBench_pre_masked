
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4151_data {int valid; int* regs; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 struct ltc4151_data* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,...) ;
 struct ltc4151_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct ltc4151_data *FUNC_9(struct device *VAR_2)
{
 struct ltc4151_data *VAR_3 = FUNC_3(VAR_2);
 struct i2c_client *VAR_4 = VAR_3->client;
 struct ltc4151_data *VAR_5 = VAR_3;

 FUNC_5(&VAR_3->update_lock);





 if (FUNC_7(VAR_1, VAR_3->last_updated + VAR_0 / 6) || !VAR_3->valid) {
  int VAR_6;

  FUNC_2(&VAR_4->dev, "Starting ltc4151 update\n");


  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->regs); VAR_6++) {
   int VAR_7;

   VAR_7 = FUNC_4(VAR_4, VAR_6);
   if (FUNC_8(VAR_7 < 0)) {
    FUNC_2(VAR_2,
     "Failed to read ADC value: error %d\n",
     VAR_7);
    VAR_5 = FUNC_1(VAR_7);
    goto abort;
   }
   VAR_3->regs[VAR_6] = VAR_7;
  }
  VAR_3->last_updated = VAR_1;
  VAR_3->valid = 1;
 }
abort:
 FUNC_6(&VAR_3->update_lock);
 return VAR_5;
}
