
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si1145_data {struct iio_trigger* trig; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct iio_dev {int trig; int id; int name; } ;
struct i2c_client {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct iio_trigger* FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,struct iio_trigger*) ;
 int FUNC_3 (int *,int ,int ,int ,char*,struct iio_trigger*) ;
 struct si1145_data* FUNC_4 (struct iio_dev*) ;
 int VAR_2 ;
 int FUNC_5 (struct iio_trigger*) ;
 int FUNC_6 (struct iio_trigger*,struct iio_dev*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_4)
{
 struct si1145_data *VAR_5 = FUNC_4(VAR_4);
 struct i2c_client *VAR_6 = VAR_5->client;
 struct iio_trigger *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(&VAR_6->dev,
   "%s-dev%d", VAR_4->name, VAR_4->id);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev.parent = &VAR_6->dev;
 VAR_7->ops = &VAR_3;
 FUNC_6(VAR_7, VAR_4);

 VAR_8 = FUNC_3(&VAR_6->dev, VAR_6->irq,
     VAR_2,
     VAR_1,
     "si1145_irq",
     VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->dev, "irq request failed\n");
  return VAR_8;
 }

 VAR_8 = FUNC_2(&VAR_6->dev, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_5->trig = VAR_7;
 VAR_4->trig = FUNC_5(VAR_5->trig);

 return 0;
}
