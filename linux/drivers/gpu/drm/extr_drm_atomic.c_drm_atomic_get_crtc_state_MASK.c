
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_crtc_state {struct drm_atomic_state* state; } ;
struct TYPE_6__ {int id; } ;
struct drm_crtc {int name; TYPE_3__ base; int state; TYPE_1__* funcs; int mutex; } ;
struct drm_atomic_state {TYPE_2__* crtcs; int acquire_ctx; } ;
struct TYPE_5__ {struct drm_crtc* ptr; struct drm_crtc_state* new_state; int old_state; struct drm_crtc_state* state; } ;
struct TYPE_4__ {struct drm_crtc_state* (* atomic_duplicate_state ) (struct drm_crtc*) ;} ;


 int FUNC_0 (char*,int ,int ,struct drm_crtc_state*,struct drm_atomic_state*) ;
 int VAR_0 ;
 struct drm_crtc_state* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct drm_crtc_state* FUNC_3 (struct drm_atomic_state*,struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *,int ) ;
 struct drm_crtc_state* FUNC_6 (struct drm_crtc*) ;

struct drm_crtc_state *
FUNC_7(struct drm_atomic_state *VAR_1,
     struct drm_crtc *VAR_2)
{
 int VAR_3, VAR_4 = FUNC_4(VAR_2);
 struct drm_crtc_state *VAR_5;

 FUNC_2(!VAR_1->acquire_ctx);

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3 = FUNC_5(&VAR_2->mutex, VAR_1->acquire_ctx);
 if (VAR_3)
  return FUNC_1(VAR_3);

 VAR_5 = VAR_2->funcs->atomic_duplicate_state(VAR_2);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_1->crtcs[VAR_4].state = VAR_5;
 VAR_1->crtcs[VAR_4].old_state = VAR_2->state;
 VAR_1->crtcs[VAR_4].new_state = VAR_5;
 VAR_1->crtcs[VAR_4].ptr = VAR_2;
 VAR_5->state = VAR_1;

 FUNC_0("Added [CRTC:%d:%s] %p state to %p\n",
    VAR_2->base.id, VAR_2->name, VAR_5, VAR_1);

 return VAR_5;
}
