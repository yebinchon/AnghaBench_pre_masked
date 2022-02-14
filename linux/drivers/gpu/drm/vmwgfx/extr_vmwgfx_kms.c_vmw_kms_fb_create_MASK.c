
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_surface {int dummy; } ;
struct vmw_private {int capabilities; int texture_max_height; int texture_max_width; } ;
struct drm_framebuffer {int dummy; } ;
struct vmw_framebuffer {struct drm_framebuffer base; struct ttm_base_object* user_obj; } ;
struct vmw_buffer_object {int dummy; } ;
struct ttm_object_file {int dummy; } ;
struct ttm_base_object {int dummy; } ;
struct drm_mode_fb_cmd2 {int height; int width; int * handles; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct ttm_object_file* tfile; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vmw_framebuffer*) ;
 int FUNC_3 (struct vmw_framebuffer*) ;
 int VAR_1 ;
 struct ttm_base_object* FUNC_4 (struct ttm_object_file*,int ) ;
 int FUNC_5 (struct ttm_base_object**) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct vmw_buffer_object**) ;
 TYPE_1__* FUNC_8 (struct drm_file*) ;
 struct vmw_framebuffer* FUNC_9 (struct vmw_private*,struct vmw_buffer_object*,struct vmw_surface*,int,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_10 (struct vmw_private*,int ,int ) ;
 struct vmw_private* FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct vmw_surface**) ;
 int FUNC_13 (struct vmw_private*,struct ttm_object_file*,int ,struct vmw_surface**,struct vmw_buffer_object**) ;

__attribute__((used)) static struct drm_framebuffer *FUNC_14(struct drm_device *VAR_2,
       struct drm_file *VAR_3,
       const struct drm_mode_fb_cmd2 *VAR_4)
{
 struct vmw_private *VAR_5 = FUNC_11(VAR_2);
 struct ttm_object_file *VAR_6 = FUNC_8(VAR_3)->tfile;
 struct vmw_framebuffer *VAR_7 = ((void*)0);
 struct vmw_surface *VAR_8 = ((void*)0);
 struct vmw_buffer_object *VAR_9 = ((void*)0);
 struct ttm_base_object *VAR_10;
 int VAR_11;
 VAR_10 = FUNC_4(VAR_6, VAR_4->handles[0]);
 if (FUNC_6(VAR_10 == ((void*)0))) {
  FUNC_0("Could not locate requested kms frame buffer.\n");
  return FUNC_1(-VAR_0);
 }






 VAR_11 = FUNC_13(VAR_5, VAR_6,
         VAR_4->handles[0],
         &VAR_8, &VAR_9);
 if (VAR_11)
  goto err_out;


 if (!VAR_9 &&
     !FUNC_10(VAR_5, VAR_4->width, VAR_4->height)) {
  FUNC_0("Surface size cannot exceed %dx%d",
   VAR_5->texture_max_width,
   VAR_5->texture_max_height);
  goto err_out;
 }


 VAR_7 = FUNC_9(VAR_5, VAR_9, VAR_8,
          !(VAR_5->capabilities & VAR_1),
          VAR_4);
 if (FUNC_2(VAR_7)) {
  VAR_11 = FUNC_3(VAR_7);
  goto err_out;
  }

err_out:

 if (VAR_9)
  FUNC_7(&VAR_9);
 if (VAR_8)
  FUNC_12(&VAR_8);

 if (VAR_11) {
  FUNC_0("failed to create vmw_framebuffer: %i\n", VAR_11);
  FUNC_5(&VAR_10);
  return FUNC_1(VAR_11);
 } else
  VAR_7->user_obj = VAR_10;

 return &VAR_7->base;
}
