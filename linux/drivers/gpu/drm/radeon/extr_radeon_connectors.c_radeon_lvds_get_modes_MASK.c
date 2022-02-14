
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_display_mode {int height_mm; int width_mm; } ;
struct TYPE_2__ {int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int FUNC_0 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_display_mode* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_0)
{
 struct drm_encoder *VAR_1;
 int VAR_2 = 0;
 struct drm_display_mode *VAR_3;

 FUNC_3(VAR_0);
 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 > 0) {
  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1) {
   FUNC_5(VAR_1, VAR_0);

   FUNC_1(VAR_1, VAR_0);
  }
  return VAR_2;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return 0;


 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3) {
  VAR_2 = 1;
  FUNC_0(VAR_0, VAR_3);

  VAR_0->display_info.width_mm = VAR_3->width_mm;
  VAR_0->display_info.height_mm = VAR_3->height_mm;

  FUNC_1(VAR_1, VAR_0);
 }

 return VAR_2;
}
