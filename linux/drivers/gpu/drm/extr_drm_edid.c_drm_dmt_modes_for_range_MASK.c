
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct detailed_timing {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 scalar_t__ FUNC_3 (int *,struct edid*,struct detailed_timing*) ;
 scalar_t__ FUNC_4 (struct drm_connector*,int *) ;

__attribute__((used)) static int
FUNC_5(struct drm_connector *VAR_1, struct edid *VAR_2,
   struct detailed_timing *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct drm_display_mode *VAR_6;
 struct drm_device *VAR_7 = VAR_1->dev;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (FUNC_3(VAR_0 + VAR_4, VAR_2, VAR_3) &&
      FUNC_4(VAR_1, VAR_0 + VAR_4)) {
   VAR_6 = FUNC_1(VAR_7, &VAR_0[VAR_4]);
   if (VAR_6) {
    FUNC_2(VAR_1, VAR_6);
    VAR_5++;
   }
  }
 }

 return VAR_5;
}
