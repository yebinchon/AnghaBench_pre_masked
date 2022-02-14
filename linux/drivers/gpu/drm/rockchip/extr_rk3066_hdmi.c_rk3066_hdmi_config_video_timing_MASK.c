
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vic; } ;
struct rk3066_hdmi {TYPE_1__ hdmi_data; } ;
struct drm_display_mode {int flags; int htotal; int hdisplay; int hsync_start; int hsync_end; int vtotal; int vdisplay; int vsync_start; int vsync_end; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct rk3066_hdmi*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct rk3066_hdmi *VAR_25,
        struct drm_display_mode *VAR_26)
{
 int VAR_27, VAR_28;


 VAR_27 = VAR_15;
 VAR_27 |= VAR_26->flags & VAR_1 ?
   VAR_18 : VAR_19;
 VAR_27 |= VAR_26->flags & VAR_2 ?
   VAR_22 : VAR_23;
 VAR_27 |= VAR_26->flags & VAR_0 ?
   VAR_20 : VAR_21;

 if (VAR_25->hdmi_data.vic == 2 || VAR_25->hdmi_data.vic == 3)
  VAR_28 = 6;
 else
  VAR_28 = 0;

 VAR_27 |= VAR_28 << VAR_24;
 FUNC_0(VAR_25, VAR_14, VAR_27);


 VAR_27 = VAR_26->htotal;
 FUNC_0(VAR_25, VAR_10, VAR_27 & 0xFF);
 FUNC_0(VAR_25, VAR_9, (VAR_27 >> 8) & 0xFF);

 VAR_27 = VAR_26->htotal - VAR_26->hdisplay;
 FUNC_0(VAR_25, VAR_4, VAR_27 & 0xFF);
 FUNC_0(VAR_25, VAR_3, (VAR_27 >> 8) & 0xFF);

 VAR_27 = VAR_26->htotal - VAR_26->hsync_start;
 FUNC_0(VAR_25, VAR_6, VAR_27 & 0xFF);
 FUNC_0(VAR_25, VAR_5, (VAR_27 >> 8) & 0xFF);

 VAR_27 = VAR_26->hsync_end - VAR_26->hsync_start;
 FUNC_0(VAR_25, VAR_8, VAR_27 & 0xFF);
 FUNC_0(VAR_25, VAR_7, (VAR_27 >> 8) & 0xFF);

 VAR_27 = VAR_26->vtotal;
 FUNC_0(VAR_25, VAR_17, VAR_27 & 0xFF);
 FUNC_0(VAR_25, VAR_16, (VAR_27 >> 8) & 0xFF);

 VAR_27 = VAR_26->vtotal - VAR_26->vdisplay;
 FUNC_0(VAR_25, VAR_11, VAR_27 & 0xFF);

 VAR_27 = VAR_26->vtotal - VAR_26->vsync_start + VAR_28;
 FUNC_0(VAR_25, VAR_12, VAR_27 & 0xFF);

 VAR_27 = VAR_26->vsync_end - VAR_26->vsync_start;
 FUNC_0(VAR_25, VAR_13, VAR_27 & 0xFF);

 return 0;
}
