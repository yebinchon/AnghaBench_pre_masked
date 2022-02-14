
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iio_dev {int trig; int name; int id; } ;
struct ad_sigma_delta {int irq_dis; TYPE_3__* trig; TYPE_2__* spi; int completion; } ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_10__ {TYPE_1__ dev; int * ops; } ;
struct TYPE_9__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ad_sigma_delta*) ;
 struct ad_sigma_delta* FUNC_2 (struct iio_dev*) ;
 TYPE_3__* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,struct ad_sigma_delta*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,int ,struct ad_sigma_delta*) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_4)
{
 struct ad_sigma_delta *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 VAR_5->trig = FUNC_3("%s-dev%d", VAR_4->name,
      VAR_4->id);
 if (VAR_5->trig == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto error_ret;
 }
 VAR_5->trig->ops = &VAR_3;
 FUNC_8(&VAR_5->completion);

 VAR_6 = FUNC_9(VAR_5->spi->irq,
     VAR_2,
     VAR_1,
     VAR_4->name,
     VAR_5);
 if (VAR_6)
  goto error_free_trig;

 if (!VAR_5->irq_dis) {
  VAR_5->irq_dis = 1;
  FUNC_0(VAR_5->spi->irq);
 }
 VAR_5->trig->dev.parent = &VAR_5->spi->dev;
 FUNC_7(VAR_5->trig, VAR_5);

 VAR_6 = FUNC_6(VAR_5->trig);
 if (VAR_6)
  goto error_free_irq;


 VAR_4->trig = FUNC_5(VAR_5->trig);

 return 0;

error_free_irq:
 FUNC_1(VAR_5->spi->irq, VAR_5);
error_free_trig:
 FUNC_4(VAR_5->trig);
error_ret:
 return VAR_6;
}
