
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_encoder {TYPE_1__ base; } ;
struct drm_crtc_state {int dummy; } ;
struct dpu_rm_requirements {int hw_res; int topology; } ;
struct dpu_rm {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_rm*,int ,int *) ;
 int FUNC_2 (struct dpu_rm*,int ,int *) ;
 int FUNC_3 (struct dpu_rm*,int ,struct dpu_rm_requirements*) ;

__attribute__((used)) static int FUNC_4(
  struct dpu_rm *VAR_0,
  struct drm_encoder *VAR_1,
  struct drm_crtc_state *VAR_2,
  struct dpu_rm_requirements *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1->base.id, VAR_3);
 if (VAR_4) {
  FUNC_0("unable to find appropriate mixers\n");
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_0, VAR_1->base.id, &VAR_3->topology);
 if (VAR_4) {
  FUNC_0("unable to find appropriate CTL\n");
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_0, VAR_1->base.id, &VAR_3->hw_res);
 if (VAR_4)
  return VAR_4;

 return VAR_4;
}
