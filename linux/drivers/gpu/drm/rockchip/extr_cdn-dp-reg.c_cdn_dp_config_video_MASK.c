
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct video_info {int color_fmt; int color_depth; int h_sync_polarity; int v_sync_polarity; } ;
struct drm_display_mode {int clock; int hsync_start; int hdisplay; int htotal; int hsync_end; int vtotal; int vsync_start; int vsync_end; int vdisplay; } ;
struct TYPE_2__ {int rate; int num_lanes; } ;
struct cdn_dp_device {int dev; TYPE_1__ link; struct drm_display_mode mode; struct video_info video_info; } ;


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
 int FUNC_0 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,char*,int,...) ;
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
 int FUNC_2 (struct video_info*,struct drm_display_mode*) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int) ;
 int FUNC_4 (struct cdn_dp_device*,int ,int,int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct cdn_dp_device *VAR_29)
{
 struct video_info *VAR_30 = &VAR_29->video_info;
 struct drm_display_mode *VAR_31 = &VAR_29->mode;
 u64 VAR_32;
 u32 VAR_33, VAR_34, VAR_35;
 u8 VAR_36, VAR_37 = VAR_26;
 int VAR_38;

 VAR_36 = (VAR_30->color_fmt == VAR_28) ?
        (VAR_30->color_depth * 2) : (VAR_30->color_depth * 3);

 VAR_34 = VAR_29->link.rate / 1000;

 VAR_38 = FUNC_3(VAR_29, VAR_5, VAR_27);
 if (VAR_38)
  goto err_config_video;

 VAR_38 = FUNC_3(VAR_29, VAR_18, 0);
 if (VAR_38)
  goto err_config_video;
 do {
  VAR_37 += 2;
  VAR_32 = VAR_37 * VAR_31->clock * VAR_36;
  FUNC_6(VAR_32, VAR_29->link.num_lanes * VAR_34 * 8);
  VAR_35 = FUNC_6(VAR_32, 1000);
  if (VAR_37 > 64) {
   VAR_38 = -VAR_17;
   FUNC_1(VAR_29->dev,
          "tu error, clk:%d, lanes:%d, rate:%d\n",
          VAR_31->clock, VAR_29->link.num_lanes,
          VAR_34);
   goto err_config_video;
  }
 } while ((VAR_32 <= 1) || (VAR_37 - VAR_32 < 4) ||
   (VAR_35 > 850) || (VAR_35 < 100));

 VAR_33 = VAR_32 + (VAR_37 << 8);
 VAR_33 |= VAR_25;
 VAR_38 = FUNC_3(VAR_29, VAR_11, VAR_33);
 if (VAR_38)
  goto err_config_video;


 VAR_33 = FUNC_5(VAR_31->clock * (VAR_32 + 1), 1000) + VAR_34;
 VAR_33 /= (VAR_29->link.num_lanes * VAR_34);
 VAR_33 = FUNC_5(8 * (VAR_32 + 1), VAR_36) - VAR_33;
 VAR_33 += 2;
 VAR_38 = FUNC_3(VAR_29, FUNC_0(15), VAR_33);

 switch (VAR_30->color_depth) {
 case 6:
  VAR_33 = VAR_3;
  break;
 case 8:
  VAR_33 = VAR_4;
  break;
 case 10:
  VAR_33 = VAR_0;
  break;
 case 12:
  VAR_33 = VAR_1;
  break;
 case 16:
  VAR_33 = VAR_2;
  break;
 };

 VAR_33 += VAR_30->color_fmt << 8;
 VAR_38 = FUNC_3(VAR_29, VAR_7, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_30->h_sync_polarity ? VAR_9 : 0;
 VAR_33 |= VAR_30->v_sync_polarity ? VAR_10 : 0;
 VAR_38 = FUNC_3(VAR_29, VAR_8, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = (VAR_31->hsync_start - VAR_31->hdisplay) << 16;
 VAR_33 |= VAR_31->htotal - VAR_31->hsync_end;
 VAR_38 = FUNC_3(VAR_29, VAR_12, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_31->hdisplay * VAR_36 / 8;
 VAR_38 = FUNC_3(VAR_29, VAR_6, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_31->htotal | ((VAR_31->htotal - VAR_31->hsync_start) << 16);
 VAR_38 = FUNC_3(VAR_29, VAR_19, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_31->hsync_end - VAR_31->hsync_start;
 VAR_33 |= (VAR_31->hdisplay << 16) | (VAR_30->h_sync_polarity << 15);
 VAR_38 = FUNC_3(VAR_29, VAR_20, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_31->vtotal;
 VAR_33 |= (VAR_31->vtotal - VAR_31->vsync_start) << 16;
 VAR_38 = FUNC_3(VAR_29, VAR_22, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_31->vsync_end - VAR_31->vsync_start;
 VAR_33 |= (VAR_31->vdisplay << 16) | (VAR_30->v_sync_polarity << 15);
 VAR_38 = FUNC_3(VAR_29, VAR_23, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = FUNC_2(VAR_30, VAR_31);
 VAR_38 = FUNC_3(VAR_29, VAR_21, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_38 = FUNC_3(VAR_29, VAR_24, 1);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_31->hsync_end - VAR_31->hsync_start;
 VAR_33 |= VAR_31->hdisplay << 16;
 VAR_38 = FUNC_3(VAR_29, VAR_13, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_31->vdisplay;
 VAR_33 |= (VAR_31->vtotal - VAR_31->vsync_start) << 16;
 VAR_38 = FUNC_3(VAR_29, VAR_15, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_33 = VAR_31->vtotal;
 VAR_38 = FUNC_3(VAR_29, VAR_16, VAR_33);
 if (VAR_38)
  goto err_config_video;

 VAR_38 = FUNC_4(VAR_29, VAR_14, 2, 1, 0);

err_config_video:
 if (VAR_38)
  FUNC_1(VAR_29->dev, "config video failed: %d\n", VAR_38);
 return VAR_38;
}
