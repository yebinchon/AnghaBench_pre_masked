
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct drm_plane {TYPE_3__ base; } ;
struct dpu_vbif_set_qos_params {int clk_ctrl; int is_rt; int xin_id; int vbif_idx; scalar_t__ num; } ;
struct dpu_plane {int is_rt_pipe; TYPE_2__* pipe_hw; } ;
struct dpu_kms {int dummy; } ;
typedef int qos_params ;
struct TYPE_5__ {scalar_t__ idx; TYPE_1__* cap; } ;
struct TYPE_4__ {int xin_id; int clk_ctrl; } ;


 int FUNC_0 (char*,int ,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct dpu_kms* FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct dpu_kms*,struct dpu_vbif_set_qos_params*) ;
 int FUNC_3 (struct dpu_vbif_set_qos_params*,int ,int) ;
 struct dpu_plane* FUNC_4 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_2)
{
 struct dpu_plane *VAR_3 = FUNC_4(VAR_2);
 struct dpu_vbif_set_qos_params VAR_4;
 struct dpu_kms *VAR_5 = FUNC_1(VAR_2);

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.vbif_idx = VAR_1;
 VAR_4.clk_ctrl = VAR_3->pipe_hw->cap->clk_ctrl;
 VAR_4.xin_id = VAR_3->pipe_hw->cap->xin_id;
 VAR_4.num = VAR_3->pipe_hw->idx - VAR_0;
 VAR_4.is_rt = VAR_3->is_rt_pipe;

 FUNC_0("plane%d pipe:%d vbif:%d xin:%d rt:%d, clk_ctrl:%d\n",
   VAR_2->base.id, VAR_4.num,
   VAR_4.vbif_idx,
   VAR_4.xin_id, VAR_4.is_rt,
   VAR_4.clk_ctrl);

 FUNC_2(VAR_5, &VAR_4);
}
