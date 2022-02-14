
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct nv17_tv_state {int ptv_200; int ptv_20c; int ptv_304; int ptv_600; int ptv_60c; int ptv_610; int ptv_508; int ptv_614; int ptv_500; int ptv_504; int ptv_604; int ptv_608; int * tv_enc; } ;
struct drm_display_mode {int hdisplay; int htotal; int hsync_start; int hsync_end; int flags; scalar_t__ vdisplay; scalar_t__ vsync_end; scalar_t__ vsync_start; scalar_t__ vtotal; } ;
struct TYPE_15__ {int * ctv_regs; struct drm_display_mode mode; } ;
struct TYPE_14__ {int vdisplay; int * tv_enc; } ;
struct nv17_tv_norm_params {scalar_t__ kind; TYPE_6__ ctv_enc_mode; TYPE_5__ tv_enc_mode; } ;
struct nv04_crtc_reg {int* CRTC; int ramdac_630; int tv_setup; int ramdac_8c0; int* fp_horiz_regs; int fp_control; int fp_debug_0; int fp_margin_color; scalar_t__ fp_debug_2; scalar_t__* fp_vert_regs; int * ctv_regs; } ;
struct TYPE_11__ {scalar_t__ family; } ;
struct TYPE_12__ {TYPE_2__ info; } ;
struct TYPE_13__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_4__ client; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_18__ {int index; } ;
struct TYPE_10__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_17__ {TYPE_1__ mode_reg; } ;
struct TYPE_16__ {struct nv17_tv_state state; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
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
 scalar_t__ VAR_22 ;
 struct nv17_tv_norm_params* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int,int) ;
 TYPE_9__* FUNC_2 (int ) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 TYPE_8__* FUNC_4 (struct drm_device*) ;
 TYPE_7__* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_23,
        struct drm_display_mode *VAR_24,
        struct drm_display_mode *VAR_25)
{
 struct drm_device *VAR_26 = VAR_23->dev;
 struct nouveau_drm *VAR_27 = FUNC_3(VAR_26);
 int VAR_28 = FUNC_2(VAR_23->crtc)->index;
 struct nv04_crtc_reg *VAR_29 = &FUNC_4(VAR_26)->mode_reg.crtc_reg[VAR_28];
 struct nv17_tv_state *VAR_30 = &FUNC_5(VAR_23)->state;
 struct nv17_tv_norm_params *VAR_31 = FUNC_0(VAR_23);
 int VAR_32;

 VAR_29->CRTC[VAR_7] = 0x40;
 VAR_29->CRTC[VAR_8] = 0;
 VAR_29->ramdac_630 = 0x2;
 VAR_29->tv_setup = 1;
 VAR_29->ramdac_8c0 = 0x0;

 if (VAR_31->kind == VAR_22) {
  VAR_30->ptv_200 = 0x13111100;
  if (VAR_28)
   VAR_30->ptv_200 |= 0x10;

  VAR_30->ptv_20c = 0x808010;
  VAR_30->ptv_304 = 0x2d00000;
  VAR_30->ptv_600 = 0x0;
  VAR_30->ptv_60c = 0x0;
  VAR_30->ptv_610 = 0x1e00000;

  if (VAR_31->tv_enc_mode.vdisplay == 576) {
   VAR_30->ptv_508 = 0x1200000;
   VAR_30->ptv_614 = 0x33;

  } else if (VAR_31->tv_enc_mode.vdisplay == 480) {
   VAR_30->ptv_508 = 0xf00000;
   VAR_30->ptv_614 = 0x13;
  }

  if (VAR_27->client.device.info.family >= VAR_9) {
   VAR_30->ptv_500 = 0xe8e0;
   VAR_30->ptv_504 = 0x1710;
   VAR_30->ptv_604 = 0x0;
   VAR_30->ptv_608 = 0x0;
  } else {
   if (VAR_31->tv_enc_mode.vdisplay == 576) {
    VAR_30->ptv_604 = 0x20;
    VAR_30->ptv_608 = 0x10;
    VAR_30->ptv_500 = 0x19710;
    VAR_30->ptv_504 = 0x68f0;

   } else if (VAR_31->tv_enc_mode.vdisplay == 480) {
    VAR_30->ptv_604 = 0x10;
    VAR_30->ptv_608 = 0x20;
    VAR_30->ptv_500 = 0x4b90;
    VAR_30->ptv_504 = 0x1b480;
   }
  }

  for (VAR_32 = 0; VAR_32 < 0x40; VAR_32++)
   VAR_30->tv_enc[VAR_32] = VAR_31->tv_enc_mode.tv_enc[VAR_32];

 } else {
  struct drm_display_mode *VAR_33 =
      &VAR_31->ctv_enc_mode.mode;
  for (VAR_32 = 0; VAR_32 < 38; VAR_32++)
   VAR_29->ctv_regs[VAR_32] = VAR_31->ctv_enc_mode.ctv_regs[VAR_32];

  VAR_29->fp_horiz_regs[VAR_3] = VAR_33->hdisplay - 1;
  VAR_29->fp_horiz_regs[VAR_6] = VAR_33->htotal - 1;
  VAR_29->fp_horiz_regs[VAR_5] =
      VAR_33->hsync_start - 1;
  VAR_29->fp_horiz_regs[VAR_4] = VAR_33->hsync_end - 1;
  VAR_29->fp_horiz_regs[VAR_2] = VAR_33->hdisplay +
   FUNC_1((VAR_33->hdisplay-600)/40 - 1, 1);

  VAR_29->fp_vert_regs[VAR_3] = VAR_33->vdisplay - 1;
  VAR_29->fp_vert_regs[VAR_6] = VAR_33->vtotal - 1;
  VAR_29->fp_vert_regs[VAR_5] =
      VAR_33->vsync_start - 1;
  VAR_29->fp_vert_regs[VAR_4] = VAR_33->vsync_end - 1;
  VAR_29->fp_vert_regs[VAR_2] = VAR_33->vdisplay - 1;

  VAR_29->fp_control = VAR_16 |
   VAR_18 |
   VAR_20;

  if (VAR_33->flags & VAR_1)
   VAR_29->fp_control |= VAR_19;
  if (VAR_33->flags & VAR_0)
   VAR_29->fp_control |= VAR_17;

  VAR_29->fp_debug_0 = VAR_15 |
   VAR_12 |
   VAR_13 |
   VAR_10 |
   VAR_21 |
   VAR_14 |
   VAR_11;

  VAR_29->fp_debug_2 = 0;

  VAR_29->fp_margin_color = 0x801080;

 }
}
