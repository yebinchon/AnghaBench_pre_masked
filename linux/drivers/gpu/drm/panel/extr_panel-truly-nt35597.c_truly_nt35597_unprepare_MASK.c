
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct truly_nt35597 {int prepared; int dev; TYPE_1__** dsi; } ;
struct drm_panel {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode_flags; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct truly_nt35597* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (struct drm_panel*,int ) ;
 int FUNC_4 (struct truly_nt35597*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_2)
{
 struct truly_nt35597 *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;

 if (!VAR_3->prepared)
  return 0;

 VAR_3->dsi[0]->mode_flags = 0;
 VAR_3->dsi[1]->mode_flags = 0;

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev,
   "set_display_off cmd failed ret = %d\n",
   VAR_4);
 }


 FUNC_1(120);

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev,
   "enter_sleep cmd failed ret = %d\n", VAR_4);
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_3->dev, "power_off failed ret = %d\n", VAR_4);

 VAR_3->prepared = 0;
 return VAR_4;
}
