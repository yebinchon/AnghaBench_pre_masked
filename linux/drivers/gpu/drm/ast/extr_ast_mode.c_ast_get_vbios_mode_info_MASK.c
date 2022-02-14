
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct drm_display_mode {int flags; int clock; int crtc_hdisplay; int crtc_vdisplay; scalar_t__ crtc_vsync_end; scalar_t__ crtc_vsync_start; scalar_t__ crtc_vblank_end; scalar_t__ crtc_vblank_start; scalar_t__ crtc_vtotal; scalar_t__ crtc_hsync_end; scalar_t__ crtc_hsync_start; scalar_t__ crtc_hblank_end; scalar_t__ crtc_hblank_start; scalar_t__ crtc_htotal; } ;
struct TYPE_8__ {int crtc_hdisplay; int crtc_vdisplay; } ;
struct drm_crtc {TYPE_4__ mode; TYPE_2__* primary; TYPE_1__* dev; } ;
struct ast_vbios_mode_info {struct ast_vbios_enhtable const* enh_table; int * std_table; } ;
typedef struct ast_vbios_enhtable {int flags; int refresh_rate; size_t refresh_rate_index; size_t mode_id; scalar_t__ vsync; scalar_t__ vfp; scalar_t__ vde; scalar_t__ vt; scalar_t__ hsync; scalar_t__ hfp; scalar_t__ hde; scalar_t__ ht; } const ast_vbios_enhtable ;
struct ast_private {scalar_t__ chip; } ;
struct TYPE_7__ {int* cpp; } ;
struct TYPE_6__ {struct drm_framebuffer* fb; } ;
struct TYPE_5__ {struct ast_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 size_t FUNC_1 (struct drm_display_mode*) ;
 struct ast_vbios_enhtable const* VAR_17 ;
 struct ast_vbios_enhtable const* VAR_18 ;
 struct ast_vbios_enhtable const* VAR_19 ;
 struct ast_vbios_enhtable const* VAR_20 ;
 struct ast_vbios_enhtable const* VAR_21 ;
 struct ast_vbios_enhtable const* VAR_22 ;
 struct ast_vbios_enhtable const* VAR_23 ;
 struct ast_vbios_enhtable const* VAR_24 ;
 struct ast_vbios_enhtable const* VAR_25 ;
 struct ast_vbios_enhtable const* VAR_26 ;
 struct ast_vbios_enhtable const* VAR_27 ;
 struct ast_vbios_enhtable const* VAR_28 ;
 int * VAR_29 ;

__attribute__((used)) static bool FUNC_2(struct drm_crtc *VAR_30, struct drm_display_mode *VAR_31,
        struct drm_display_mode *VAR_32,
        struct ast_vbios_mode_info *VAR_33)
{
 struct ast_private *VAR_34 = VAR_30->dev->dev_private;
 const struct drm_framebuffer *VAR_35 = VAR_30->primary->fb;
 u32 VAR_36 = 0, VAR_37, VAR_38, VAR_39;
 const struct ast_vbios_enhtable *VAR_40 = ((void*)0);
 u32 VAR_41, VAR_42;
 bool VAR_43;

 switch (VAR_35->format->cpp[0] * 8) {
 case 8:
  VAR_33->std_table = &VAR_29[VAR_15];
  VAR_38 = VAR_15 - 1;
  break;
 case 16:
  VAR_33->std_table = &VAR_29[VAR_7];
  VAR_38 = VAR_7;
  break;
 case 24:
 case 32:
  VAR_33->std_table = &VAR_29[VAR_13];
  VAR_38 = VAR_13;
  break;
 default:
  return 0;
 }

 switch (VAR_30->mode.crtc_hdisplay) {
 case 640:
  VAR_33->enh_table = &VAR_27[VAR_36];
  break;
 case 800:
  VAR_33->enh_table = &VAR_28[VAR_36];
  break;
 case 1024:
  VAR_33->enh_table = &VAR_17[VAR_36];
  break;
 case 1280:
  if (VAR_30->mode.crtc_vdisplay == 800)
   VAR_33->enh_table = &VAR_19[VAR_36];
  else
   VAR_33->enh_table = &VAR_18[VAR_36];
  break;
 case 1360:
  VAR_33->enh_table = &VAR_20[VAR_36];
  break;
 case 1440:
  VAR_33->enh_table = &VAR_21[VAR_36];
  break;
 case 1600:
  if (VAR_30->mode.crtc_vdisplay == 900)
   VAR_33->enh_table = &VAR_23[VAR_36];
  else
   VAR_33->enh_table = &VAR_22[VAR_36];
  break;
 case 1680:
  VAR_33->enh_table = &VAR_24[VAR_36];
  break;
 case 1920:
  if (VAR_30->mode.crtc_vdisplay == 1080)
   VAR_33->enh_table = &VAR_25[VAR_36];
  else
   VAR_33->enh_table = &VAR_26[VAR_36];
  break;
 default:
  return 0;
 }

