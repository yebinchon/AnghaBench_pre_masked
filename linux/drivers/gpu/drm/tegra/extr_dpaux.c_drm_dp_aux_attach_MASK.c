
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int polled; } ;
struct tegra_output {TYPE_1__ connector; } ;
struct tegra_dpaux {int irq; int vdd; struct tegra_output* output; } ;
struct drm_dp_aux {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_dp_aux*) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 struct tegra_dpaux* FUNC_5 (struct drm_dp_aux*) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct drm_dp_aux *VAR_4, struct tegra_output *VAR_5)
{
 struct tegra_dpaux *VAR_6 = FUNC_5(VAR_4);
 unsigned long VAR_7;
 int VAR_8;

 VAR_5->connector.polled = VAR_0;
 VAR_6->output = VAR_5;

 VAR_8 = FUNC_3(VAR_6->vdd);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_3 + FUNC_2(250);

 while (FUNC_4(VAR_3, VAR_7)) {
  enum drm_connector_status VAR_9;

  VAR_9 = FUNC_0(VAR_4);
  if (VAR_9 == VAR_2) {
   FUNC_1(VAR_6->irq);
   return 0;
  }

  FUNC_6(1000, 2000);
 }

 return -VAR_1;
}
