
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct panel_connector {TYPE_1__* mod; } ;
struct drm_display_mode {int type; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct display_timings {int num_timings; int native_mode; } ;
struct TYPE_2__ {struct display_timings* timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct videomode*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct panel_connector* FUNC_4 (struct drm_connector*) ;
 scalar_t__ FUNC_5 (struct display_timings*,struct videomode*,int) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct panel_connector *VAR_4 = FUNC_4(VAR_2);
 struct display_timings *VAR_5 = VAR_4->mod->timings;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_timings; VAR_6++) {
  struct drm_display_mode *VAR_7 = FUNC_1(VAR_3);
  struct videomode VAR_8;

  if (FUNC_5(VAR_5, &VAR_8, VAR_6))
   break;

  FUNC_0(&VAR_8, VAR_7);

  VAR_7->type = VAR_0;

  if (VAR_5->native_mode == VAR_6)
   VAR_7->type |= VAR_1;

  FUNC_3(VAR_7);
  FUNC_2(VAR_2, VAR_7);
 }

 return VAR_6;
}
