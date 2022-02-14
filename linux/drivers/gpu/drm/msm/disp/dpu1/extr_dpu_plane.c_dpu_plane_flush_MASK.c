
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane {scalar_t__ state; } ;
struct dpu_plane_state {int pending; } ;
struct dpu_plane {int color_fill; scalar_t__ csc_ptr; TYPE_2__* pipe_hw; scalar_t__ is_error; } ;
struct TYPE_3__ {int (* setup_csc ) (TYPE_2__*,scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dpu_plane*,int,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 struct dpu_plane* FUNC_3 (struct drm_plane*) ;
 struct dpu_plane_state* FUNC_4 (scalar_t__) ;

void FUNC_5(struct drm_plane *VAR_1)
{
 struct dpu_plane *VAR_2;
 struct dpu_plane_state *VAR_3;

 if (!VAR_1 || !VAR_1->state) {
  FUNC_0("invalid plane\n");
  return;
 }

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_4(VAR_1->state);





 if (VAR_2->is_error)

  FUNC_1(VAR_2, 0xFFFFFF, 0xFF);
 else if (VAR_2->color_fill & VAR_0)

  FUNC_1(VAR_2, VAR_2->color_fill, 0xFF);
 else if (VAR_2->pipe_hw && VAR_2->csc_ptr && VAR_2->pipe_hw->ops.setup_csc)
  VAR_2->pipe_hw->ops.setup_csc(VAR_2->pipe_hw, VAR_2->csc_ptr);


 if (VAR_1->state)
  VAR_3->pending = 0;
}
