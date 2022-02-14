
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gtt_range {scalar_t__ offset; } ;
struct gma_crtc {size_t pipe; struct gtt_range* cursor_gt; scalar_t__ cursor_addr; } ;
struct drm_psb_private {scalar_t__ stolen_base; TYPE_1__* ops; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {scalar_t__ cursor_needs_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 struct gtt_range* FUNC_1 (struct drm_device*,int,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_7,
      struct gma_crtc *VAR_8)
{
 struct drm_psb_private *VAR_9 = VAR_7->dev_private;
 u32 VAR_10[3] = { VAR_1, VAR_3, VAR_5 };
 u32 VAR_11[3] = { VAR_0, VAR_2, VAR_4 };
 struct gtt_range *VAR_12;

 if (VAR_9->ops->cursor_needs_phys) {



  VAR_12 = FUNC_1(VAR_7, 4 * VAR_6, "cursor", 1,
      VAR_6);
  if (!VAR_12) {
   VAR_8->cursor_gt = ((void*)0);
   goto out;
  }
  VAR_8->cursor_gt = VAR_12;
  VAR_8->cursor_addr = VAR_9->stolen_base +
       VAR_12->offset;
 } else {
  VAR_8->cursor_gt = ((void*)0);
 }

out:
 FUNC_0(VAR_10[VAR_8->pipe], 0);
 FUNC_0(VAR_11[VAR_8->pipe], 0);
}
