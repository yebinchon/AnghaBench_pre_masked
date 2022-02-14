
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned int ngpio; } ;
struct dwapb_gpio_port {struct gpio_chip gc; } ;
struct dwapb_gpio {int * domain; struct dwapb_gpio_port* ports; } ;
typedef unsigned int irq_hw_number_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct dwapb_gpio *VAR_0)
{
 struct dwapb_gpio_port *VAR_1 = &VAR_0->ports[0];
 struct gpio_chip *VAR_2 = &VAR_1->gc;
 unsigned int VAR_3 = VAR_2->ngpio;
 irq_hw_number_t VAR_4;

 if (!VAR_0->domain)
  return;

 for (VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++)
  FUNC_0(FUNC_2(VAR_0->domain, VAR_4));

 FUNC_1(VAR_0->domain);
 VAR_0->domain = ((void*)0);
}
