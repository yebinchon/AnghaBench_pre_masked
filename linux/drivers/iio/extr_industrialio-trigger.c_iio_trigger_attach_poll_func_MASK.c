
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ parent; } ;
struct iio_trigger {int attached_own_device; TYPE_3__ dev; TYPE_1__* ops; int name; int pool; } ;
struct iio_poll_func {scalar_t__ irq; TYPE_4__* indio_dev; int name; int type; int thread; int h; } ;
struct TYPE_6__ {scalar_t__ parent; } ;
struct TYPE_8__ {int driver_module; TYPE_2__ dev; } ;
struct TYPE_5__ {int (* set_trigger_state ) (struct iio_trigger*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,struct iio_poll_func*) ;
 scalar_t__ FUNC_3 (struct iio_trigger*) ;
 int FUNC_4 (struct iio_trigger*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (scalar_t__,int ,int ,int ,int ,struct iio_poll_func*) ;
 int FUNC_8 (struct iio_trigger*,int) ;

__attribute__((used)) static int FUNC_9(struct iio_trigger *VAR_1,
     struct iio_poll_func *VAR_2)
{
 int VAR_3 = 0;
 bool VAR_4
  = FUNC_1(VAR_1->pool, VAR_0);


 FUNC_0(VAR_2->indio_dev->driver_module);


 VAR_2->irq = FUNC_3(VAR_1);
 if (VAR_2->irq < 0) {
  FUNC_6("Could not find an available irq for trigger %s, CONFIG_IIO_CONSUMERS_PER_TRIGGER=%d limit might be exceeded\n",
   VAR_1->name, VAR_0);
  goto out_put_module;
 }


 VAR_3 = FUNC_7(VAR_2->irq, VAR_2->h, VAR_2->thread,
       VAR_2->type, VAR_2->name,
       VAR_2);
 if (VAR_3 < 0)
  goto out_put_irq;


 if (VAR_1->ops && VAR_1->ops->set_trigger_state && VAR_4) {
  VAR_3 = VAR_1->ops->set_trigger_state(VAR_1, 1);
  if (VAR_3 < 0)
   goto out_free_irq;
 }






 if (VAR_2->indio_dev->dev.parent == VAR_1->dev.parent)
  VAR_1->attached_own_device = 1;

 return VAR_3;

out_free_irq:
 FUNC_2(VAR_2->irq, VAR_2);
out_put_irq:
 FUNC_4(VAR_1, VAR_2->irq);
out_put_module:
 FUNC_5(VAR_2->indio_dev->driver_module);
 return VAR_3;
}
