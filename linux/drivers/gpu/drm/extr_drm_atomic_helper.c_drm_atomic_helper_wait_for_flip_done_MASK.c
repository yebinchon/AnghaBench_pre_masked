
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_crtc_commit {int flip_done; } ;
struct TYPE_7__ {int id; } ;
struct drm_crtc {int name; TYPE_3__ base; } ;
struct drm_atomic_state {TYPE_4__* fake_commit; TYPE_2__* crtcs; } ;
struct TYPE_8__ {int flip_done; } ;
struct TYPE_6__ {struct drm_crtc* ptr; struct drm_crtc_commit* commit; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct drm_device *VAR_1,
       struct drm_atomic_state *VAR_2)
{
 struct drm_crtc *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->mode_config.num_crtc; VAR_4++) {
  struct drm_crtc_commit *VAR_5 = VAR_2->crtcs[VAR_4].commit;
  int VAR_6;

  VAR_3 = VAR_2->crtcs[VAR_4].ptr;

  if (!VAR_3 || !VAR_5)
   continue;

  VAR_6 = FUNC_2(&VAR_5->flip_done, 10 * VAR_0);
  if (VAR_6 == 0)
   FUNC_0("[CRTC:%d:%s] flip_done timed out\n",
      VAR_3->base.id, VAR_3->name);
 }

 if (VAR_2->fake_commit)
  FUNC_1(&VAR_2->fake_commit->flip_done);
}
