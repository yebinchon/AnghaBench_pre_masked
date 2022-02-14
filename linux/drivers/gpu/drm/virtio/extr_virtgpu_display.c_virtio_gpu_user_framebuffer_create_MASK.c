
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct virtio_gpu_framebuffer {struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {scalar_t__ pixel_format; int * handles; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 int VAR_5 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct virtio_gpu_framebuffer*) ;
 struct virtio_gpu_framebuffer* FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_device*,struct virtio_gpu_framebuffer*,struct drm_mode_fb_cmd2 const*,struct drm_gem_object*) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_6(struct drm_device *VAR_6,
       struct drm_file *VAR_7,
       const struct drm_mode_fb_cmd2 *VAR_8)
{
 struct drm_gem_object *VAR_9 = ((void*)0);
 struct virtio_gpu_framebuffer *VAR_10;
 int VAR_11;

 if (VAR_8->pixel_format != VAR_1 &&
     VAR_8->pixel_format != VAR_0)
  return FUNC_0(-VAR_3);


 VAR_9 = FUNC_1(VAR_7, VAR_8->handles[0]);
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_5);
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_4);

 VAR_11 = FUNC_5(VAR_6, VAR_10, VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_10);
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 return &VAR_10->base;
}
