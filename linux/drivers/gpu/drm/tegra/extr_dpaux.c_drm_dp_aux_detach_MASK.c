
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dpaux {int * output; int vdd; int irq; } ;
struct drm_dp_aux {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_dp_aux*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 struct tegra_dpaux* FUNC_5 (struct drm_dp_aux*) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct drm_dp_aux *VAR_3)
{
 struct tegra_dpaux *VAR_4 = FUNC_5(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_0(VAR_4->irq);

 VAR_6 = FUNC_3(VAR_4->vdd);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_2 + FUNC_2(250);

 while (FUNC_4(VAR_2, VAR_5)) {
  enum drm_connector_status VAR_7;

  VAR_7 = FUNC_1(VAR_3);
  if (VAR_7 == VAR_1) {
   VAR_4->output = ((void*)0);
   return 0;
  }

  FUNC_6(1000, 2000);
 }

 return -VAR_0;
}
