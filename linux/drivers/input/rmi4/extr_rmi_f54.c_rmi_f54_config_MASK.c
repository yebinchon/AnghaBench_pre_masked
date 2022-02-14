
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_function {int irq_mask; TYPE_1__* rmi_dev; } ;
struct rmi_driver {int (* clear_irq_bits ) (TYPE_1__*,int ) ;} ;
struct TYPE_2__ {struct rmi_driver* driver; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(struct rmi_function *VAR_0)
{
 struct rmi_driver *VAR_1 = VAR_0->rmi_dev->driver;

 VAR_1->clear_irq_bits(VAR_0->rmi_dev, VAR_0->irq_mask);

 return 0;
}
