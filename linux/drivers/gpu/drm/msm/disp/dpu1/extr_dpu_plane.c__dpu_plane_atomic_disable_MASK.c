
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {int dummy; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct dpu_plane_state {int pending; int multirect_mode; } ;
struct dpu_plane {TYPE_2__* pipe_hw; } ;
struct TYPE_3__ {int (* setup_multirect ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_plane*) ;
 scalar_t__ FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 struct dpu_plane* FUNC_3 (struct drm_plane*) ;
 struct dpu_plane_state* FUNC_4 (struct drm_plane_state*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_plane *VAR_2)
{
 struct dpu_plane *VAR_3 = FUNC_3(VAR_2);
 struct drm_plane_state *VAR_4 = VAR_2->state;
 struct dpu_plane_state *VAR_5 = FUNC_4(VAR_4);

 FUNC_5(FUNC_0(VAR_2), FUNC_1(VAR_2),
    VAR_5->multirect_mode);

 VAR_5->pending = 1;

 if (FUNC_1(VAR_2) &&
   VAR_3->pipe_hw && VAR_3->pipe_hw->ops.setup_multirect)
  VAR_3->pipe_hw->ops.setup_multirect(VAR_3->pipe_hw,
    VAR_1, VAR_0);
}
