
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcb_device {struct mcb_bus* bus; } ;
struct mcb_bus {int (* get_irq ) (struct mcb_device*) ;} ;


 int FUNC_0 (struct mcb_device*) ;
 int FUNC_1 (struct mcb_device*) ;

int FUNC_2(struct mcb_device *VAR_0)
{
 struct mcb_bus *VAR_1 = VAR_0->bus;

 if (VAR_1->get_irq)
  return VAR_1->get_irq(VAR_0);

 return FUNC_0(VAR_0);
}