 VAR_39 = FUNC_1(VAR_31);
 VAR_43 = VAR_33->enh_table->flags & VAR_16;
 do {
  const struct ast_vbios_enhtable *VAR_44 = VAR_33->enh_table;

  while (VAR_44->refresh_rate != 0xff) {
   if ((VAR_43) &&
       (((VAR_31->flags & VAR_3) &&
         (VAR_44->flags & VAR_12)) ||
        ((VAR_31->flags & VAR_5) &&
         (VAR_44->flags & VAR_9)) ||
        ((VAR_31->flags & VAR_2) &&
         (VAR_44->flags & VAR_11)) ||
        ((VAR_31->flags & VAR_4) &&
         (VAR_44->flags & VAR_8)))) {
    VAR_44++;
    continue;
   }
   if (VAR_44->refresh_rate <= VAR_39
       && (!VAR_40 || VAR_44->refresh_rate > VAR_40->refresh_rate))
    VAR_40 = VAR_44;
   VAR_44++;
  }
  if (VAR_40 || !VAR_43)
   break;
  VAR_43 = 0;
 } while (1);
 if (VAR_40)
  VAR_33->enh_table = VAR_40;

 VAR_41 = (VAR_33->enh_table->flags & VAR_6) ? 8 : 0;
 VAR_42 = (VAR_33->enh_table->flags & VAR_14) ? 8 : 0;

 VAR_32->crtc_htotal = VAR_33->enh_table->ht;
 VAR_32->crtc_hblank_start = VAR_33->enh_table->hde + VAR_41;
 VAR_32->crtc_hblank_end = VAR_33->enh_table->ht - VAR_41;
 VAR_32->crtc_hsync_start = VAR_33->enh_table->hde + VAR_41 +
  VAR_33->enh_table->hfp;
 VAR_32->crtc_hsync_end = (VAR_33->enh_table->hde + VAR_41 +
      VAR_33->enh_table->hfp +
      VAR_33->enh_table->hsync);

 VAR_32->crtc_vtotal = VAR_33->enh_table->vt;
 VAR_32->crtc_vblank_start = VAR_33->enh_table->vde + VAR_42;
 VAR_32->crtc_vblank_end = VAR_33->enh_table->vt - VAR_42;
 VAR_32->crtc_vsync_start = VAR_33->enh_table->vde + VAR_42 +
  VAR_33->enh_table->vfp;
 VAR_32->crtc_vsync_end = (VAR_33->enh_table->vde + VAR_42 +
      VAR_33->enh_table->vfp +
      VAR_33->enh_table->vsync);

 VAR_36 = VAR_33->enh_table->refresh_rate_index;
 VAR_37 = VAR_33->enh_table->mode_id;

 if (VAR_34->chip == VAR_0) {

 } else {
  FUNC_0(VAR_34, VAR_1, 0x8c, (u8)((VAR_38 & 0xf) << 4));
  FUNC_0(VAR_34, VAR_1, 0x8d, VAR_36 & 0xff);
  FUNC_0(VAR_34, VAR_1, 0x8e, VAR_37 & 0xff);

  FUNC_0(VAR_34, VAR_1, 0x91, 0x00);
  if (VAR_33->enh_table->flags & VAR_10) {
   FUNC_0(VAR_34, VAR_1, 0x91, 0xa8);
   FUNC_0(VAR_34, VAR_1, 0x92,
       VAR_35->format->cpp[0] * 8);
   FUNC_0(VAR_34, VAR_1, 0x93, VAR_32->clock / 1000);
   FUNC_0(VAR_34, VAR_1, 0x94, VAR_32->crtc_hdisplay);
   FUNC_0(VAR_34, VAR_1, 0x95, VAR_32->crtc_hdisplay >> 8);

   FUNC_0(VAR_34, VAR_1, 0x96, VAR_32->crtc_vdisplay);
   FUNC_0(VAR_34, VAR_1, 0x97, VAR_32->crtc_vdisplay >> 8);
  }
 }

 return 1;


}
