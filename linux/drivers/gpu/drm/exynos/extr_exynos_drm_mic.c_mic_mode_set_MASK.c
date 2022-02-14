
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exynos_mic {int i80_mode; int vm; } ;
struct drm_display_mode {int dummy; } ;
struct drm_bridge {TYPE_1__* encoder; struct exynos_mic* driver_private; } ;
struct TYPE_4__ {int i80_mode; } ;
struct TYPE_3__ {int crtc; } ;


 int FUNC_0 (struct drm_display_mode const*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_1,
    const struct drm_display_mode *VAR_2,
    const struct drm_display_mode *VAR_3)
{
 struct exynos_mic *VAR_4 = VAR_1->driver_private;

 FUNC_1(&VAR_0);
 FUNC_0(VAR_2, &VAR_4->vm);
 VAR_4->i80_mode = FUNC_3(VAR_1->encoder->crtc)->i80_mode;
 FUNC_2(&VAR_0);
}
