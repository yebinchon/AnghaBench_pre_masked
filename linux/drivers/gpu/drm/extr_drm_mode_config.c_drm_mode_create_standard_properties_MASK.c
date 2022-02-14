
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* modifiers_property; struct drm_property* gamma_lut_size_property; struct drm_property* gamma_lut_property; struct drm_property* ctm_property; struct drm_property* degamma_lut_size_property; struct drm_property* degamma_lut_property; struct drm_property* prop_vrr_enabled; struct drm_property* prop_mode_id; struct drm_property* prop_active; struct drm_property* prop_fb_damage_clips; struct drm_property* prop_crtc_id; struct drm_property* prop_out_fence_ptr; struct drm_property* prop_in_fence_fd; struct drm_property* prop_fb_id; struct drm_property* prop_crtc_h; struct drm_property* prop_crtc_w; struct drm_property* prop_crtc_y; struct drm_property* prop_crtc_x; struct drm_property* prop_src_h; struct drm_property* prop_src_w; struct drm_property* prop_src_y; struct drm_property* prop_src_x; struct drm_property* plane_type_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct drm_device*) ;
 int VAR_10 ;
 struct drm_property* FUNC_2 (struct drm_device*,int,char*,int ) ;
 struct drm_property* FUNC_3 (struct drm_device*,int,char*) ;
 struct drm_property* FUNC_4 (struct drm_device*,int,char*,int ,int ) ;
 struct drm_property* FUNC_5 (struct drm_device*,int,char*,int ) ;
 struct drm_property* FUNC_6 (struct drm_device*,int,char*,int ,int ) ;
 struct drm_property* FUNC_7 (struct drm_device*,int,char*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_11)
{
 struct drm_property *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_12 = FUNC_4(VAR_11, VAR_4,
     "type", VAR_10,
     FUNC_0(VAR_10));
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.plane_type_property = VAR_12;

 VAR_12 = FUNC_6(VAR_11, VAR_2,
   "SRC_X", 0, VAR_9);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_src_x = VAR_12;

 VAR_12 = FUNC_6(VAR_11, VAR_2,
   "SRC_Y", 0, VAR_9);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_src_y = VAR_12;

 VAR_12 = FUNC_6(VAR_11, VAR_2,
   "SRC_W", 0, VAR_9);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_src_w = VAR_12;

 VAR_12 = FUNC_6(VAR_11, VAR_2,
   "SRC_H", 0, VAR_9);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_src_h = VAR_12;

 VAR_12 = FUNC_7(VAR_11, VAR_2,
   "CRTC_X", VAR_7, VAR_6);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_crtc_x = VAR_12;

 VAR_12 = FUNC_7(VAR_11, VAR_2,
   "CRTC_Y", VAR_7, VAR_6);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_crtc_y = VAR_12;

 VAR_12 = FUNC_6(VAR_11, VAR_2,
   "CRTC_W", 0, VAR_6);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_crtc_w = VAR_12;

 VAR_12 = FUNC_6(VAR_11, VAR_2,
   "CRTC_H", 0, VAR_6);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_crtc_h = VAR_12;

 VAR_12 = FUNC_5(VAR_11, VAR_2,
   "FB_ID", VAR_1);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_fb_id = VAR_12;

 VAR_12 = FUNC_7(VAR_11, VAR_2,
   "IN_FENCE_FD", -1, VAR_6);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_in_fence_fd = VAR_12;

 VAR_12 = FUNC_6(VAR_11, VAR_2,
   "OUT_FENCE_PTR", 0, VAR_8);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_out_fence_ptr = VAR_12;

 VAR_12 = FUNC_5(VAR_11, VAR_2,
   "CRTC_ID", VAR_0);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_crtc_id = VAR_12;

 VAR_12 = FUNC_2(VAR_11,
   VAR_2 | VAR_3,
   "FB_DAMAGE_CLIPS", 0);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_fb_damage_clips = VAR_12;

 VAR_12 = FUNC_3(VAR_11, VAR_2,
   "ACTIVE");
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_active = VAR_12;

 VAR_12 = FUNC_2(VAR_11,
   VAR_2 | VAR_3,
   "MODE_ID", 0);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_mode_id = VAR_12;

 VAR_12 = FUNC_3(VAR_11, 0,
   "VRR_ENABLED");
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.prop_vrr_enabled = VAR_12;

 VAR_12 = FUNC_2(VAR_11,
   VAR_3,
   "DEGAMMA_LUT", 0);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.degamma_lut_property = VAR_12;

 VAR_12 = FUNC_6(VAR_11,
   VAR_4,
   "DEGAMMA_LUT_SIZE", 0, VAR_9);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.degamma_lut_size_property = VAR_12;

 VAR_12 = FUNC_2(VAR_11,
   VAR_3,
   "CTM", 0);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.ctm_property = VAR_12;

 VAR_12 = FUNC_2(VAR_11,
   VAR_3,
   "GAMMA_LUT", 0);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.gamma_lut_property = VAR_12;

 VAR_12 = FUNC_6(VAR_11,
   VAR_4,
   "GAMMA_LUT_SIZE", 0, VAR_9);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.gamma_lut_size_property = VAR_12;

 VAR_12 = FUNC_2(VAR_11,
       VAR_4 | VAR_3,
       "IN_FORMATS", 0);
 if (!VAR_12)
  return -VAR_5;
 VAR_11->mode_config.modifiers_property = VAR_12;

 return 0;
}
