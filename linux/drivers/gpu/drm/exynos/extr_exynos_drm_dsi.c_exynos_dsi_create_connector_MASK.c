
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {TYPE_1__* funcs; int status; int polled; } ;
struct exynos_dsi {int dev; struct drm_connector connector; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int fb_helper; int registered; } ;
struct TYPE_2__ {int (* reset ) (struct drm_connector*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (int ,struct drm_connector*) ;
 struct exynos_dsi* FUNC_6 (struct drm_encoder*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_8(struct drm_encoder *VAR_5)
{
 struct exynos_dsi *VAR_6 = FUNC_6(VAR_5);
 struct drm_connector *VAR_7 = &VAR_6->connector;
 struct drm_device *VAR_8 = VAR_5->dev;
 int VAR_9;

 VAR_7->polled = VAR_0;

 VAR_9 = FUNC_3(VAR_8, VAR_7, &VAR_3,
     VAR_1);
 if (VAR_9) {
  FUNC_0(VAR_6->dev,
         "Failed to initialize connector with drm\n");
  return VAR_9;
 }

 VAR_7->status = VAR_2;
 FUNC_2(VAR_7, &VAR_4);
 FUNC_1(VAR_7, VAR_5);
 if (!VAR_8->registered)
  return 0;

 VAR_7->funcs->reset(VAR_7);
 FUNC_5(VAR_8->fb_helper, VAR_7);
 FUNC_4(VAR_7);
 return 0;
}
