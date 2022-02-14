
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct adv7511 {int dummy; } ;


 int FUNC_0 (struct adv7511*,struct drm_display_mode const*,struct drm_display_mode const*) ;
 struct adv7511* FUNC_1 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_0,
        const struct drm_display_mode *VAR_1,
        const struct drm_display_mode *VAR_2)
{
 struct adv7511 *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_1, VAR_2);
}
