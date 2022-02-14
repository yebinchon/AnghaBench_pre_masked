
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;
struct cyapa {int state_sync_lock; TYPE_1__* ops; scalar_t__ operational; struct i2c_client* client; } ;
struct TYPE_2__ {int (* set_power_mode ) (struct cyapa*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct cyapa* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct cyapa*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct input_dev *VAR_2)
{
 struct cyapa *VAR_3 = FUNC_1(VAR_2);
 struct i2c_client *VAR_4 = VAR_3->client;
 struct device *VAR_5 = &VAR_3->client->dev;

 FUNC_2(&VAR_3->state_sync_lock);

 FUNC_0(VAR_4->irq);
 if (FUNC_5(VAR_5))
  FUNC_4(VAR_5);
 FUNC_6(VAR_5);

 if (VAR_3->operational)
  VAR_3->ops->set_power_mode(VAR_3,
    VAR_1, 0, VAR_0);

 FUNC_3(&VAR_3->state_sync_lock);
}
