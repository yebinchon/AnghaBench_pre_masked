
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int dummy; } ;
struct TYPE_6__ {int status; } ;
struct TYPE_10__ {struct drm_device* dev; } ;
struct exynos_dsi {TYPE_4__* out_bridge; TYPE_1__ connector; int * panel; TYPE_5__ encoder; } ;
struct TYPE_8__ {scalar_t__ poll_enabled; int mutex; } ;
struct drm_device {TYPE_3__ mode_config; } ;
struct TYPE_9__ {TYPE_2__* funcs; } ;
struct TYPE_7__ {int (* detach ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct exynos_dsi*) ;
 struct exynos_dsi* FUNC_4 (struct mipi_dsi_host*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(struct mipi_dsi_host *VAR_1,
      struct mipi_dsi_device *VAR_2)
{
 struct exynos_dsi *VAR_3 = FUNC_4(VAR_1);
 struct drm_device *VAR_4 = VAR_3->encoder.dev;

 if (VAR_3->panel) {
  FUNC_5(&VAR_4->mode_config.mutex);
  FUNC_2(&VAR_3->encoder);
  FUNC_1(VAR_3->panel);
  VAR_3->panel = ((void*)0);
  VAR_3->connector.status = VAR_0;
  FUNC_6(&VAR_4->mode_config.mutex);
 } else {
  if (VAR_3->out_bridge->funcs->detach)
   VAR_3->out_bridge->funcs->detach(VAR_3->out_bridge);
  VAR_3->out_bridge = ((void*)0);
 }

 if (VAR_4->mode_config.poll_enabled)
  FUNC_0(VAR_4);

 FUNC_3(VAR_3);

 return 0;
}
