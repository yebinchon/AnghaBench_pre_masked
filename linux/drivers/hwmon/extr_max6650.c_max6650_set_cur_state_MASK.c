
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct max6650_data* devdata; } ;
struct max6650_data {int config; unsigned long cooling_dev_state; int update_lock; int dac; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct max6650_data*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long,int) ;

__attribute__((used)) static int FUNC_6(struct thermal_cooling_device *VAR_4,
     unsigned long VAR_5)
{
 struct max6650_data *VAR_6 = VAR_4->devdata;
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;

 VAR_5 = FUNC_0(VAR_5, 0, 255);

 FUNC_3(&VAR_6->update_lock);

 VAR_6->dac = FUNC_5(VAR_5, VAR_6->config & VAR_2);
 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_6->dac);
 if (!VAR_8) {
  FUNC_2(VAR_6, VAR_5 ?
        VAR_1 :
        VAR_0);
  VAR_6->cooling_dev_state = VAR_5;
 }

 FUNC_4(&VAR_6->update_lock);

 return VAR_8;
}
