
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwapb_gpio_port {unsigned int idx; } ;
struct dwapb_gpio {int nr_ports; struct dwapb_gpio_port* ports; } ;



__attribute__((used)) static struct dwapb_gpio_port *FUNC_0(struct dwapb_gpio *VAR_0, unsigned int VAR_1)
{
 struct dwapb_gpio_port *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_ports; VAR_3++) {
  VAR_2 = &VAR_0->ports[VAR_3];
  if (VAR_2->idx == VAR_1 / 32)
   return VAR_2;
 }

 return ((void*)0);
}
