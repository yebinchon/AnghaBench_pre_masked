
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina209_data {int valid; int update_lock; scalar_t__ last_updated; scalar_t__* regs; scalar_t__ update_interval; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__*) ;
 struct ina209_data* FUNC_1 (scalar_t__) ;
 struct ina209_data* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct ina209_data *FUNC_7(struct device *VAR_1)
{
 struct ina209_data *VAR_2 = FUNC_2(VAR_1);
 struct i2c_client *VAR_3 = VAR_2->client;
 struct ina209_data *VAR_4 = VAR_2;
 s32 VAR_5;
 int VAR_6;

 FUNC_4(&VAR_2->update_lock);

 if (!VAR_2->valid ||
     FUNC_6(VAR_0, VAR_2->last_updated + VAR_2->update_interval)) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2->regs); VAR_6++) {
   VAR_5 = FUNC_3(VAR_3, VAR_6);
   if (VAR_5 < 0) {
    VAR_4 = FUNC_1(VAR_5);
    goto abort;
   }
   VAR_2->regs[VAR_6] = VAR_5;
  }
  VAR_2->last_updated = VAR_0;
  VAR_2->valid = 1;
 }
abort:
 FUNC_5(&VAR_2->update_lock);
 return VAR_4;
}
