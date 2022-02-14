
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct tc_data {struct drm_display_mode mode; } ;
struct drm_bridge {int dummy; } ;


 struct tc_data* FUNC_0 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_1(struct drm_bridge *VAR_0,
          const struct drm_display_mode *VAR_1,
          const struct drm_display_mode *VAR_2)
{
 struct tc_data *VAR_3 = FUNC_0(VAR_0);

 VAR_3->mode = *VAR_1;
}
