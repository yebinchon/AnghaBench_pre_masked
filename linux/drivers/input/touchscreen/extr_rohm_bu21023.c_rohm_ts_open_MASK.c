
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rohm_ts_data {int initialized; int setup2; struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 struct rohm_ts_data* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 struct rohm_ts_data *VAR_1 = FUNC_1(VAR_0);
 struct i2c_client *VAR_2 = VAR_1->client;
 int VAR_3;

 if (!VAR_1->initialized) {
  VAR_3 = FUNC_2(VAR_2, VAR_1->setup2);
  if (VAR_3) {
   FUNC_0(&VAR_2->dev,
    "device initialization failed: %d\n", VAR_3);
   return VAR_3;
  }

  VAR_1->initialized = 1;
 }

 return 0;
}
