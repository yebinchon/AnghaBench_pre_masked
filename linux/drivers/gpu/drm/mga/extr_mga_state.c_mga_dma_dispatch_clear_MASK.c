
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_clip_rect {int y2; int y1; int x1; int x2; } ;
struct TYPE_8__ {int plnwt; int dwgctl; } ;
struct TYPE_6__ {int nbox; struct drm_clip_rect* boxes; TYPE_3__ context_state; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_7__ {int front_offset; int clear_cmd; int back_offset; int depth_offset; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
typedef TYPE_3__ drm_mga_context_regs_t ;
struct TYPE_9__ {int flags; int color_mask; int clear_color; int depth_mask; int clear_depth; } ;
typedef TYPE_4__ drm_mga_clear_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,scalar_t__,int,scalar_t__,int,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_13, drm_mga_clear_t *VAR_14)
{
 drm_mga_private_t *VAR_15 = VAR_13->dev_private;
 drm_mga_sarea_t *VAR_16 = VAR_15->sarea_priv;
 drm_mga_context_regs_t *VAR_17 = &VAR_16->context_state;
 struct drm_clip_rect *VAR_18 = VAR_16->boxes;
 int VAR_19 = VAR_16->nbox;
 int VAR_20;
 VAR_0;
 FUNC_3("\n");

 FUNC_1(1);

 FUNC_2(VAR_3, 0x00000000,
    VAR_3, 0x00000000,
    VAR_6, 0x00007100, VAR_6, 0x00007000);

 FUNC_0();

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  struct drm_clip_rect *VAR_21 = &VAR_18[VAR_20];
  u32 VAR_22 = VAR_21->y2 - VAR_21->y1;

  FUNC_3("   from=%d,%d to=%d,%d\n",
     VAR_21->x1, VAR_21->y1, VAR_21->x2, VAR_21->y2);

  if (VAR_14->flags & VAR_9) {
   FUNC_1(2);

   FUNC_2(VAR_3, 0x00000000,
      VAR_11, VAR_14->color_mask,
      VAR_12, (VAR_21->y1 << 16) | VAR_22,
      VAR_10, (VAR_21->x2 << 16) | VAR_21->x1);

   FUNC_2(VAR_3, 0x00000000,
      VAR_8, VAR_14->clear_color,
      VAR_4, VAR_15->front_offset,
      VAR_5 + VAR_7, VAR_15->clear_cmd);

   FUNC_0();
  }

  if (VAR_14->flags & VAR_1) {
   FUNC_1(2);

   FUNC_2(VAR_3, 0x00000000,
      VAR_11, VAR_14->color_mask,
      VAR_12, (VAR_21->y1 << 16) | VAR_22,
      VAR_10, (VAR_21->x2 << 16) | VAR_21->x1);

   FUNC_2(VAR_3, 0x00000000,
      VAR_8, VAR_14->clear_color,
      VAR_4, VAR_15->back_offset,
      VAR_5 + VAR_7, VAR_15->clear_cmd);

   FUNC_0();
  }

  if (VAR_14->flags & VAR_2) {
   FUNC_1(2);

   FUNC_2(VAR_3, 0x00000000,
      VAR_11, VAR_14->depth_mask,
      VAR_12, (VAR_21->y1 << 16) | VAR_22,
      VAR_10, (VAR_21->x2 << 16) | VAR_21->x1);

   FUNC_2(VAR_3, 0x00000000,
      VAR_8, VAR_14->clear_depth,
      VAR_4, VAR_15->depth_offset,
      VAR_5 + VAR_7, VAR_15->clear_cmd);

   FUNC_0();
  }

 }

 FUNC_1(1);


 FUNC_2(VAR_3, 0x00000000,
    VAR_3, 0x00000000,
    VAR_11, VAR_17->plnwt, VAR_5, VAR_17->dwgctl);

 FUNC_0();

 FUNC_4();
}
