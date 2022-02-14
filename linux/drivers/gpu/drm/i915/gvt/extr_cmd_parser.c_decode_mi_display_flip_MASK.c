
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parser_exec_state {TYPE_2__* vgpu; } ;
struct mi_display_flip_command_info {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {TYPE_1__* gvt; } ;
struct TYPE_3__ {struct drm_i915_private* dev_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct parser_exec_state*,struct mi_display_flip_command_info*) ;
 int FUNC_3 (struct parser_exec_state*,struct mi_display_flip_command_info*) ;

__attribute__((used)) static int FUNC_4(struct parser_exec_state *VAR_1,
  struct mi_display_flip_command_info *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->vgpu->gvt->dev_priv;

 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_3) >= 9)
  return FUNC_3(VAR_1, VAR_2);

 return -VAR_0;
}
