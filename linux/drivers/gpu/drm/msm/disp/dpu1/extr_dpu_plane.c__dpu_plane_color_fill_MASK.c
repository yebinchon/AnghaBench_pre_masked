
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_plane {int state; } ;
struct dpu_plane_state {scalar_t__ multirect_index; int scaler3_cfg; int pixel_ext; } ;
struct TYPE_10__ {int y2; int x2; scalar_t__ y1; scalar_t__ x1; } ;
struct TYPE_13__ {int dst_rect; TYPE_1__ src_rect; } ;
struct dpu_plane {TYPE_4__ pipe_cfg; TYPE_3__* pipe_hw; struct drm_plane base; } ;
struct dpu_format {int dummy; } ;
struct TYPE_11__ {int (* setup_scaler ) (TYPE_3__*,TYPE_4__*,int *,int *) ;int (* setup_pe ) (TYPE_3__*,int *) ;int (* setup_rects ) (TYPE_3__*,TYPE_4__*,scalar_t__) ;int (* setup_format ) (TYPE_3__*,struct dpu_format const*,int ,scalar_t__) ;int (* setup_solidfill ) (TYPE_3__*,int,scalar_t__) ;} ;
struct TYPE_12__ {TYPE_2__ ops; } ;


 int FUNC_0 (struct dpu_plane*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dpu_plane*,struct dpu_plane_state*,struct dpu_format const*,int) ;
 struct dpu_format* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,struct dpu_format const*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*,int *,int *) ;
 struct dpu_plane_state* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct dpu_plane *VAR_3,
  uint32_t VAR_4, uint32_t VAR_5)
{
 const struct dpu_format *VAR_6;
 const struct drm_plane *VAR_7 = &VAR_3->base;
 struct dpu_plane_state *VAR_8 = FUNC_10(VAR_7->state);

 FUNC_0(VAR_3, "\n");





 VAR_6 = FUNC_2(VAR_2);


 if (VAR_6 && VAR_3->pipe_hw->ops.setup_solidfill) {
  VAR_3->pipe_hw->ops.setup_solidfill(VAR_3->pipe_hw,
    (VAR_4 & 0xFFFFFF) | ((VAR_5 & 0xFF) << 24),
    VAR_8->multirect_index);


  VAR_3->pipe_cfg.src_rect.x1 = 0;
  VAR_3->pipe_cfg.src_rect.y1 = 0;
  VAR_3->pipe_cfg.src_rect.x2 =
   FUNC_4(&VAR_3->pipe_cfg.dst_rect);
  VAR_3->pipe_cfg.src_rect.y2 =
   FUNC_3(&VAR_3->pipe_cfg.dst_rect);
  FUNC_1(VAR_3, VAR_8, VAR_6, 1);

  if (VAR_3->pipe_hw->ops.setup_format)
   VAR_3->pipe_hw->ops.setup_format(VAR_3->pipe_hw,
     VAR_6, VAR_1,
     VAR_8->multirect_index);

  if (VAR_3->pipe_hw->ops.setup_rects)
   VAR_3->pipe_hw->ops.setup_rects(VAR_3->pipe_hw,
     &VAR_3->pipe_cfg,
     VAR_8->multirect_index);

  if (VAR_3->pipe_hw->ops.setup_pe)
   VAR_3->pipe_hw->ops.setup_pe(VAR_3->pipe_hw,
     &VAR_8->pixel_ext);

  if (VAR_3->pipe_hw->ops.setup_scaler &&
    VAR_8->multirect_index != VAR_0)
   VAR_3->pipe_hw->ops.setup_scaler(VAR_3->pipe_hw,
     &VAR_3->pipe_cfg, &VAR_8->pixel_ext,
     &VAR_8->scaler3_cfg);
 }

 return 0;
}
