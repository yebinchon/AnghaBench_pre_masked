
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inno_hdmi {int dummy; } ;
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
 int FUNC_0 (struct inno_hdmi*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct inno_hdmi *VAR_20,
      struct drm_display_mode *VAR_21)
{
 int VAR_22;


 VAR_22 = FUNC_1(1);
 VAR_22 |= VAR_21->flags & VAR_1 ?
   FUNC_2(1) : FUNC_2(0);
 VAR_22 |= VAR_21->flags & VAR_2 ?
   FUNC_4(1) : FUNC_4(0);
 VAR_22 |= VAR_21->flags & VAR_0 ?
   FUNC_3(1) : FUNC_3(0);
 FUNC_0(VAR_20, VAR_19, VAR_22);


 VAR_22 = VAR_21->htotal;
 FUNC_0(VAR_20, VAR_13, VAR_22 & 0xFF);
 FUNC_0(VAR_20, VAR_12, (VAR_22 >> 8) & 0xFF);

 VAR_22 = VAR_21->htotal - VAR_21->hdisplay;
 FUNC_0(VAR_20, VAR_7, VAR_22 & 0xFF);
 FUNC_0(VAR_20, VAR_6, (VAR_22 >> 8) & 0xFF);

 VAR_22 = VAR_21->hsync_start - VAR_21->hdisplay;
 FUNC_0(VAR_20, VAR_9, VAR_22 & 0xFF);
 FUNC_0(VAR_20, VAR_8, (VAR_22 >> 8) & 0xFF);

 VAR_22 = VAR_21->hsync_end - VAR_21->hsync_start;
 FUNC_0(VAR_20, VAR_11, VAR_22 & 0xFF);
 FUNC_0(VAR_20, VAR_10, (VAR_22 >> 8) & 0xFF);

 VAR_22 = VAR_21->vtotal;
 FUNC_0(VAR_20, VAR_18, VAR_22 & 0xFF);
 FUNC_0(VAR_20, VAR_17, (VAR_22 >> 8) & 0xFF);

 VAR_22 = VAR_21->vtotal - VAR_21->vdisplay;
 FUNC_0(VAR_20, VAR_14, VAR_22 & 0xFF);

 VAR_22 = VAR_21->vsync_start - VAR_21->vdisplay;
 FUNC_0(VAR_20, VAR_15, VAR_22 & 0xFF);

 VAR_22 = VAR_21->vsync_end - VAR_21->vsync_start;
 FUNC_0(VAR_20, VAR_16, VAR_22 & 0xFF);

 FUNC_0(VAR_20, VAR_5, 0x1e);
 FUNC_0(VAR_20, VAR_4, 0x2c);
 FUNC_0(VAR_20, VAR_3, 0x01);

 return 0;
}
