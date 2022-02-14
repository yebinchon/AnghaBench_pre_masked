
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct truly_nt35597 {int prepared; int dev; struct nt35597_config* config; TYPE_1__** dsi; } ;
struct nt35597_config {int num_on_cmds; struct cmd_set* panel_on_cmds; } ;
struct drm_panel {int dummy; } ;
struct cmd_set {int commands; int size; } ;
struct TYPE_2__ {int mode_flags; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct truly_nt35597* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (struct truly_nt35597*) ;
 int FUNC_4 (struct drm_panel*,int ) ;
 int FUNC_5 (struct drm_panel*,int ,int ) ;
 scalar_t__ FUNC_6 (struct truly_nt35597*) ;

__attribute__((used)) static int FUNC_7(struct drm_panel *VAR_3)
{
 struct truly_nt35597 *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;
 int VAR_6;
 const struct cmd_set *VAR_7;
 const struct nt35597_config *VAR_8;
 u32 VAR_9;

 if (VAR_4->prepared)
  return 0;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->dsi[0]->mode_flags |= VAR_2;
 VAR_4->dsi[1]->mode_flags |= VAR_2;

 VAR_8 = VAR_4->config;
 VAR_7 = VAR_8->panel_on_cmds;
 VAR_9 = VAR_8->num_on_cmds;

 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  VAR_5 = FUNC_5(VAR_3,
    VAR_7[VAR_6].size,
     VAR_7[VAR_6].commands);
  if (VAR_5 < 0) {
   FUNC_0(VAR_4->dev,
    "cmd set tx failed i = %d ret = %d\n",
     VAR_6, VAR_5);
   goto power_off;
  }
 }

 VAR_5 = FUNC_4(VAR_3, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev,
   "exit_sleep_mode cmd failed ret = %d\n",
   VAR_5);
  goto power_off;
 }


 FUNC_1(120);

 VAR_5 = FUNC_4(VAR_3, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev,
   "set_display_on cmd failed ret = %d\n", VAR_5);
  goto power_off;
 }


 FUNC_1(120);

 VAR_4->prepared = 1;

 return 0;

power_off:
 if (FUNC_6(VAR_4))
  FUNC_0(VAR_4->dev, "power_off failed\n");
 return VAR_5;
}
