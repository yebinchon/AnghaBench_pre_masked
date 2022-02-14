
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc_state {int dummy; } ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {TYPE_1__ mutex; } ;
struct drm_crtc {struct drm_crtc_state* state; TYPE_2__ mutex; } ;
struct drm_atomic_state {int acquire_ctx; } ;


 int VAR_0 ;
 struct drm_crtc_state* FUNC_0 (int) ;
 struct drm_crtc_state* FUNC_1 (struct drm_atomic_state*,struct drm_crtc*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct drm_crtc_state *
FUNC_4(struct drm_atomic_state *VAR_1, struct drm_crtc *VAR_2)
{
 struct drm_crtc_state *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_3(&VAR_2->mutex.mutex.base);
 } else {
  int VAR_4 = FUNC_2(&VAR_2->mutex, VAR_1->acquire_ctx);

  if (VAR_4 != 0 && VAR_4 != -VAR_0)
   return FUNC_0(VAR_4);

  VAR_3 = VAR_2->state;
 }

 return VAR_3;
}
