
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {scalar_t__ clock; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct drm_display_mode *VAR_0,
      const struct drm_display_mode *VAR_1)
{




 if (VAR_0->clock && VAR_1->clock)
  return FUNC_0(VAR_0->clock) == FUNC_0(VAR_1->clock);
 else
  return VAR_0->clock == VAR_1->clock;
}
