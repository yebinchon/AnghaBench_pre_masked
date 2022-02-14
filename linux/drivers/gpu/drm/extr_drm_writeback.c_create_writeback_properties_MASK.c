
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* writeback_out_fence_ptr_property; struct drm_property* writeback_pixel_formats_property; struct drm_property* writeback_fb_id_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct drm_property* FUNC_0 (struct drm_device*,int,char*,int ) ;
 struct drm_property* FUNC_1 (struct drm_device*,int,char*,int ) ;
 struct drm_property* FUNC_2 (struct drm_device*,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_6)
{
 struct drm_property *VAR_7;

 if (!VAR_6->mode_config.writeback_fb_id_property) {
  VAR_7 = FUNC_1(VAR_6, VAR_1,
        "WRITEBACK_FB_ID",
        VAR_0);
  if (!VAR_7)
   return -VAR_4;
  VAR_6->mode_config.writeback_fb_id_property = VAR_7;
 }

 if (!VAR_6->mode_config.writeback_pixel_formats_property) {
  VAR_7 = FUNC_0(VAR_6, VAR_2 |
        VAR_1 |
        VAR_3,
        "WRITEBACK_PIXEL_FORMATS", 0);
  if (!VAR_7)
   return -VAR_4;
  VAR_6->mode_config.writeback_pixel_formats_property = VAR_7;
 }

 if (!VAR_6->mode_config.writeback_out_fence_ptr_property) {
  VAR_7 = FUNC_2(VAR_6, VAR_1,
       "WRITEBACK_OUT_FENCE_PTR", 0,
       VAR_5);
  if (!VAR_7)
   return -VAR_4;
  VAR_6->mode_config.writeback_out_fence_ptr_property = VAR_7;
 }

 return 0;
}
