
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rmi_function {int irq_mask; TYPE_2__* rmi_dev; int dev; } ;
struct f03_data {int serio_registered; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* set_irq_bits ) (TYPE_2__*,int ) ;} ;


 struct f03_data* FUNC_0 (int *) ;
 int FUNC_1 (struct f03_data*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct rmi_function *VAR_0)
{
 struct f03_data *VAR_1 = FUNC_0(&VAR_0->dev);
 int VAR_2;

 if (!VAR_1->serio_registered) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_1->serio_registered = 1;
 } else {




  VAR_0->rmi_dev->driver->set_irq_bits(VAR_0->rmi_dev, VAR_0->irq_mask);
 }

 return 0;
}
