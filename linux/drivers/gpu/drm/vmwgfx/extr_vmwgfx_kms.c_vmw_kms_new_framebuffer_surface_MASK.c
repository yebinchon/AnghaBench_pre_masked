
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ width; scalar_t__ height; int depth; } ;
struct vmw_surface {int* mip_levels; int num_sizes; int format; TYPE_1__ base_size; int scanout; } ;
struct vmw_private {scalar_t__ active_display_unit; int has_dx; struct drm_device* dev; } ;
struct vmw_framebuffer {int base; int user_handle; } ;
struct vmw_framebuffer_surface {int is_bo_proxy; struct vmw_framebuffer base; int surface; } ;
struct drm_mode_fb_cmd2 {scalar_t__ width; scalar_t__ height; int pixel_format; int * handles; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum SVGA3dSurfaceFormat { ____Placeholder_SVGA3dSurfaceFormat } SVGA3dSurfaceFormat ;


 int FUNC_0 (char*,...) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct drm_device*,int *,int *) ;
 int FUNC_2 (int,struct drm_format_name_buf*) ;
 int FUNC_3 (struct drm_device*,int *,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_4 (struct vmw_framebuffer_surface*) ;
 struct vmw_framebuffer_surface* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct vmw_surface*) ;
 int FUNC_8 (struct vmw_surface**) ;

__attribute__((used)) static int FUNC_9(struct vmw_private *VAR_10,
        struct vmw_surface *VAR_11,
        struct vmw_framebuffer **VAR_12,
        const struct drm_mode_fb_cmd2
        *VAR_13,
        bool VAR_14)

{
 struct drm_device *VAR_15 = VAR_10->dev;
 struct vmw_framebuffer_surface *VAR_16;
 enum SVGA3dSurfaceFormat VAR_17;
 int VAR_18;
 struct drm_format_name_buf VAR_19;


 if (VAR_10->active_display_unit == VAR_8)
  return -VAR_2;






 if (FUNC_6(!VAR_11->scanout))
  return -VAR_0;

 if (FUNC_6(VAR_11->mip_levels[0] != 1 ||
       VAR_11->num_sizes != 1 ||
       VAR_11->base_size.width < VAR_13->width ||
       VAR_11->base_size.height < VAR_13->height ||
       VAR_11->base_size.depth != 1)) {
  FUNC_0("Incompatible surface dimensions "
     "for requested mode.\n");
  return -VAR_0;
 }

 switch (VAR_13->pixel_format) {
 case 131:
  VAR_17 = VAR_5;
  break;
 case 128:
  VAR_17 = VAR_7;
  break;
 case 130:
  VAR_17 = VAR_6;
  break;
 case 129:
  VAR_17 = VAR_4;
  break;
 default:
  FUNC_0("Invalid pixel format: %s\n",
     FUNC_2(VAR_13->pixel_format, &VAR_19));
  return -VAR_0;
 }





 if (!VAR_10->has_dx && VAR_17 != VAR_11->format) {
  FUNC_0("Invalid surface format for requested mode.\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_3);
 if (!VAR_16) {
  VAR_18 = -VAR_1;
  goto out_err1;
 }

 FUNC_3(VAR_15, &VAR_16->base.base, VAR_13);
 VAR_16->surface = FUNC_7(VAR_11);
 VAR_16->base.user_handle = VAR_13->handles[0];
 VAR_16->is_bo_proxy = VAR_14;

 *VAR_12 = &VAR_16->base;

 VAR_18 = FUNC_1(VAR_15, &VAR_16->base.base,
       &VAR_9);
 if (VAR_18)
  goto out_err2;

 return 0;

out_err2:
 FUNC_8(&VAR_11);
 FUNC_4(VAR_16);
out_err1:
 return VAR_18;
}
