
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_gem_address_space {int dummy; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct dpu_plane_state {int multirect_index; } ;
struct dpu_plane {TYPE_3__* pipe_hw; int base; } ;
struct TYPE_4__ {struct msm_gem_address_space* aspace; } ;
struct dpu_kms {TYPE_1__ base; } ;
struct dpu_hw_pipe_cfg {int layout; } ;
struct TYPE_5__ {int (* setup_sourceaddress ) (TYPE_3__*,struct dpu_hw_pipe_cfg*,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; int idx; } ;


 int FUNC_0 (struct dpu_plane*,char*) ;
 int FUNC_1 (struct dpu_plane*,char*,int) ;
 int VAR_0 ;
 struct dpu_kms* FUNC_2 (int *) ;
 int FUNC_3 (struct msm_gem_address_space*,struct drm_framebuffer*,int *) ;
 int FUNC_4 (TYPE_3__*,struct dpu_hw_pipe_cfg*,int ) ;
 struct dpu_plane* FUNC_5 (struct drm_plane*) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct drm_plane *VAR_1,
  struct dpu_plane_state *VAR_2,
  struct dpu_hw_pipe_cfg *VAR_3,
  struct drm_framebuffer *VAR_4)
{
 struct dpu_plane *VAR_5 = FUNC_5(VAR_1);
 struct dpu_kms *VAR_6 = FUNC_2(&VAR_5->base);
 struct msm_gem_address_space *VAR_7 = VAR_6->base.aspace;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_4, &VAR_3->layout);
 if (VAR_8 == -VAR_0)
  FUNC_0(VAR_5, "not updating same src addrs\n");
 else if (VAR_8)
  FUNC_1(VAR_5, "failed to get format layout, %d\n", VAR_8);
 else if (VAR_5->pipe_hw->ops.setup_sourceaddress) {
  FUNC_6(VAR_5->pipe_hw->idx,
         &VAR_3->layout,
         VAR_2->multirect_index);
  VAR_5->pipe_hw->ops.setup_sourceaddress(VAR_5->pipe_hw, VAR_3,
      VAR_2->multirect_index);
 }
}
