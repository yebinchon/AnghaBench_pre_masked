
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_tcon {int dclk_min_div; int dclk_max_div; int dclk; } ;
struct sun4i_rgb {int bridge; scalar_t__ panel; struct sun4i_tcon* tcon; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int hsync_end; int hsync_start; int vsync_end; int vsync_start; int clock; int hdisplay; int htotal; int vdisplay; int vtotal; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (char*) ;
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
 unsigned long long FUNC_1 (int ,unsigned long long) ;
 int FUNC_2 (unsigned long long,int) ;
 struct sun4i_rgb* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_mode_status FUNC_4(struct drm_encoder *VAR_12,
       const struct drm_display_mode *VAR_13)
{
 struct sun4i_rgb *VAR_14 = FUNC_3(VAR_12);
 struct sun4i_tcon *VAR_15 = VAR_14->tcon;
 u32 VAR_16 = VAR_13->hsync_end - VAR_13->hsync_start;
 u32 VAR_17 = VAR_13->vsync_end - VAR_13->vsync_start;
 unsigned long long VAR_18 = VAR_13->clock * 1000;
 unsigned long long VAR_19, VAR_20;
 unsigned long long VAR_21;

 FUNC_0("Validating modes...\n");

 if (VAR_16 < 1)
  return VAR_4;

 if (VAR_16 > 0x3ff)
  return VAR_5;

 if ((VAR_13->hdisplay < 1) || (VAR_13->htotal < 1))
  return VAR_6;

 if ((VAR_13->hdisplay > 0x7ff) || (VAR_13->htotal > 0xfff))
  return VAR_0;

 FUNC_0("Horizontal parameters OK\n");

 if (VAR_17 < 1)
  return VAR_8;

 if (VAR_17 > 0x3ff)
  return VAR_9;

 if ((VAR_13->vdisplay < 1) || (VAR_13->vtotal < 1))
  return VAR_10;

 if ((VAR_13->vdisplay > 0x7ff) || (VAR_13->vtotal > 0xfff))
  return VAR_1;

 FUNC_0("Vertical parameters OK\n");







 if (VAR_14->panel) {
  FUNC_0("RGB panel used, skipping clock rate checks");
  goto out;
 }





 if (!VAR_14->bridge)
  goto out;

 VAR_15->dclk_min_div = 6;
 VAR_15->dclk_max_div = 127;
 VAR_21 = FUNC_1(VAR_15->dclk, VAR_18);

 VAR_19 = VAR_18 * (1000 - VAR_11);
 FUNC_2(VAR_19, 1000);
 if (VAR_21 < VAR_19)
  return VAR_3;

 VAR_20 = VAR_18 * (1000 + VAR_11);
 FUNC_2(VAR_20, 1000);
 if (VAR_21 > VAR_20)
  return VAR_2;

out:
 FUNC_0("Clock rate OK\n");

 return VAR_7;
}
