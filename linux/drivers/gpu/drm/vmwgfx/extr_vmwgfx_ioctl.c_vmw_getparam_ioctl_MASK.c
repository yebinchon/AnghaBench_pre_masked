
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_fifo_state {int capabilities; } ;
struct vmw_private {int capabilities; int capabilities2; int prim_bb_mem; int max_mob_pages; int memory_size; int max_mob_size; int has_dx; int has_sm4_1; int active_display_unit; struct vmw_fifo_state fifo; int * mmio_virt; } ;
struct vmw_fpriv {int gb_aware; } ;
struct svga_3d_compat_cap {int dummy; } ;
struct drm_vmw_getparam_arg {int param; int value; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct vmw_private*) ;
 struct vmw_fpriv* FUNC_1 (struct drm_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_private*) ;
 int FUNC_4 (struct vmw_private*) ;
 struct vmw_private* FUNC_5 (struct drm_device*) ;

int FUNC_6(struct drm_device *VAR_11, void *VAR_12,
         struct drm_file *VAR_13)
{
 struct vmw_private *VAR_14 = FUNC_5(VAR_11);
 struct drm_vmw_getparam_arg *VAR_15 =
     (struct drm_vmw_getparam_arg *)VAR_12;
 struct vmw_fpriv *VAR_16 = FUNC_1(VAR_13);

 switch (VAR_15->param) {
 case 130:
  VAR_15->value = FUNC_4(VAR_14);
  break;
 case 131:
  VAR_15->value = FUNC_3(VAR_14);
  break;
 case 142:
  VAR_15->value = FUNC_0(VAR_14) ? 1 : 0;
  break;
 case 137:
  VAR_15->value = VAR_14->capabilities;
  break;
 case 136:
  VAR_15->value = VAR_14->capabilities2;
  break;
 case 139:
  VAR_15->value = VAR_14->fifo.capabilities;
  break;
 case 135:
  VAR_15->value = VAR_14->prim_bb_mem;
  break;
 case 138:
 {
  u32 *VAR_17 = VAR_14->mmio_virt;
  const struct vmw_fifo_state *VAR_18 = &VAR_14->fifo;

  if ((VAR_14->capabilities & VAR_4)) {
   VAR_15->value = VAR_3;
   break;
  }

  VAR_15->value =
   FUNC_2(VAR_17 +
          ((VAR_18->capabilities &
     VAR_9) ?
           VAR_8 :
           VAR_7));
  break;
 }
 case 132:
  if ((VAR_14->capabilities & VAR_4) &&
      !VAR_16->gb_aware)
   VAR_15->value = VAR_14->max_mob_pages * VAR_1 / 2;
  else
   VAR_15->value = VAR_14->memory_size;
  break;
 case 141:
  if ((VAR_14->capabilities & VAR_4) &&
      VAR_16->gb_aware)
   VAR_15->value = VAR_2 * sizeof(uint32_t);
  else if (VAR_14->capabilities & VAR_4)
   VAR_15->value = sizeof(struct svga_3d_compat_cap) +
    sizeof(uint32_t);
  else
   VAR_15->value = (VAR_6 -
     VAR_5 + 1) *
    sizeof(uint32_t);
  break;
 case 134:
  VAR_16->gb_aware = 1;
  VAR_15->value = VAR_14->max_mob_pages * VAR_1;
  break;
 case 133:
  VAR_15->value = VAR_14->max_mob_size;
  break;
 case 129:
  VAR_15->value =
   (VAR_14->active_display_unit == VAR_10);
  break;
 case 140:
  VAR_15->value = VAR_14->has_dx;
  break;
 case 128:
  VAR_15->value = VAR_14->has_sm4_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
