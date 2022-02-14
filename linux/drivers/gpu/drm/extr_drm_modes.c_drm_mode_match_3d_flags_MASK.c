
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct drm_display_mode *VAR_1,
        const struct drm_display_mode *VAR_2)
{
 return (VAR_1->flags & VAR_0) ==
  (VAR_2->flags & VAR_0);
}
