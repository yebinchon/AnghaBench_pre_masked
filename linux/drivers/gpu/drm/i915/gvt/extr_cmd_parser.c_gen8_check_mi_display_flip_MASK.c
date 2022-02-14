
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct parser_exec_state {TYPE_2__* vgpu; } ;
struct mi_display_flip_command_info {int stride_val; int tile_val; int ctrl_reg; int stride_reg; int async_flip; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {TYPE_1__* gvt; } ;
struct TYPE_3__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(struct parser_exec_state *VAR_0,
  struct mi_display_flip_command_info *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->vgpu->gvt->dev_priv;
 u32 VAR_3, VAR_4;

 if (!VAR_1->async_flip)
  return 0;

 if (FUNC_1(VAR_2) >= 9) {
  VAR_3 = FUNC_3(VAR_0->vgpu, VAR_1->stride_reg) & FUNC_0(9, 0);
  VAR_4 = (FUNC_3(VAR_0->vgpu, VAR_1->ctrl_reg) &
    FUNC_0(12, 10)) >> 10;
 } else {
  VAR_3 = (FUNC_3(VAR_0->vgpu, VAR_1->stride_reg) &
    FUNC_0(15, 6)) >> 6;
  VAR_4 = (FUNC_3(VAR_0->vgpu, VAR_1->ctrl_reg) & (1 << 10)) >> 10;
 }

 if (VAR_3 != VAR_1->stride_val)
  FUNC_2("cannot change stride during async flip\n");

 if (VAR_4 != VAR_1->tile_val)
  FUNC_2("cannot change tile during async flip\n");

 return 0;
}
