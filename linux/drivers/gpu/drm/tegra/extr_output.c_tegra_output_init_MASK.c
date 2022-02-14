
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_output {int hpd_irq; scalar_t__ hpd_gpio; int connector; scalar_t__ panel; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct drm_device *VAR_0, struct tegra_output *VAR_1)
{
 int VAR_2;

 if (VAR_1->panel) {
  VAR_2 = FUNC_0(VAR_1->panel, &VAR_1->connector);
  if (VAR_2 < 0)
   return VAR_2;
 }





 if (VAR_1->hpd_gpio)
  FUNC_1(VAR_1->hpd_irq);

 return 0;
}
