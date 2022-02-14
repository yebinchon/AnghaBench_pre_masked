
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sunxi_engine {TYPE_2__* ops; } ;
struct sun4i_crtc {int * event; struct sunxi_engine* engine; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; struct drm_device* dev; } ;
struct TYPE_4__ {int (* atomic_begin ) (struct sunxi_engine*,struct drm_crtc_state*) ;} ;
struct TYPE_3__ {int * event; } ;


 int FUNC_0 (int) ;
 struct sun4i_crtc* FUNC_1 (struct drm_crtc*) ;
 scalar_t__ FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct sunxi_engine*,struct drm_crtc_state*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct sun4i_crtc *VAR_2 = FUNC_1(VAR_0);
 struct drm_device *VAR_3 = VAR_0->dev;
 struct sunxi_engine *VAR_4 = VAR_2->engine;
 unsigned long VAR_5;

 if (VAR_0->state->event) {
  FUNC_0(FUNC_2(VAR_0) != 0);

  FUNC_3(&VAR_3->event_lock, VAR_5);
  VAR_2->event = VAR_0->state->event;
  FUNC_4(&VAR_3->event_lock, VAR_5);
  VAR_0->state->event = ((void*)0);
 }

 if (VAR_4->ops->atomic_begin)
  VAR_4->ops->atomic_begin(VAR_4, VAR_1);
}
