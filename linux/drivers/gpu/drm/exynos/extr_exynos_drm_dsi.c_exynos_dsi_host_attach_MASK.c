
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mipi_dsi_host {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct mipi_dsi_device {int mode_flags; int format; int lanes; TYPE_2__ dev; } ;
struct TYPE_8__ {int status; } ;
struct drm_encoder {int * bridge; struct drm_device* dev; } ;
struct exynos_dsi {int mode_flags; int format; int lanes; TYPE_4__ connector; int * panel; int dev; struct drm_bridge* out_bridge; struct drm_encoder encoder; } ;
struct TYPE_5__ {scalar_t__ poll_enabled; int mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_7__ {int i80_mode; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_encoder*,struct drm_bridge*,int *) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 TYPE_3__* FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct exynos_dsi*,TYPE_2__*) ;
 struct exynos_dsi* FUNC_9 (struct mipi_dsi_host*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct drm_bridge* FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct mipi_dsi_host *VAR_3,
      struct mipi_dsi_device *VAR_4)
{
 struct exynos_dsi *VAR_5 = FUNC_9(VAR_3);
 struct drm_encoder *VAR_6 = &VAR_5->encoder;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct drm_bridge *VAR_8;

 VAR_8 = FUNC_12(VAR_4->dev.of_node);
 if (VAR_8) {
  FUNC_2(VAR_6, VAR_8, ((void*)0));
  VAR_5->out_bridge = VAR_8;
  VAR_6->bridge = ((void*)0);
 } else {
  int VAR_9 = FUNC_7(VAR_6);

  if (VAR_9) {
   FUNC_0(VAR_5->dev,
          "failed to create connector ret = %d\n",
          VAR_9);
   FUNC_3(VAR_6);
   return VAR_9;
  }

  VAR_5->panel = FUNC_13(VAR_4->dev.of_node);
  if (FUNC_1(VAR_5->panel)) {
   VAR_5->panel = ((void*)0);
  } else {
   FUNC_5(VAR_5->panel, &VAR_5->connector);
   VAR_5->connector.status = VAR_2;
  }
 }







 if (!(VAR_4->mode_flags & VAR_1)) {
  int VAR_10 = FUNC_8(VAR_5, &VAR_4->dev);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_10(&VAR_7->mode_config.mutex);

 VAR_5->lanes = VAR_4->lanes;
 VAR_5->format = VAR_4->format;
 VAR_5->mode_flags = VAR_4->mode_flags;
 FUNC_6(VAR_7, VAR_0)->i80_mode =
   !(VAR_5->mode_flags & VAR_1);

 FUNC_11(&VAR_7->mode_config.mutex);

 if (VAR_7->mode_config.poll_enabled)
  FUNC_4(VAR_7);

 return 0;
}
