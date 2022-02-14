
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct drm_display_mode const*,struct drm_display_mode const*) ;
 int FUNC_1 (struct drm_display_mode const*,struct drm_display_mode const*) ;
 int FUNC_2 (struct drm_display_mode const*,struct drm_display_mode const*) ;
 int FUNC_3 (struct drm_display_mode const*,struct drm_display_mode const*) ;
 int FUNC_4 (struct drm_display_mode const*,struct drm_display_mode const*) ;

bool FUNC_5(const struct drm_display_mode *VAR_5,
      const struct drm_display_mode *VAR_6,
      unsigned int VAR_7)
{
 if (!VAR_5 && !VAR_6)
  return 1;

 if (!VAR_5 || !VAR_6)
  return 0;

 if (VAR_7 & VAR_4 &&
     !FUNC_4(VAR_5, VAR_6))
  return 0;

 if (VAR_7 & VAR_2 &&
     !FUNC_2(VAR_5, VAR_6))
  return 0;

 if (VAR_7 & VAR_3 &&
     !FUNC_3(VAR_5, VAR_6))
  return 0;

 if (VAR_7 & VAR_0 &&
     !FUNC_0(VAR_5, VAR_6))
  return 0;

 if (VAR_7 & VAR_1 &&
     !FUNC_1(VAR_5, VAR_6))
  return 0;

 return 1;
}
