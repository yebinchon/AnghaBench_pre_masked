
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* dr; void* edge_sel; void* gdir; void* imr; void* icr2; void* icr1; } ;
struct mxc_gpio_port {scalar_t__ base; TYPE_1__ gpio_saved_reg; int power_off; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mxc_gpio_port *VAR_6)
{
 if (!VAR_6->power_off)
  return;

 VAR_6->gpio_saved_reg.icr1 = FUNC_0(VAR_6->base + VAR_3);
 VAR_6->gpio_saved_reg.icr2 = FUNC_0(VAR_6->base + VAR_4);
 VAR_6->gpio_saved_reg.imr = FUNC_0(VAR_6->base + VAR_5);
 VAR_6->gpio_saved_reg.gdir = FUNC_0(VAR_6->base + VAR_2);
 VAR_6->gpio_saved_reg.edge_sel = FUNC_0(VAR_6->base + VAR_1);
 VAR_6->gpio_saved_reg.dr = FUNC_0(VAR_6->base + VAR_0);
}
