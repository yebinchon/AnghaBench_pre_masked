
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int possible_crtcs; } ;
struct TYPE_11__ {int dpms; } ;
struct TYPE_9__ {TYPE_2__ encoder; TYPE_4__ connector; int dev; } ;
struct tegra_hdmi {int dev; int vdd; int pll; int hdmi; TYPE_1__ output; } ;
struct host1x_client {int dev; int parent; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 struct drm_device* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (struct drm_device*,TYPE_4__*,int *,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (struct drm_device*,TYPE_2__*,int *,int ,int *) ;
 struct tegra_hdmi* FUNC_8 (struct host1x_client*) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct drm_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct host1x_client *VAR_7)
{
 struct drm_device *VAR_8 = FUNC_1(VAR_7->parent);
 struct tegra_hdmi *VAR_9 = FUNC_8(VAR_7);
 int VAR_10;

 VAR_9->output.dev = VAR_7->dev;

 FUNC_4(VAR_8, &VAR_9->output.connector,
      &VAR_3,
      VAR_0);
 FUNC_3(&VAR_9->output.connector,
     &VAR_4);
 VAR_9->output.connector.dpms = VAR_1;

 FUNC_7(VAR_8, &VAR_9->output.encoder, &VAR_5,
    VAR_2, ((void*)0));
 FUNC_6(&VAR_9->output.encoder,
          &VAR_6);

 FUNC_2(&VAR_9->output.connector,
       &VAR_9->output.encoder);
 FUNC_5(&VAR_9->output.connector);

 VAR_10 = FUNC_10(VAR_8, &VAR_9->output);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7->dev, "failed to initialize output: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_9->output.encoder.possible_crtcs = 0x3;

 VAR_10 = FUNC_9(VAR_9->hdmi);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7->dev, "failed to enable HDMI regulator: %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_9(VAR_9->pll);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "failed to enable PLL regulator: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_9(VAR_9->vdd);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "failed to enable VDD regulator: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
