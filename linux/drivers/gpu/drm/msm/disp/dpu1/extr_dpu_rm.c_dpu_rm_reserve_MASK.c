
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_display_topology {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct drm_encoder {TYPE_3__ base; } ;
struct drm_crtc_state {TYPE_2__* crtc; } ;
struct dpu_rm_requirements {int dummy; } ;
struct dpu_rm {int rm_lock; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (struct dpu_rm*,struct drm_encoder*,struct drm_crtc_state*,struct dpu_rm_requirements*) ;
 int FUNC_4 (struct dpu_rm*,struct drm_encoder*,struct drm_crtc_state*,struct dpu_rm_requirements*,struct msm_display_topology) ;
 int FUNC_5 (struct dpu_rm*,int ) ;
 int FUNC_6 (struct drm_crtc_state*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(
  struct dpu_rm *VAR_0,
  struct drm_encoder *VAR_1,
  struct drm_crtc_state *VAR_2,
  struct msm_display_topology VAR_3,
  bool VAR_4)
{
 struct dpu_rm_requirements VAR_5;
 int VAR_6;


 if (!FUNC_6(VAR_2))
  return 0;

 FUNC_2("reserving hw for enc %d crtc %d test_only %d\n",
        VAR_1->base.id, VAR_2->crtc->base.id, VAR_4);

 FUNC_7(&VAR_0->rm_lock);

 VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2, &VAR_5,
         VAR_3);
 if (VAR_6) {
  FUNC_1("failed to populate hw requirements\n");
  goto end;
 }

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (VAR_6) {
  FUNC_1("failed to reserve hw resources: %d\n", VAR_6);
  FUNC_5(VAR_0, VAR_1->base.id);
 } else if (VAR_4) {

  FUNC_0("test_only: discard test [enc: %d]\n",
    VAR_1->base.id);
  FUNC_5(VAR_0, VAR_1->base.id);
 }

end:
 FUNC_8(&VAR_0->rm_lock);

 return VAR_6;
}
