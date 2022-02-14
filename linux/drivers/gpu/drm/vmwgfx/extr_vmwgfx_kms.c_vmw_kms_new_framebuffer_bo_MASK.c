
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {scalar_t__ active_display_unit; struct drm_device* dev; } ;
struct vmw_framebuffer {int bo; int base; int user_handle; } ;
struct vmw_framebuffer_bo {struct vmw_framebuffer base; int buffer; } ;
struct TYPE_2__ {unsigned int num_pages; } ;
struct vmw_buffer_object {TYPE_1__ base; } ;
struct drm_mode_fb_cmd2 {unsigned int height; unsigned int* pitches; int pixel_format; int * handles; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,...) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct drm_device*,int *,int *) ;
 int FUNC_2 (int,struct drm_format_name_buf*) ;
 int FUNC_3 (struct drm_device*,int *,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_4 (struct vmw_framebuffer_bo*) ;
 struct vmw_framebuffer_bo* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct vmw_buffer_object*) ;
 int FUNC_8 (struct vmw_buffer_object**) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct vmw_private *VAR_6,
          struct vmw_buffer_object *VAR_7,
          struct vmw_framebuffer **VAR_8,
          const struct drm_mode_fb_cmd2
          *VAR_9)

{
 struct drm_device *VAR_10 = VAR_6->dev;
 struct vmw_framebuffer_bo *VAR_11;
 unsigned int VAR_12;
 struct drm_format_name_buf VAR_13;
 int VAR_14;

 VAR_12 = VAR_9->height * VAR_9->pitches[0];
 if (FUNC_6(VAR_12 > VAR_7->base.num_pages * VAR_3)) {
  FUNC_0("Screen buffer object size is too small "
     "for requested mode.\n");
  return -VAR_0;
 }


 if (VAR_6->active_display_unit == VAR_4) {
  switch (VAR_9->pixel_format) {
  case 128:
  case 131:
   break;
  case 129:
  case 130:
   break;
  default:
   FUNC_0("Invalid pixel format: %s\n",
      FUNC_2(VAR_9->pixel_format, &VAR_13));
   return -VAR_0;
  }
 }

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_14 = -VAR_1;
  goto out_err1;
 }

 FUNC_3(VAR_10, &VAR_11->base.base, VAR_9);
 VAR_11->base.bo = 1;
 VAR_11->buffer = FUNC_7(VAR_7);
 VAR_11->base.user_handle = VAR_9->handles[0];
 *VAR_8 = &VAR_11->base;

 VAR_14 = FUNC_1(VAR_10, &VAR_11->base.base,
       &VAR_5);
 if (VAR_14)
  goto out_err2;

 return 0;

out_err2:
 FUNC_8(&VAR_7);
 FUNC_4(VAR_11);
out_err1:
 return VAR_14;
}
