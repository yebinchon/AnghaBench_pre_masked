
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_info {int interlaced; int v_sync_polarity; int h_sync_polarity; void* color_depth; void* ycbcr_coeff; void* dynamic_range; void* color_space; } ;
struct drm_display_mode {int flags; } ;
struct drm_display_info {int bpc; int color_formats; } ;
struct drm_bridge {struct analogix_dp_device* driver_private; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct drm_display_info display_info; } ;
struct analogix_dp_device {TYPE_2__* dev; struct video_info video_info; TYPE_1__ connector; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (struct drm_display_mode const*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,void**) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_16,
    const struct drm_display_mode *VAR_17,
    const struct drm_display_mode *VAR_18)
{
 struct analogix_dp_device *VAR_19 = VAR_16->driver_private;
 struct drm_display_info *VAR_20 = &VAR_19->connector.display_info;
 struct video_info *VAR_21 = &VAR_19->video_info;
 struct device_node *VAR_22 = VAR_19->dev->of_node;
 int VAR_23;


 VAR_21->interlaced = !!(VAR_18->flags & VAR_12);
 VAR_21->v_sync_polarity = !!(VAR_18->flags & VAR_14);
 VAR_21->h_sync_polarity = !!(VAR_18->flags & VAR_13);


 VAR_23 = FUNC_0(VAR_18);
 if ((VAR_23 == 6) || (VAR_23 == 7) || (VAR_23 == 21) || (VAR_23 == 22) ||
     (VAR_23 == 2) || (VAR_23 == 3) || (VAR_23 == 17) || (VAR_23 == 18)) {
  VAR_21->dynamic_range = VAR_0;
  VAR_21->ycbcr_coeff = VAR_8;
 } else if (VAR_23) {
  VAR_21->dynamic_range = VAR_0;
  VAR_21->ycbcr_coeff = VAR_9;
 } else {
  VAR_21->dynamic_range = VAR_15;
  VAR_21->ycbcr_coeff = VAR_9;
 }


 switch (VAR_20->bpc) {
 case 12:
  VAR_21->color_depth = VAR_2;
  break;
 case 10:
  VAR_21->color_depth = VAR_1;
  break;
 case 8:
  VAR_21->color_depth = VAR_4;
  break;
 case 6:
  VAR_21->color_depth = VAR_3;
  break;
 default:
  VAR_21->color_depth = VAR_4;
  break;
 }
 if (VAR_20->color_formats & VAR_11)
  VAR_21->color_space = VAR_7;
 else if (VAR_20->color_formats & VAR_10)
  VAR_21->color_space = VAR_6;
 else
  VAR_21->color_space = VAR_5;
 FUNC_2(VAR_22, "samsung,color-space",
        &VAR_21->color_space);
 FUNC_2(VAR_22, "samsung,dynamic-range",
        &VAR_21->dynamic_range);
 FUNC_2(VAR_22, "samsung,ycbcr-coeff",
        &VAR_21->ycbcr_coeff);
 FUNC_2(VAR_22, "samsung,color-depth",
        &VAR_21->color_depth);
 if (FUNC_1(VAR_22, "hsync-active-high"))
  VAR_21->h_sync_polarity = 1;
 if (FUNC_1(VAR_22, "vsync-active-high"))
  VAR_21->v_sync_polarity = 1;
 if (FUNC_1(VAR_22, "interlaced"))
  VAR_21->interlaced = 1;
}
