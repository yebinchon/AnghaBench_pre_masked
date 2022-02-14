
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct elan_tp_data {TYPE_1__* ops; int mode; struct i2c_client* client; } ;
struct TYPE_2__ {int (* initialize ) (struct i2c_client*) ;int (* sleep_control ) (struct i2c_client*,int) ;int (* set_mode ) (struct i2c_client*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct elan_tp_data*) ;
 int FUNC_2 (struct elan_tp_data*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_8(struct elan_tp_data *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->client;
 bool VAR_3 = 0;
 int VAR_4;

 VAR_4 = VAR_1->ops->initialize(VAR_2);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "device initialize failed: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  return VAR_4;






 if (FUNC_1(VAR_1)) {
  VAR_4 = VAR_1->ops->sleep_control(VAR_2, 0);
  if (VAR_4) {
   FUNC_0(&VAR_2->dev,
    "failed to wake device up: %d\n", VAR_4);
   return VAR_4;
  }

  FUNC_3(200);
  VAR_3 = 1;
 }

 VAR_1->mode |= VAR_0;
 VAR_4 = VAR_1->ops->set_mode(VAR_2, VAR_1->mode);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev,
   "failed to switch to absolute mode: %d\n", VAR_4);
  return VAR_4;
 }

 if (!VAR_3) {
  VAR_4 = VAR_1->ops->sleep_control(VAR_2, 0);
  if (VAR_4) {
   FUNC_0(&VAR_2->dev,
    "failed to wake device up: %d\n", VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
