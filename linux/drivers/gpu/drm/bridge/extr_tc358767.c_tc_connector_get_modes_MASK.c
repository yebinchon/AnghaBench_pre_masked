
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ddc; } ;
struct tc_data {struct edid* edid; TYPE_1__ aux; int panel; int dev; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 struct tc_data* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct edid*) ;
 int FUNC_7 (struct tc_data*) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_0)
{
 struct tc_data *VAR_1 = FUNC_0(VAR_0);
 struct edid *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_7(VAR_1);
 if (VAR_4 < 0) {
  FUNC_1(VAR_1->dev, "failed to read display props: %d\n", VAR_4);
  return 0;
 }

 VAR_3 = FUNC_5(VAR_1->panel);
 if (VAR_3 > 0)
  return VAR_3;

 VAR_2 = FUNC_4(VAR_0, &VAR_1->aux.ddc);

 FUNC_6(VAR_1->edid);
 VAR_1->edid = VAR_2;
 if (!VAR_2)
  return 0;

 FUNC_3(VAR_0, VAR_2);
 VAR_3 = FUNC_2(VAR_0, VAR_2);

 return VAR_3;
}
