
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_format_info {int vsub; int hsub; } ;
struct dpu_plane_state {int scaler3_cfg; } ;
struct TYPE_4__ {int dst_rect; int src_rect; } ;
struct dpu_plane {TYPE_2__ pipe_cfg; } ;
struct TYPE_3__ {int pixel_format; } ;
struct dpu_format {TYPE_1__ base; } ;


 int FUNC_0 (struct dpu_plane*,struct dpu_plane_state*,int ,int ,int ,int ,int *,struct dpu_format const*,int ,int ) ;
 struct drm_format_info* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dpu_plane *VAR_0,
  struct dpu_plane_state *VAR_1,
  const struct dpu_format *VAR_2, bool VAR_3)
{
 const struct drm_format_info *VAR_4 = FUNC_1(VAR_2->base.pixel_format);



 FUNC_0(VAR_0, VAR_1,
   FUNC_3(&VAR_0->pipe_cfg.src_rect),
   FUNC_2(&VAR_0->pipe_cfg.src_rect),
   FUNC_3(&VAR_0->pipe_cfg.dst_rect),
   FUNC_2(&VAR_0->pipe_cfg.dst_rect),
   &VAR_1->scaler3_cfg, VAR_2,
   VAR_4->hsub, VAR_4->vsub);
}
