
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimode {int r; int h; int w; } ;
struct edid {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct detailed_timing {int dummy; } ;


 int FUNC_0 (struct minimode*) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct drm_device*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 int FUNC_4 (struct drm_connector*,struct drm_display_mode*) ;
 struct minimode* VAR_0 ;
 int FUNC_5 (struct drm_display_mode*,struct edid*,struct detailed_timing*) ;
 int FUNC_6 (struct drm_connector*,struct drm_display_mode*) ;

__attribute__((used)) static int
FUNC_7(struct drm_connector *VAR_1, struct edid *VAR_2,
   struct detailed_timing *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct drm_display_mode *VAR_6;
 struct drm_device *VAR_7 = VAR_1->dev;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  const struct minimode *VAR_8 = &VAR_0[VAR_4];
  VAR_6 = FUNC_1(VAR_7, VAR_8->w, VAR_8->h, VAR_8->r, 0, 0);
  if (!VAR_6)
   return VAR_5;

  FUNC_3(VAR_6);
  if (!FUNC_5(VAR_6, VAR_2, VAR_3) ||
      !FUNC_6(VAR_1, VAR_6)) {
   FUNC_2(VAR_7, VAR_6);
   continue;
  }

  FUNC_4(VAR_1, VAR_6);
  VAR_5++;
 }

 return VAR_5;
}
