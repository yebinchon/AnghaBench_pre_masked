
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_display_topology {int num_intf; int num_enc; int num_lm; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct dpu_rm_requirements {struct msm_display_topology topology; int hw_res; } ;
struct dpu_rm {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct drm_encoder*,int *) ;

__attribute__((used)) static int FUNC_2(
  struct dpu_rm *VAR_0,
  struct drm_encoder *VAR_1,
  struct drm_crtc_state *VAR_2,
  struct dpu_rm_requirements *VAR_3,
  struct msm_display_topology VAR_4)
{
 FUNC_1(VAR_1, &VAR_3->hw_res);

 VAR_3->topology = VAR_4;

 FUNC_0("num_lm: %d num_enc: %d num_intf: %d\n",
        VAR_3->topology.num_lm, VAR_3->topology.num_enc,
        VAR_3->topology.num_intf);

 return 0;
}
