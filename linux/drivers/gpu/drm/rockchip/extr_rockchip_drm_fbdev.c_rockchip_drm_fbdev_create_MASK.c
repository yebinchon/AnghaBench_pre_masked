
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int size; } ;
struct TYPE_9__ {int smem_len; } ;
struct TYPE_7__ {unsigned int xoffset; unsigned long yoffset; } ;
struct rockchip_gem_object {unsigned long* pitches; TYPE_5__ base; scalar_t__ kvaddr; TYPE_4__* format; int height; int width; TYPE_3__ fix; int screen_size; scalar_t__ screen_base; TYPE_1__ var; int * fbops; } ;
struct rockchip_drm_private {TYPE_5__* fbdev_bo; } ;
struct fb_info {unsigned long* pitches; TYPE_5__ base; scalar_t__ kvaddr; TYPE_4__* format; int height; int width; TYPE_3__ fix; int screen_size; scalar_t__ screen_base; TYPE_1__ var; int * fbops; } ;
struct drm_mode_fb_cmd2 {unsigned int width; size_t height; unsigned int* pitches; int pixel_format; int member_0; } ;
struct drm_framebuffer {unsigned long* pitches; TYPE_5__ base; scalar_t__ kvaddr; TYPE_4__* format; int height; int width; TYPE_3__ fix; int screen_size; scalar_t__ screen_base; TYPE_1__ var; int * fbops; } ;
struct drm_fb_helper_surface_size {unsigned int surface_width; size_t surface_height; int surface_depth; int surface_bpp; } ;
struct drm_fb_helper {struct rockchip_gem_object* fb; struct drm_device* dev; } ;
struct TYPE_8__ {scalar_t__ fb_base; } ;
struct drm_device {TYPE_2__ mode_config; int dev; } ;
struct TYPE_10__ {int depth; } ;


 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ,int ,int ,scalar_t__,unsigned long,size_t) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct rockchip_gem_object*) ;
 int FUNC_4 (struct rockchip_gem_object*) ;
 struct rockchip_gem_object* FUNC_5 (struct drm_fb_helper*) ;
 int FUNC_6 (struct rockchip_gem_object*,struct drm_fb_helper*,struct drm_fb_helper_surface_size*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 struct rockchip_gem_object* FUNC_8 (struct drm_device*,struct drm_mode_fb_cmd2*,TYPE_5__*) ;
 struct rockchip_gem_object* FUNC_9 (struct drm_device*,size_t,int) ;
 int FUNC_10 (TYPE_5__*) ;
 struct rockchip_drm_private* FUNC_11 (struct drm_fb_helper*) ;

__attribute__((used)) static int FUNC_12(struct drm_fb_helper *VAR_2,
         struct drm_fb_helper_surface_size *VAR_3)
{
 struct rockchip_drm_private *VAR_4 = FUNC_11(VAR_2);
 struct drm_mode_fb_cmd2 VAR_5 = { 0 };
 struct drm_device *VAR_6 = VAR_2->dev;
 struct rockchip_gem_object *VAR_7;
 struct drm_framebuffer *VAR_8;
 unsigned int VAR_9;
 unsigned long VAR_10;
 struct fb_info *VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_9 = FUNC_0(VAR_3->surface_bpp, 8);

 VAR_5.width = VAR_3->surface_width;
 VAR_5.height = VAR_3->surface_height;
 VAR_5.pitches[0] = VAR_3->surface_width * VAR_9;
 VAR_5.pixel_format = FUNC_7(VAR_3->surface_bpp,
  VAR_3->surface_depth);

 VAR_12 = VAR_5.pitches[0] * VAR_5.height;

 VAR_7 = FUNC_9(VAR_6, VAR_12, 1);
 if (FUNC_3(VAR_7))
  return -VAR_0;

 VAR_4->fbdev_bo = &VAR_7->base;

 VAR_11 = FUNC_5(VAR_2);
 if (FUNC_3(VAR_11)) {
  FUNC_2(VAR_6->dev, "Failed to create framebuffer info.\n");
  VAR_13 = FUNC_4(VAR_11);
  goto out;
 }

 VAR_2->fb = FUNC_8(VAR_6, &VAR_5,
         VAR_4->fbdev_bo);
 if (FUNC_3(VAR_2->fb)) {
  FUNC_2(VAR_6->dev,
         "Failed to allocate DRM framebuffer.\n");
  VAR_13 = FUNC_4(VAR_2->fb);
  goto out;
 }

 VAR_11->fbops = &VAR_1;

 VAR_8 = VAR_2->fb;
 FUNC_6(VAR_11, VAR_2, VAR_3);

 VAR_10 = VAR_11->var.xoffset * VAR_9;
 VAR_10 += VAR_11->var.yoffset * VAR_8->pitches[0];

 VAR_6->mode_config.fb_base = 0;
 VAR_11->screen_base = VAR_7->kvaddr + VAR_10;
 VAR_11->screen_size = VAR_7->base.size;
 VAR_11->fix.smem_len = VAR_7->base.size;

 FUNC_1("FB [%dx%d]-%d kvaddr=%p offset=%ld size=%zu\n",
        VAR_8->width, VAR_8->height, VAR_8->format->depth,
        VAR_7->kvaddr,
        VAR_10, VAR_12);

 return 0;

out:
 FUNC_10(&VAR_7->base);
 return VAR_13;
}
