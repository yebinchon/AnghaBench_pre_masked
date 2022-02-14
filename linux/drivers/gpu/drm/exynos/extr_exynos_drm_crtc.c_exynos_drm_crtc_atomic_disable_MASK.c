
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct exynos_drm_crtc {TYPE_3__* ops; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* state; TYPE_1__* dev; } ;
struct TYPE_6__ {int (* disable ) (struct exynos_drm_crtc*) ;} ;
struct TYPE_5__ {int * event; int active; } ;
struct TYPE_4__ {int event_lock; } ;


 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct exynos_drm_crtc*) ;
 struct exynos_drm_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct exynos_drm_crtc *VAR_2 = FUNC_5(VAR_0);

 FUNC_1(VAR_0);

 if (VAR_2->ops->disable)
  VAR_2->ops->disable(VAR_2);

 if (VAR_0->state->event && !VAR_0->state->active) {
  FUNC_2(&VAR_0->dev->event_lock);
  FUNC_0(VAR_0, VAR_0->state->event);
  FUNC_3(&VAR_0->dev->event_lock);

  VAR_0->state->event = ((void*)0);
 }
}
