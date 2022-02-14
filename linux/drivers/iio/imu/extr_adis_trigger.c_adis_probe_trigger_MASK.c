
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct iio_dev {int trig; int name; int id; } ;
struct adis {TYPE_3__* trig; TYPE_2__* spi; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_12__ {int * ops; TYPE_1__ dev; } ;
struct TYPE_11__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct adis*) ;
 int FUNC_6 (int ,int *,int ,int ,TYPE_3__*) ;

int FUNC_7(struct adis *VAR_4, struct iio_dev *VAR_5)
{
 int VAR_6;

 VAR_4->trig = FUNC_1("%s-dev%d", VAR_5->name,
     VAR_5->id);
 if (VAR_4->trig == ((void*)0))
  return -VAR_0;

 VAR_4->trig->dev.parent = &VAR_4->spi->dev;
 VAR_4->trig->ops = &VAR_2;
 FUNC_5(VAR_4->trig, VAR_4);

 VAR_6 = FUNC_6(VAR_4->spi->irq,
     &VAR_3,
     VAR_1,
     VAR_5->name,
     VAR_4->trig);
 if (VAR_6)
  goto error_free_trig;

 VAR_6 = FUNC_4(VAR_4->trig);

 VAR_5->trig = FUNC_3(VAR_4->trig);
 if (VAR_6)
  goto error_free_irq;

 return 0;

error_free_irq:
 FUNC_0(VAR_4->spi->irq, VAR_4->trig);
error_free_trig:
 FUNC_2(VAR_4->trig);
 return VAR_6;
}
