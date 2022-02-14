
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_interval; } ;
struct kxtj9_data {int last_poll_interval; TYPE_1__ pdata; struct input_dev* input_dev; } ;
struct input_dev {int mutex; } ;
struct i2c_client {int irq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct kxtj9_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (char const*,int,unsigned int*) ;
 int FUNC_4 (struct kxtj9_data*,int ) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_8(VAR_0);
 struct kxtj9_data *VAR_5 = FUNC_2(VAR_4);
 struct input_dev *VAR_6 = VAR_5->input_dev;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;


 FUNC_6(&VAR_6->mutex);

 FUNC_0(VAR_4->irq);





 VAR_5->last_poll_interval = FUNC_5(VAR_7, VAR_5->pdata.min_interval);

 FUNC_4(VAR_5, VAR_5->last_poll_interval);

 FUNC_1(VAR_4->irq);
 FUNC_7(&VAR_6->mutex);

 return VAR_3;
}
