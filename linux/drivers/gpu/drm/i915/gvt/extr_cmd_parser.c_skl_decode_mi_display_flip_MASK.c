
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct parser_exec_state {struct intel_vgpu* vgpu; } ;
struct mi_display_flip_command_info {int stride_val; int tile_val; int surf_val; int async_flip; void* pipe; int surf_reg; int stride_reg; int ctrl_reg; void* plane; int event; } ;
struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;






 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_4 (struct parser_exec_state*,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct parser_exec_state *VAR_12,
  struct mi_display_flip_command_info *VAR_13)
{
 struct drm_i915_private *VAR_14 = VAR_12->vgpu->gvt->dev_priv;
 struct intel_vgpu *VAR_15 = VAR_12->vgpu;
 u32 VAR_16 = FUNC_4(VAR_12, 0);
 u32 VAR_17 = FUNC_4(VAR_12, 1);
 u32 VAR_18 = FUNC_4(VAR_12, 2);
 u32 VAR_19 = (VAR_16 & FUNC_3(12, 8)) >> 8;

 VAR_13->plane = VAR_7;

 switch (VAR_19) {
 case 133:
  VAR_13->pipe = VAR_1;
  VAR_13->event = VAR_4;
  break;
 case 132:
  VAR_13->pipe = VAR_2;
  VAR_13->event = VAR_5;
  break;
 case 131:
  VAR_13->pipe = VAR_3;
  VAR_13->event = VAR_6;
  break;

 case 130:
  VAR_13->pipe = VAR_1;
  VAR_13->event = VAR_8;
  VAR_13->plane = VAR_11;
  break;
 case 129:
  VAR_13->pipe = VAR_2;
  VAR_13->event = VAR_9;
  VAR_13->plane = VAR_11;
  break;
 case 128:
  VAR_13->pipe = VAR_3;
  VAR_13->event = VAR_10;
  VAR_13->plane = VAR_11;
  break;

 default:
  FUNC_5("unknown plane code %d\n", VAR_19);
  return -VAR_0;
 }

 VAR_13->stride_val = (VAR_17 & FUNC_3(15, 6)) >> 6;
 VAR_13->tile_val = (VAR_17 & FUNC_3(2, 0));
 VAR_13->surf_val = (VAR_18 & FUNC_3(31, 12)) >> 12;
 VAR_13->async_flip = ((VAR_18 & FUNC_3(1, 0)) == 0x1);

 VAR_13->ctrl_reg = FUNC_0(VAR_13->pipe);
 VAR_13->stride_reg = FUNC_1(VAR_13->pipe);
 VAR_13->surf_reg = FUNC_2(VAR_13->pipe);

 return 0;
}
