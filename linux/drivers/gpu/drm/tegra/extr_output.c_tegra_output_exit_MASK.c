
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_output {scalar_t__ panel; int hpd_irq; scalar_t__ hpd_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct tegra_output *VAR_0)
{




 if (VAR_0->hpd_gpio)
  FUNC_0(VAR_0->hpd_irq);

 if (VAR_0->panel)
  FUNC_1(VAR_0->panel);
}
