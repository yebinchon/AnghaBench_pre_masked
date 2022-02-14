
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6650_data {int valid; int nr_fans; int* tach; int alarm; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 struct max6650_data* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct max6650_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct max6650_data *FUNC_6(struct device *VAR_4)
{
 struct max6650_data *VAR_5 = FUNC_1(VAR_4);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7, VAR_8 = 0;
 int VAR_9;

 FUNC_3(&VAR_5->update_lock);

 if (FUNC_5(VAR_2, VAR_5->last_updated + VAR_0) || !VAR_5->valid) {
  for (VAR_9 = 0; VAR_9 < VAR_5->nr_fans; VAR_9++) {
   VAR_7 = FUNC_2(VAR_6, VAR_3[VAR_9]);
   if (VAR_7 < 0) {
    VAR_8 = VAR_7;
    goto error;
   }
   VAR_5->tach[VAR_9] = VAR_7;
  }






  VAR_7 = FUNC_2(VAR_6, VAR_1);
  if (VAR_7 < 0) {
   VAR_8 = VAR_7;
   goto error;
  }
  VAR_5->alarm |= VAR_7;
  VAR_5->last_updated = VAR_2;
  VAR_5->valid = 1;
 }

error:
 FUNC_4(&VAR_5->update_lock);
 if (VAR_8)
  VAR_5 = FUNC_0(VAR_8);
 return VAR_5;
}
