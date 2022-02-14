
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int crtc_htotal; int crtc_hdisplay; int crtc_hsync_end; int crtc_hsync_start; int flags; int crtc_vtotal; int crtc_vdisplay; int crtc_vsync_end; int crtc_vsync_start; int crtc_hblank_end; int crtc_hblank_start; int crtc_vblank_end; int crtc_vblank_start; } ;
struct radeon_crtc {int rmx_type; struct drm_display_mode native_mode; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int scale ;
typedef int blank_width ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct radeon_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_29,
           struct drm_display_mode *VAR_30)
{
 struct drm_device *VAR_31 = VAR_29->dev;
 struct radeon_device *VAR_32 = VAR_31->dev_private;
 struct radeon_crtc *VAR_33 = FUNC_2(VAR_29);
 int VAR_34 = VAR_30->hdisplay;
 int VAR_35 = VAR_30->vdisplay;
 bool VAR_36 = 1, VAR_37 = 1;
 int VAR_38;
 int VAR_39;
 int VAR_40;
 int VAR_41;
 u32 VAR_42, VAR_43, VAR_44;
 u32 VAR_45, VAR_46, VAR_47;
 u32 VAR_48, VAR_49;
 u32 VAR_50, VAR_51;
 struct drm_display_mode *VAR_52 = &VAR_33->native_mode;

 VAR_46 = FUNC_0(VAR_15) &
  (VAR_28 |
   VAR_23);
 VAR_45 = FUNC_0(VAR_12) &
  (VAR_18 |
   VAR_17);

 VAR_44 = 0;
 if ((VAR_32->family == VAR_0) ||
     (VAR_32->family == VAR_1)) {


  VAR_44 |= VAR_6;
 }


 VAR_49 = ((((VAR_30->crtc_htotal / 8) - 1) & 0x3ff)
    | ((((VAR_30->crtc_hdisplay / 8) - 1) & 0x1ff) << 16));

 VAR_38 = (VAR_30->crtc_hsync_end - VAR_30->crtc_hsync_start) / 8;
 if (!VAR_38)
  VAR_38 = 1;
 VAR_40 = VAR_30->crtc_hsync_start - 8;

 VAR_48 = ((VAR_40 & 0x1fff)
         | ((VAR_38 & 0x3f) << 16)
         | ((VAR_30->flags & VAR_2)
     ? VAR_7
     : 0));

 VAR_51 = (((VAR_30->crtc_vtotal - 1) & 0xffff)
    | ((VAR_30->crtc_vdisplay - 1) << 16));

 VAR_39 = VAR_30->crtc_vsync_end - VAR_30->crtc_vsync_start;
 if (!VAR_39)
  VAR_39 = 1;

 VAR_50 = (((VAR_30->crtc_vsync_start - 1) & 0xfff)
         | ((VAR_39 & 0x1f) << 16)
         | ((VAR_30->flags & VAR_3)
     ? VAR_9
     : 0));

 VAR_47 = 0;

 if (VAR_52->hdisplay == 0 ||
     VAR_52->vdisplay == 0) {
  VAR_36 = 0;
  VAR_37 = 0;
 } else {
  if (VAR_34 > VAR_52->hdisplay)
   VAR_34 = VAR_52->hdisplay;
  if (VAR_35 > VAR_52->vdisplay)
   VAR_35 = VAR_52->vdisplay;

  if (VAR_34 == VAR_52->hdisplay)
   VAR_36 = 0;
  if (VAR_35 == VAR_52->vdisplay)
   VAR_37 = 0;
 }

 switch (VAR_33->rmx_type) {
 case 129:
 case 131:
  if (!VAR_36)
   VAR_45 |= ((VAR_34/8-1) << 16);
  else {
   VAR_43 = (VAR_45 & VAR_17) ? 1 : 0;
   VAR_42 = ((VAR_34 + VAR_43) * VAR_22)
    / VAR_52->hdisplay + 1;
   VAR_45 |= (((VAR_42) & VAR_21) |
     VAR_19 |
     VAR_20 |
     ((VAR_52->hdisplay/8-1) << 16));
  }

  if (!VAR_37)
   VAR_46 |= ((VAR_35-1) << 12);
  else {
   VAR_43 = (VAR_46 & VAR_23) ? 1 : 0;
   VAR_42 = ((VAR_35 + VAR_43) * VAR_27)
    / VAR_52->vdisplay + 1;
   VAR_46 |= (((VAR_42) & VAR_26) |
     VAR_25 |
     VAR_24 |
     ((VAR_52->vdisplay-1) << 12));
  }
  break;
 case 130:
  VAR_45 |= ((VAR_34/8-1) << 16);
  VAR_46 |= ((VAR_35-1) << 12);

  VAR_44 |= (VAR_4 |
    VAR_5);

  VAR_41 = (VAR_30->crtc_hblank_end - VAR_30->crtc_hblank_start) / 8;
  if (VAR_41 > 110)
   VAR_41 = 110;

  VAR_49 = (((VAR_41) & 0x3ff)
    | ((((VAR_30->crtc_hdisplay / 8) - 1) & 0x1ff) << 16));

  VAR_38 = (VAR_30->crtc_hsync_end - VAR_30->crtc_hsync_start) / 8;
  if (!VAR_38)
   VAR_38 = 1;

  VAR_48 = ((((VAR_30->crtc_hsync_start - VAR_30->crtc_hblank_start) / 8) & 0x1fff)
    | ((VAR_38 & 0x3f) << 16)
    | ((VAR_30->flags & VAR_2)
     ? VAR_7
     : 0));

  VAR_51 = (((VAR_30->crtc_vblank_end - VAR_30->crtc_vblank_start) & 0xffff)
    | ((VAR_30->crtc_vdisplay - 1) << 16));

  VAR_39 = VAR_30->crtc_vsync_end - VAR_30->crtc_vsync_start;
  if (!VAR_39)
   VAR_39 = 1;

  VAR_50 = ((((VAR_30->crtc_vsync_start - VAR_30->crtc_vblank_start) & 0xfff)
     | ((VAR_39 & 0x1f) << 16)
     | ((VAR_30->flags & VAR_3)
      ? VAR_9
      : 0)));

  VAR_47 = (((VAR_52->vdisplay) & 0xfff) |
    (((VAR_52->hdisplay / 8) & 0x1ff) << 16));
  break;
 case 128:
 default:
  VAR_45 |= ((VAR_34/8-1) << 16);
  VAR_46 |= ((VAR_35-1) << 12);
  break;
 }

 FUNC_1(VAR_12, VAR_45);
 FUNC_1(VAR_15, VAR_46);
 FUNC_1(VAR_8, VAR_44);
 FUNC_1(VAR_13, VAR_47);
 FUNC_1(VAR_14, VAR_48);
 FUNC_1(VAR_16, VAR_50);
 FUNC_1(VAR_10, VAR_49);
 FUNC_1(VAR_11, VAR_51);
}
