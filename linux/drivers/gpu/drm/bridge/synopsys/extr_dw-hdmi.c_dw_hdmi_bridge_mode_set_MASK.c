
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int mutex; int previous_mode; } ;
struct drm_display_mode {int dummy; } ;
struct drm_bridge {struct dw_hdmi* driver_private; } ;


 int FUNC_0 (int *,struct drm_display_mode const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0,
        const struct drm_display_mode *VAR_1,
        const struct drm_display_mode *VAR_2)
{
 struct dw_hdmi *VAR_3 = VAR_0->driver_private;

 FUNC_1(&VAR_3->mutex);


 FUNC_0(&VAR_3->previous_mode, VAR_2, sizeof(VAR_3->previous_mode));

 FUNC_2(&VAR_3->mutex);
}
