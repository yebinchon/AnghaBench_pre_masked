
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;
struct cyapa {int state_sync_lock; scalar_t__ operational; TYPE_1__* ops; struct i2c_client* client; } ;
struct TYPE_2__ {int (* set_power_mode ) (struct cyapa*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ) ;
 struct cyapa* FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct cyapa*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct input_dev *VAR_3)
{
 struct cyapa *VAR_4 = FUNC_3(VAR_3);
 struct i2c_client *VAR_5 = VAR_4->client;
 struct device *VAR_6 = &VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_4(&VAR_4->state_sync_lock);
 if (VAR_7)
  return VAR_7;

 if (VAR_4->operational) {





  VAR_7 = VAR_4->ops->set_power_mode(VAR_4,
    VAR_2, 0, VAR_0);
  if (VAR_7) {
   FUNC_1(VAR_6, "set active power failed: %d\n", VAR_7);
   goto out;
  }
 } else {
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 || !VAR_4->operational) {
   VAR_7 = VAR_7 ? VAR_7 : -VAR_1;
   goto out;
  }
 }

 FUNC_2(VAR_5->irq);
 if (!FUNC_7(VAR_6)) {
  FUNC_11(VAR_6);
  FUNC_6(VAR_6);
 }

 FUNC_8(VAR_6);
 FUNC_9(VAR_6);
 FUNC_10(VAR_6);
out:
 FUNC_5(&VAR_4->state_sync_lock);
 return VAR_7;
}
