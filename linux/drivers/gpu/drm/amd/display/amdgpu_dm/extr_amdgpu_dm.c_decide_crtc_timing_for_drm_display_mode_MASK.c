
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {scalar_t__ clock; scalar_t__ htotal; scalar_t__ vtotal; } ;


 int FUNC_0 (struct drm_display_mode const*,struct drm_display_mode*) ;

__attribute__((used)) static void
FUNC_1(struct drm_display_mode *VAR_0,
     const struct drm_display_mode *VAR_1,
     bool VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_1, VAR_0);
 } else if (VAR_1->clock == VAR_0->clock &&
   VAR_1->htotal == VAR_0->htotal &&
   VAR_1->vtotal == VAR_0->vtotal) {
  FUNC_0(VAR_1, VAR_0);
 } else {

 }
}
