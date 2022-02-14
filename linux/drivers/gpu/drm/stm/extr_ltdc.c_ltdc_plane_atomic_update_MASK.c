
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int* pix_fmt_hw; int bus_width; scalar_t__ non_alpha_only_l1; } ;
struct ltdc_device {int error_status; int err_lock; TYPE_5__* plane_fpsi; int regs; TYPE_3__ caps; } ;
struct drm_plane_state {int crtc_x; int crtc_w; int crtc_y; int crtc_h; int src_x; int src_y; int src_w; int src_h; int crtc; struct drm_framebuffer* fb; } ;
struct TYPE_6__ {int id; } ;
struct drm_plane {int index; scalar_t__ type; TYPE_1__ base; struct drm_plane_state* state; } ;
struct TYPE_7__ {int id; } ;
struct drm_framebuffer {int* pitches; TYPE_4__* format; TYPE_2__ base; } ;
typedef enum ltdc_pix_fmt { ____Placeholder_ltdc_pix_fmt } ltdc_pix_fmt ;
struct TYPE_10__ {int counter; } ;
struct TYPE_9__ {scalar_t__ format; int* cpp; int has_alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_3 (struct drm_framebuffer*,struct drm_plane_state*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ltdc_device* FUNC_6 (struct drm_plane*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct drm_plane *VAR_36,
         struct drm_plane_state *VAR_37)
{
 struct ltdc_device *VAR_38 = FUNC_6(VAR_36);
 struct drm_plane_state *VAR_39 = VAR_36->state;
 struct drm_framebuffer *VAR_40 = VAR_39->fb;
 u32 VAR_41 = VAR_36->index * VAR_11;
 u32 VAR_42 = VAR_39->crtc_x;
 u32 VAR_43 = VAR_39->crtc_x + VAR_39->crtc_w - 1;
 u32 VAR_44 = VAR_39->crtc_y;
 u32 VAR_45 = VAR_39->crtc_y + VAR_39->crtc_h - 1;
 u32 VAR_46, VAR_47, VAR_48, VAR_49;
 u32 VAR_50, VAR_51, VAR_52, VAR_53, VAR_54, VAR_55, VAR_56;
 enum ltdc_pix_fmt VAR_57;

 if (!VAR_39->crtc || !VAR_40) {
  FUNC_0("fb or crtc NULL");
  return;
 }


 VAR_46 = VAR_39->src_x >> 16;
 VAR_47 = VAR_39->src_y >> 16;
 VAR_48 = VAR_39->src_w >> 16;
 VAR_49 = VAR_39->src_h >> 16;

 FUNC_0("plane:%d fb:%d (%dx%d)@(%d,%d) -> (%dx%d)@(%d,%d)\n",
    VAR_36->base.id, VAR_40->base.id,
    VAR_48, VAR_49, VAR_46, VAR_47,
    VAR_39->crtc_w, VAR_39->crtc_h,
    VAR_39->crtc_x, VAR_39->crtc_y);

 VAR_56 = FUNC_7(VAR_38->regs, VAR_12);
 VAR_54 = (VAR_56 & VAR_4) >> 16;
 VAR_55 = VAR_56 & VAR_5;


 VAR_50 = ((VAR_43 + 1 + VAR_54) << 16) + (VAR_42 + 1 + VAR_54);
 FUNC_8(VAR_38->regs, VAR_20 + VAR_41,
   VAR_32 | VAR_31, VAR_50);


 VAR_50 = ((VAR_45 + 1 + VAR_55) << 16) + (VAR_44 + 1 + VAR_55);
 FUNC_8(VAR_38->regs, VAR_21 + VAR_41,
   VAR_34 | VAR_33, VAR_50);


 VAR_57 = FUNC_10(VAR_40->format->format);
 for (VAR_50 = 0; VAR_50 < VAR_35; VAR_50++)
  if (VAR_38->caps.pix_fmt_hw[VAR_50] == VAR_57)
   break;

 if (VAR_50 == VAR_35) {
  FUNC_1("Pixel format %.4s not supported\n",
     (char *)&VAR_40->format->format);
  VAR_50 = 0;
 }
 FUNC_8(VAR_38->regs, VAR_19 + VAR_41, VAR_30, VAR_50);


 VAR_51 = VAR_40->pitches[0];
 VAR_52 = VAR_40->format->cpp[0] *
        (VAR_43 - VAR_42 + 1) + (VAR_38->caps.bus_width >> 3) - 1;
 VAR_50 = ((VAR_51 << 16) | VAR_52);
 FUNC_8(VAR_38->regs, VAR_17 + VAR_41,
   VAR_26 | VAR_27, VAR_50);


 VAR_50 = VAR_6;
 FUNC_8(VAR_38->regs, VAR_14 + VAR_41, VAR_24, VAR_50);


 VAR_50 = VAR_1 | VAR_3;
 if (!VAR_40->format->has_alpha)
  VAR_50 = VAR_0 | VAR_2;


 if (VAR_38->caps.non_alpha_only_l1 &&
     VAR_36->type != VAR_8)
  VAR_50 = VAR_1 | VAR_3;

 FUNC_8(VAR_38->regs, VAR_13 + VAR_41,
   VAR_23 | VAR_22, VAR_50);


 VAR_50 = VAR_45 - VAR_44 + 1;
 FUNC_8(VAR_38->regs, VAR_16 + VAR_41, VAR_25, VAR_50);


 VAR_53 = (u32)FUNC_3(VAR_40, VAR_39, 0);

 FUNC_0("fb: phys 0x%08x", VAR_53);
 FUNC_9(VAR_38->regs, VAR_15 + VAR_41, VAR_53);


 VAR_50 = VAR_40->format->format == VAR_7 ? VAR_28 : 0;
 VAR_50 |= VAR_29;
 FUNC_8(VAR_38->regs, VAR_18 + VAR_41,
   VAR_29 | VAR_28, VAR_50);

 VAR_38->plane_fpsi[VAR_36->index].counter++;

 FUNC_4(&VAR_38->err_lock);
 if (VAR_38->error_status & VAR_9) {
  FUNC_2("ltdc fifo underrun: please verify display mode\n");
  VAR_38->error_status &= ~VAR_9;
 }
 if (VAR_38->error_status & VAR_10) {
  FUNC_2("ltdc transfer error\n");
  VAR_38->error_status &= ~VAR_10;
 }
 FUNC_5(&VAR_38->err_lock);
}
