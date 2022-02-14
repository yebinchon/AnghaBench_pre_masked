
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm665_data {int valid; int faults; int* adc; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 struct smm665_data* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smm665_data* FUNC_1 (struct device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct smm665_data*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct smm665_data *FUNC_8(struct device *VAR_4)
{
 struct smm665_data *VAR_5 = FUNC_1(VAR_4);
 struct i2c_client *VAR_6 = VAR_5->client;
 struct smm665_data *VAR_7 = VAR_5;

 FUNC_2(&VAR_5->update_lock);

 if (FUNC_6(VAR_3, VAR_5->last_updated + VAR_0) || !VAR_5->valid) {
  int VAR_8, VAR_9;




  VAR_9 = FUNC_4(VAR_6, VAR_1);
  if (FUNC_7(VAR_9 < 0)) {
   VAR_7 = FUNC_0(VAR_9);
   goto abort;
  }
  VAR_5->faults = VAR_9;


  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_9 = FUNC_5(VAR_5, VAR_8);
   if (FUNC_7(VAR_9 < 0)) {
    VAR_7 = FUNC_0(VAR_9);
    goto abort;
   }
   VAR_5->adc[VAR_8] = VAR_9;
  }
  VAR_5->last_updated = VAR_3;
  VAR_5->valid = 1;
 }
abort:
 FUNC_3(&VAR_5->update_lock);
 return VAR_7;
}
