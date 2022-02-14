
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {scalar_t__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_display_mode const*,struct drm_display_mode const*,int) ;

__attribute__((used)) static bool FUNC_1(const struct drm_display_mode *VAR_3,
         const struct drm_display_mode *VAR_4)
{
 return FUNC_0(VAR_3, VAR_4,
         VAR_2 |
         VAR_1 |
         VAR_0) &&
  VAR_3->clock < VAR_4->clock;
}
