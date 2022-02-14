
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_bridge {struct hdmi* hdmi; } ;
struct hdmi {int pixclock; scalar_t__ hdmi_mode; } ;
struct drm_display_mode {int clock; int htotal; int hsync_start; int hdisplay; int vtotal; int vsync_start; int vdisplay; int flags; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct hdmi*,int ,int) ;
 int FUNC_11 (struct hdmi*) ;
 struct hdmi_bridge* FUNC_12 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_13(struct drm_bridge *VAR_12,
   const struct drm_display_mode *VAR_13,
   const struct drm_display_mode *VAR_14)
{
 struct hdmi_bridge *VAR_15 = FUNC_12(VAR_12);
 struct hdmi *VAR_16 = VAR_15->hdmi;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 uint32_t VAR_21;

 VAR_13 = VAR_14;

 VAR_16->pixclock = VAR_13->clock * 1000;

 VAR_17 = VAR_13->htotal - VAR_13->hsync_start;
 VAR_18 = VAR_13->htotal - VAR_13->hsync_start + VAR_13->hdisplay;

 VAR_19 = VAR_13->vtotal - VAR_13->vsync_start - 1;
 VAR_20 = VAR_13->vtotal - VAR_13->vsync_start + VAR_13->vdisplay - 1;

 FUNC_0("htotal=%d, vtotal=%d, hstart=%d, hend=%d, vstart=%d, vend=%d",
   VAR_13->htotal, VAR_13->vtotal, VAR_17, VAR_18, VAR_19, VAR_20);

 FUNC_10(VAR_16, VAR_9,
   FUNC_5(VAR_13->htotal - 1) |
   FUNC_6(VAR_13->vtotal - 1));

 FUNC_10(VAR_16, VAR_6,
   FUNC_2(VAR_17) |
   FUNC_1(VAR_18));
 FUNC_10(VAR_16, VAR_7,
   FUNC_4(VAR_19) |
   FUNC_3(VAR_20));

 if (VAR_13->flags & VAR_0) {
  FUNC_10(VAR_16, VAR_11,
    FUNC_9(VAR_13->vtotal));
  FUNC_10(VAR_16, VAR_10,
    FUNC_8(VAR_19 + 1) |
    FUNC_7(VAR_20 + 1));
 } else {
  FUNC_10(VAR_16, VAR_11,
    FUNC_9(0));
  FUNC_10(VAR_16, VAR_10,
    FUNC_8(0) |
    FUNC_7(0));
 }

 VAR_21 = 0;
 if (VAR_13->flags & VAR_1)
  VAR_21 |= VAR_3;
 if (VAR_13->flags & VAR_2)
  VAR_21 |= VAR_5;
 if (VAR_13->flags & VAR_0)
  VAR_21 |= VAR_4;
 FUNC_0("frame_ctrl=%08x", VAR_21);
 FUNC_10(VAR_16, VAR_8, VAR_21);

 if (VAR_16->hdmi_mode)
  FUNC_11(VAR_16);
}
