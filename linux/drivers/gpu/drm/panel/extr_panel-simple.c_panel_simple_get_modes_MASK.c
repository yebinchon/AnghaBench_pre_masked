
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_simple {scalar_t__ ddc; } ;
struct edid {int dummy; } ;
struct drm_panel {int connector; } ;


 scalar_t__ FUNC_0 (int ,struct edid*) ;
 int FUNC_1 (int ,struct edid*) ;
 struct edid* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct edid*) ;
 scalar_t__ FUNC_4 (struct panel_simple*) ;
 struct panel_simple* FUNC_5 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_0)
{
 struct panel_simple *VAR_1 = FUNC_5(VAR_0);
 int VAR_2 = 0;


 if (VAR_1->ddc) {
  struct edid *VAR_3 = FUNC_2(VAR_0->connector, VAR_1->ddc);
  FUNC_1(VAR_0->connector, VAR_3);
  if (VAR_3) {
   VAR_2 += FUNC_0(VAR_0->connector, VAR_3);
   FUNC_3(VAR_3);
  }
 }


 VAR_2 += FUNC_4(VAR_1);

 return VAR_2;
}
