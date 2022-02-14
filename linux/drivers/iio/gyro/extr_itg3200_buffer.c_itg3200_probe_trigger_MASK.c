
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct itg3200 {TYPE_3__* trig; TYPE_2__* i2c; } ;
struct iio_dev {int trig; int id; int name; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_12__ {int * ops; TYPE_1__ dev; } ;
struct TYPE_11__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 struct itg3200* FUNC_1 (struct iio_dev*) ;
 TYPE_3__* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,struct iio_dev*) ;
 int VAR_3 ;
 int FUNC_7 (int ,int *,int ,char*,TYPE_3__*) ;

int FUNC_8(struct iio_dev *VAR_4)
{
 int VAR_5;
 struct itg3200 *VAR_6 = FUNC_1(VAR_4);

 VAR_6->trig = FUNC_2("%s-dev%d", VAR_4->name,
         VAR_4->id);
 if (!VAR_6->trig)
  return -VAR_0;

 VAR_5 = FUNC_7(VAR_6->i2c->irq,
     &VAR_2,
     VAR_1,
     "itg3200_data_rdy",
     VAR_6->trig);
 if (VAR_5)
  goto error_free_trig;


 VAR_6->trig->dev.parent = &VAR_6->i2c->dev;
 VAR_6->trig->ops = &VAR_3;
 FUNC_6(VAR_6->trig, VAR_4);
 VAR_5 = FUNC_5(VAR_6->trig);
 if (VAR_5)
  goto error_free_irq;


 VAR_4->trig = FUNC_4(VAR_6->trig);

 return 0;

error_free_irq:
 FUNC_0(VAR_6->i2c->irq, VAR_6->trig);
error_free_trig:
 FUNC_3(VAR_6->trig);
 return VAR_5;
}
