
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipu_soc {int dummy; } ;
struct ipu_crtc {int di; int dc; TYPE_1__* dev; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_3__* dev; TYPE_2__* state; } ;
struct TYPE_6__ {int event_lock; } ;
struct TYPE_5__ {int * event; int active; } ;
struct TYPE_4__ {int parent; } ;


 struct ipu_soc* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct ipu_crtc*,struct drm_crtc_state*) ;
 int FUNC_4 (struct ipu_soc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ipu_soc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct ipu_crtc* FUNC_10 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct ipu_crtc *VAR_2 = FUNC_10(VAR_0);
 struct ipu_soc *VAR_3 = FUNC_0(VAR_2->dev->parent);

 FUNC_5(VAR_2->dc);
 FUNC_6(VAR_2->di);





 FUNC_3(VAR_2, VAR_1);
 FUNC_4(VAR_3);
 FUNC_7(VAR_3);

 FUNC_2(VAR_0);

 FUNC_8(&VAR_0->dev->event_lock);
 if (VAR_0->state->event && !VAR_0->state->active) {
  FUNC_1(VAR_0, VAR_0->state->event);
  VAR_0->state->event = ((void*)0);
 }
 FUNC_9(&VAR_0->dev->event_lock);
}
