
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_plane {int dummy; } ;
struct drm_crtc {int mode; } ;
struct dpu_vbif_set_ot_params {int is_wfd; int rd; int clk_ctrl; int vbif_idx; int frame_rate; int height; int width; scalar_t__ num; int xin_id; } ;
struct TYPE_4__ {int src_rect; } ;
struct dpu_plane {TYPE_3__* pipe_hw; int is_rt_pipe; TYPE_1__ pipe_cfg; } ;
struct dpu_kms {int dummy; } ;
typedef int ot_params ;
struct TYPE_6__ {TYPE_2__* cap; scalar_t__ idx; } ;
struct TYPE_5__ {int clk_ctrl; int xin_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct dpu_kms* FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (struct dpu_kms*,struct dpu_vbif_set_ot_params*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dpu_vbif_set_ot_params*,int ,int) ;
 struct dpu_plane* FUNC_6 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_7(struct drm_plane *VAR_2,
  struct drm_crtc *VAR_3)
{
 struct dpu_plane *VAR_4 = FUNC_6(VAR_2);
 struct dpu_vbif_set_ot_params VAR_5;
 struct dpu_kms *VAR_6 = FUNC_0(VAR_2);

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.xin_id = VAR_4->pipe_hw->cap->xin_id;
 VAR_5.num = VAR_4->pipe_hw->idx - VAR_0;
 VAR_5.width = FUNC_4(&VAR_4->pipe_cfg.src_rect);
 VAR_5.height = FUNC_3(&VAR_4->pipe_cfg.src_rect);
 VAR_5.is_wfd = !VAR_4->is_rt_pipe;
 VAR_5.frame_rate = FUNC_2(&VAR_3->mode);
 VAR_5.vbif_idx = VAR_1;
 VAR_5.clk_ctrl = VAR_4->pipe_hw->cap->clk_ctrl;
 VAR_5.rd = 1;

 FUNC_1(VAR_6, &VAR_5);
}
