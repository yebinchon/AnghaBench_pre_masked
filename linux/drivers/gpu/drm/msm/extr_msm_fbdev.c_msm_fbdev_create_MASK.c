
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct msm_fbdev {struct fb_info* fb; } ;
struct msm_drm_private {TYPE_1__* kms; } ;
struct TYPE_8__ {int yres; int xres; } ;
struct TYPE_7__ {int smem_len; void* smem_start; } ;
struct fb_info {struct drm_device* height; struct fb_info* width; TYPE_4__ var; int par; TYPE_3__ fix; int screen_size; struct fb_info* screen_base; int * fbops; } ;
struct drm_gem_object {int size; } ;
struct drm_framebuffer {struct drm_device* height; struct drm_framebuffer* width; TYPE_4__ var; int par; TYPE_3__ fix; int screen_size; struct drm_framebuffer* screen_base; int * fbops; } ;
struct drm_fb_helper_surface_size {int surface_height; int surface_width; int surface_bpp; int fb_height; int fb_width; int surface_depth; } ;
struct drm_fb_helper {struct fb_info* fb; struct drm_device* dev; } ;
struct TYPE_6__ {void* fb_base; } ;
struct drm_device {int struct_mutex; TYPE_2__ mode_config; int dev; struct msm_drm_private* dev_private; } ;
struct TYPE_5__ {int aspace; } ;


 int FUNC_0 (char*,struct fb_info*,struct drm_device*,...) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (int ,int ) ;
 struct fb_info* FUNC_5 (struct drm_fb_helper*) ;
 int FUNC_6 (struct fb_info*,struct drm_fb_helper*,struct drm_fb_helper_surface_size*) ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (int ,int ) ;
 struct fb_info* FUNC_9 (struct drm_device*,int ,int ,int,int ) ;
 int VAR_0 ;
 struct drm_gem_object* FUNC_10 (struct fb_info*,int ) ;
 int FUNC_11 (struct drm_gem_object*,int ,void**) ;
 struct fb_info* FUNC_12 (struct drm_gem_object*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct msm_fbdev* FUNC_15 (struct drm_fb_helper*) ;

__attribute__((used)) static int FUNC_16(struct drm_fb_helper *VAR_1,
  struct drm_fb_helper_surface_size *VAR_2)
{
 struct msm_fbdev *VAR_3 = FUNC_15(VAR_1);
 struct drm_device *VAR_4 = VAR_1->dev;
 struct msm_drm_private *VAR_5 = VAR_4->dev_private;
 struct drm_framebuffer *VAR_6 = ((void*)0);
 struct drm_gem_object *VAR_7;
 struct fb_info *VAR_8 = ((void*)0);
 uint64_t VAR_9;
 uint32_t VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_8(VAR_2->surface_bpp, VAR_2->surface_depth);

 FUNC_0("create fbdev: %dx%d@%d (%dx%d)", VAR_2->surface_width,
   VAR_2->surface_height, VAR_2->surface_bpp,
   VAR_2->fb_width, VAR_2->fb_height);

 VAR_12 = FUNC_4(VAR_2->surface_width, VAR_2->surface_bpp);
 VAR_6 = FUNC_9(VAR_4, VAR_2->surface_width,
   VAR_2->surface_height, VAR_12, VAR_10);

 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_4->dev, "failed to allocate fb\n");
  return FUNC_3(VAR_6);
 }

 VAR_7 = FUNC_10(VAR_6, 0);

 FUNC_13(&VAR_4->struct_mutex);






 VAR_11 = FUNC_11(VAR_7, VAR_5->kms->aspace, &VAR_9);
 if (VAR_11) {
  FUNC_1(VAR_4->dev, "failed to get buffer obj iova: %d\n", VAR_11);
  goto fail_unlock;
 }

 VAR_8 = FUNC_5(VAR_1);
 if (FUNC_2(VAR_8)) {
  FUNC_1(VAR_4->dev, "failed to allocate fb info\n");
  VAR_11 = FUNC_3(VAR_8);
  goto fail_unlock;
 }

 FUNC_0("fbi=%p, dev=%p", VAR_8, VAR_4);

 VAR_3->fb = VAR_6;
 VAR_1->fb = VAR_6;

 VAR_8->fbops = &VAR_0;

 FUNC_6(VAR_8, VAR_1, VAR_2);

 VAR_4->mode_config.fb_base = VAR_9;

 VAR_8->screen_base = FUNC_12(VAR_7);
 if (FUNC_2(VAR_8->screen_base)) {
  VAR_11 = FUNC_3(VAR_8->screen_base);
  goto fail_unlock;
 }
 VAR_8->screen_size = VAR_7->size;
 VAR_8->fix.smem_start = VAR_9;
 VAR_8->fix.smem_len = VAR_7->size;

 FUNC_0("par=%p, %dx%d", VAR_8->par, VAR_8->var.xres, VAR_8->var.yres);
 FUNC_0("allocated %dx%d fb", VAR_3->fb->width, VAR_3->fb->height);

 FUNC_14(&VAR_4->struct_mutex);

 return 0;

fail_unlock:
 FUNC_14(&VAR_4->struct_mutex);
 FUNC_7(VAR_6);
 return VAR_11;
}
