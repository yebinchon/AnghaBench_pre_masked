
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int id; } ;
struct drm_plane {TYPE_2__ base; } ;
struct TYPE_10__ {int vblank_en; int danger_safe_en; int danger_vblank; scalar_t__ creq_vblank; } ;
struct dpu_plane {TYPE_5__ pipe_qos_cfg; TYPE_4__* pipe_hw; int is_rt_pipe; scalar_t__ pipe; TYPE_1__* pipe_sblk; } ;
struct TYPE_8__ {int (* setup_qos_ctrl ) (TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int danger_vblank; scalar_t__ creq_vblank; } ;


 int FUNC_0 (char*,int ,scalar_t__,int,int,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 struct dpu_plane* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_4,
 bool VAR_5, u32 VAR_6)
{
 struct dpu_plane *VAR_7 = FUNC_2(VAR_4);

 if (VAR_6 & VAR_2) {
  VAR_7->pipe_qos_cfg.creq_vblank = VAR_7->pipe_sblk->creq_vblank;
  VAR_7->pipe_qos_cfg.danger_vblank =
    VAR_7->pipe_sblk->danger_vblank;
  VAR_7->pipe_qos_cfg.vblank_en = VAR_5;
 }

 if (VAR_6 & VAR_1) {

  VAR_7->pipe_qos_cfg.vblank_en = 0;
  VAR_7->pipe_qos_cfg.creq_vblank = 0;
 }

 if (VAR_6 & VAR_0)
  VAR_7->pipe_qos_cfg.danger_safe_en = VAR_5;

 if (!VAR_7->is_rt_pipe) {
  VAR_7->pipe_qos_cfg.vblank_en = 0;
  VAR_7->pipe_qos_cfg.danger_safe_en = 0;
 }

 FUNC_0("plane%u: pnum:%d ds:%d vb:%d pri[0x%x, 0x%x] is_rt:%d\n",
  VAR_4->base.id,
  VAR_7->pipe - VAR_3,
  VAR_7->pipe_qos_cfg.danger_safe_en,
  VAR_7->pipe_qos_cfg.vblank_en,
  VAR_7->pipe_qos_cfg.creq_vblank,
  VAR_7->pipe_qos_cfg.danger_vblank,
  VAR_7->is_rt_pipe);

 VAR_7->pipe_hw->ops.setup_qos_ctrl(VAR_7->pipe_hw,
   &VAR_7->pipe_qos_cfg);
}
