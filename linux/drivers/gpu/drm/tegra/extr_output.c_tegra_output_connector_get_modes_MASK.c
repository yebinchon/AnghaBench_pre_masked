
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_output {int cec; scalar_t__ ddc; scalar_t__ edid; TYPE_2__* panel; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* get_modes ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct edid*) ;
 struct tegra_output* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,scalar_t__) ;
 int FUNC_5 (struct edid*) ;
 struct edid* FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(struct drm_connector *VAR_1)
{
 struct tegra_output *VAR_2 = FUNC_1(VAR_1);
 struct edid *VAR_3 = ((void*)0);
 int VAR_4 = 0;





 if (VAR_2->panel) {
  VAR_4 = VAR_2->panel->funcs->get_modes(VAR_2->panel);
  if (VAR_4 > 0)
   return VAR_4;
 }

 if (VAR_2->edid)
  VAR_3 = FUNC_6(VAR_2->edid, sizeof(*VAR_3), VAR_0);
 else if (VAR_2->ddc)
  VAR_3 = FUNC_4(VAR_1, VAR_2->ddc);

 FUNC_0(VAR_2->cec, VAR_3);
 FUNC_3(VAR_1, VAR_3);

 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  FUNC_5(VAR_3);
 }

 return VAR_4;
}
