
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3066_hdmi {int previous_mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (int *,struct drm_display_mode*,int) ;
 struct rk3066_hdmi* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_2(struct drm_encoder *VAR_0,
        struct drm_display_mode *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct rk3066_hdmi *VAR_3 = FUNC_1(VAR_0);


 FUNC_0(&VAR_3->previous_mode, VAR_2, sizeof(VAR_3->previous_mode));
}
