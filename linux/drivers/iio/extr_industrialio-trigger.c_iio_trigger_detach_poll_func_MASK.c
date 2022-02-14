
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ parent; } ;
struct iio_trigger {int attached_own_device; TYPE_3__ dev; TYPE_1__* ops; int pool; } ;
struct iio_poll_func {TYPE_4__* indio_dev; int irq; } ;
struct TYPE_6__ {scalar_t__ parent; } ;
struct TYPE_8__ {int driver_module; TYPE_2__ dev; } ;
struct TYPE_5__ {int (* set_trigger_state ) (struct iio_trigger*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct iio_poll_func*) ;
 int FUNC_2 (struct iio_trigger*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iio_trigger*,int) ;

__attribute__((used)) static int FUNC_5(struct iio_trigger *VAR_1,
      struct iio_poll_func *VAR_2)
{
 int VAR_3 = 0;
 bool VAR_4
  = (FUNC_0(VAR_1->pool,
     VAR_0)
     == 1);
 if (VAR_1->ops && VAR_1->ops->set_trigger_state && VAR_4) {
  VAR_3 = VAR_1->ops->set_trigger_state(VAR_1, 0);
  if (VAR_3)
   return VAR_3;
 }
 if (VAR_2->indio_dev->dev.parent == VAR_1->dev.parent)
  VAR_1->attached_own_device = 0;
 FUNC_2(VAR_1, VAR_2->irq);
 FUNC_1(VAR_2->irq, VAR_2);
 FUNC_3(VAR_2->indio_dev->driver_module);

 return VAR_3;
}
