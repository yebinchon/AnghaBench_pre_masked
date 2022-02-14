
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_lptim_trigger {TYPE_2__* dev; int trg; } ;
struct TYPE_4__ {int parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct TYPE_5__ {int parent; } ;


 int VAR_0 ;
 struct iio_trigger* FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,struct iio_trigger*) ;
 int FUNC_2 (struct iio_trigger*,struct stm32_lptim_trigger*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct stm32_lptim_trigger *VAR_2)
{
 struct iio_trigger *VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev, "%s", VAR_2->trg);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev.parent = VAR_2->dev->parent;
 VAR_3->ops = &VAR_1;
 FUNC_2(VAR_3, VAR_2);

 return FUNC_1(VAR_2->dev, VAR_3);
}
