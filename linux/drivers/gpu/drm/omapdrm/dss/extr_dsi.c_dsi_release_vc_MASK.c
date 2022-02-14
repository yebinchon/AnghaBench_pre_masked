
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {int dummy; } ;
struct dsi_data {TYPE_1__* vc; } ;
struct TYPE_2__ {scalar_t__ vc_id; struct omap_dss_device* dssdev; } ;


 struct dsi_data* FUNC_0 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_1(struct omap_dss_device *VAR_0, int VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_0(VAR_0);

 if ((VAR_1 >= 0 && VAR_1 <= 3) &&
  VAR_2->vc[VAR_1].dssdev == VAR_0) {
  VAR_2->vc[VAR_1].dssdev = ((void*)0);
  VAR_2->vc[VAR_1].vc_id = 0;
 }
}
