
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_display_mode*) ;
 struct drm_display_mode* VAR_0 ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,struct drm_display_mode const*) ;
 int FUNC_2 (struct drm_display_mode const*) ;
 int FUNC_3 (struct drm_display_mode const*) ;

struct drm_display_mode *FUNC_4(struct drm_device *VAR_1,
        int VAR_2, int VAR_3, int VAR_4,
        bool VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  const struct drm_display_mode *VAR_7 = &VAR_0[VAR_6];
  if (VAR_2 != VAR_7->hdisplay)
   continue;
  if (VAR_3 != VAR_7->vdisplay)
   continue;
  if (VAR_4 != FUNC_2(VAR_7))
   continue;
  if (VAR_5 != FUNC_3(VAR_7))
   continue;

  return FUNC_1(VAR_1, VAR_7);
 }

 return ((void*)0);
}
