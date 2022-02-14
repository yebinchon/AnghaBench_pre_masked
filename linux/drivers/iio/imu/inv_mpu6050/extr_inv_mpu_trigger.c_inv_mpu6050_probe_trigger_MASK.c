
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inv_mpu6050_state {TYPE_2__* trig; int map; int irq; } ;
struct iio_dev {int trig; int dev; int id; int name; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {int * ops; TYPE_1__ dev; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int *,int,char*,TYPE_2__*) ;
 struct inv_mpu6050_state* FUNC_3 (struct iio_dev*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct iio_dev*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

int FUNC_7(struct iio_dev *VAR_3, int VAR_4)
{
 int VAR_5;
 struct inv_mpu6050_state *VAR_6 = FUNC_3(VAR_3);

 VAR_6->trig = FUNC_0(&VAR_3->dev,
       "%s-dev%d",
       VAR_3->name,
       VAR_3->id);
 if (!VAR_6->trig)
  return -VAR_0;

 VAR_5 = FUNC_2(&VAR_3->dev, VAR_6->irq,
          &VAR_1,
          VAR_4,
          "inv_mpu",
          VAR_6->trig);
 if (VAR_5)
  return VAR_5;

 VAR_6->trig->dev.parent = FUNC_6(VAR_6->map);
 VAR_6->trig->ops = &VAR_2;
 FUNC_5(VAR_6->trig, VAR_3);

 VAR_5 = FUNC_1(&VAR_3->dev, VAR_6->trig);
 if (VAR_5)
  return VAR_5;

 VAR_3->trig = FUNC_4(VAR_6->trig);

 return 0;
}
