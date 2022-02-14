
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vop_win_yuv2yuv_data {int dummy; } ;
struct vop_win_data {TYPE_1__* phy; } ;
struct vop_win {struct vop_win_yuv2yuv_data* yuv2yuv_data; struct vop_win_data* data; } ;
struct vop {int reg_lock; int win_enabled; int is_enabled; } ;
struct rockchip_gem_object {unsigned int dma_addr; } ;
struct drm_rect {unsigned int x1; unsigned int y1; } ;
struct drm_plane_state {int rotation; int visible; struct drm_rect dst; struct drm_rect src; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int* pitches; unsigned long* offsets; TYPE_3__* format; struct drm_gem_object** obj; } ;
struct TYPE_5__ {unsigned int htotal; unsigned int hsync_start; unsigned int vtotal; unsigned int vsync_start; } ;
struct drm_crtc {TYPE_2__ mode; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_6__ {int is_yuv; int* cpp; int hsub; int vsub; scalar_t__ has_alpha; int format; } ;
struct TYPE_4__ {scalar_t__ scl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct vop*,struct vop_win_data const*,int,int) ;
 int FUNC_10 (struct vop_win*) ;
 int FUNC_11 (struct vop*,struct vop_win_yuv2yuv_data const*,int ,int ) ;
 int FUNC_12 (struct vop*,struct vop_win_yuv2yuv_data const*,int ,int) ;
 scalar_t__ FUNC_13 (int) ;
 int * VAR_9 ;
 int FUNC_14 (struct drm_rect*) ;
 int FUNC_15 (struct drm_rect*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct vop*,struct vop_win_data const*,unsigned int,unsigned int,int,int,TYPE_3__*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int VAR_12 ;
 struct rockchip_gem_object* FUNC_20 (struct drm_gem_object*) ;
 struct vop* FUNC_21 (struct drm_crtc*) ;
 struct vop_win* FUNC_22 (struct drm_plane*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct drm_plane*,struct drm_plane_state*) ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_25(struct drm_plane *VAR_21,
  struct drm_plane_state *VAR_22)
{
 struct drm_plane_state *VAR_23 = VAR_21->state;
 struct drm_crtc *VAR_24 = VAR_23->crtc;
 struct vop_win *VAR_25 = FUNC_22(VAR_21);
 const struct vop_win_data *VAR_26 = VAR_25->data;
 const struct vop_win_yuv2yuv_data *VAR_27 = VAR_25->yuv2yuv_data;
 struct vop *VAR_28 = FUNC_21(VAR_23->crtc);
 struct drm_framebuffer *VAR_29 = VAR_23->fb;
 unsigned int VAR_30, VAR_31;
 unsigned int VAR_32, VAR_33;
 uint32_t VAR_34, VAR_35, VAR_36;
 struct drm_rect *VAR_37 = &VAR_23->src;
 struct drm_rect *VAR_38 = &VAR_23->dst;
 struct drm_gem_object *VAR_39, *VAR_40;
 struct rockchip_gem_object *VAR_41, *VAR_42;
 unsigned long VAR_43;
 dma_addr_t VAR_44;
 uint32_t VAR_45;
 bool VAR_46;
 int VAR_47 = FUNC_10(VAR_25);
 int VAR_48;
 int VAR_49 = VAR_29->format->is_yuv;
 int VAR_50;




 if (FUNC_13(!VAR_24))
  return;

 if (FUNC_13(!VAR_28->is_enabled))
  return;

 if (!VAR_23->visible) {
  FUNC_24(VAR_21, VAR_22);
  return;
 }

 VAR_39 = VAR_29->obj[0];
 VAR_41 = FUNC_20(VAR_39);

 VAR_30 = FUNC_15(VAR_37) >> 16;
 VAR_31 = FUNC_14(VAR_37) >> 16;
 VAR_34 = (VAR_31 - 1) << 16 | ((VAR_30 - 1) & 0xffff);

 VAR_35 = (FUNC_14(VAR_38) - 1) << 16;
 VAR_35 |= (FUNC_15(VAR_38) - 1) & 0xffff;

 VAR_32 = VAR_38->x1 + VAR_24->mode.htotal - VAR_24->mode.hsync_start;
 VAR_33 = VAR_38->y1 + VAR_24->mode.vtotal - VAR_24->mode.vsync_start;
 VAR_36 = VAR_33 << 16 | (VAR_32 & 0xffff);

 VAR_43 = (VAR_37->x1 >> 16) * VAR_29->format->cpp[0];
 VAR_43 += (VAR_37->y1 >> 16) * VAR_29->pitches[0];
 VAR_44 = VAR_41->dma_addr + VAR_43 + VAR_29->offsets[0];





 if (VAR_23->rotation & VAR_7)
  VAR_44 += (VAR_31 - 1) * VAR_29->pitches[0];

 VAR_48 = FUNC_23(VAR_29->format->format);

 FUNC_18(&VAR_28->reg_lock);

 FUNC_9(VAR_28, VAR_26, VAR_48, VAR_48);
 FUNC_9(VAR_28, VAR_26, VAR_20, FUNC_1(VAR_29->pitches[0], 4));
 FUNC_9(VAR_28, VAR_26, VAR_19, VAR_44);
 FUNC_12(VAR_28, VAR_27, VAR_17, VAR_49);
 FUNC_9(VAR_28, VAR_26, VAR_18,
      (VAR_23->rotation & VAR_7) ? 1 : 0);
 FUNC_9(VAR_28, VAR_26, VAR_15,
      (VAR_23->rotation & VAR_6) ? 1 : 0);

 if (VAR_49) {
  int VAR_51 = VAR_29->format->hsub;
  int VAR_52 = VAR_29->format->vsub;
  int VAR_53 = VAR_29->format->cpp[1];

  VAR_40 = VAR_29->obj[1];
  VAR_42 = FUNC_20(VAR_40);

  VAR_43 = (VAR_37->x1 >> 16) * VAR_53 / VAR_51;
  VAR_43 += (VAR_37->y1 >> 16) * VAR_29->pitches[1] / VAR_52;

  VAR_44 = VAR_42->dma_addr + VAR_43 + VAR_29->offsets[1];
  FUNC_9(VAR_28, VAR_26, VAR_14, FUNC_1(VAR_29->pitches[1], 4));
  FUNC_9(VAR_28, VAR_26, VAR_13, VAR_44);

  for (VAR_50 = 0; VAR_50 < VAR_8; VAR_50++) {
   FUNC_11(VAR_28,
       VAR_27,
       VAR_16[VAR_50],
       VAR_9[VAR_50]);
  }
 }

 if (VAR_26->phy->scl)
  FUNC_17(VAR_28, VAR_26, VAR_30, VAR_31,
        FUNC_15(VAR_38), FUNC_14(VAR_38),
        VAR_29->format);

 FUNC_9(VAR_28, VAR_26, VAR_34, VAR_34);
 FUNC_9(VAR_28, VAR_26, VAR_35, VAR_35);
 FUNC_9(VAR_28, VAR_26, VAR_36, VAR_36);

 VAR_46 = FUNC_16(VAR_29->format->format);
 FUNC_9(VAR_28, VAR_26, VAR_46, VAR_46);
 if (VAR_29->format->has_alpha && VAR_47 > 0) {
  FUNC_9(VAR_28, VAR_26, VAR_10,
       FUNC_2(VAR_3));
  VAR_45 = FUNC_4(1) | FUNC_7(VAR_4) |
   FUNC_5(VAR_5) |
   FUNC_6(VAR_2) |
   FUNC_3(VAR_0) |
   FUNC_8(VAR_1);
  FUNC_9(VAR_28, VAR_26, VAR_12, VAR_45);
 } else {
  FUNC_9(VAR_28, VAR_26, VAR_12, FUNC_4(0));
 }

 FUNC_9(VAR_28, VAR_26, VAR_11, 1);
 VAR_28->win_enabled |= FUNC_0(VAR_47);
 FUNC_19(&VAR_28->reg_lock);
}
