
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_output {TYPE_1__* ddc; int hpd_irq; scalar_t__ hpd_gpio; scalar_t__ cec; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct tegra_output*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct tegra_output *VAR_0)
{
 if (VAR_0->cec)
  FUNC_0(VAR_0->cec);

 if (VAR_0->hpd_gpio)
  FUNC_1(VAR_0->hpd_irq, VAR_0);

 if (VAR_0->ddc)
  FUNC_2(&VAR_0->ddc->dev);
}
