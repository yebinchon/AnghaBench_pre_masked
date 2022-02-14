
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* funcs; TYPE_2__* format; int height; int width; } ;
struct TYPE_6__ {int smem_len; scalar_t__ smem_start; } ;
struct fb_info {TYPE_4__ fb; void* screen_base; int screen_size; TYPE_1__ fix; int * fbops; } ;
struct drm_mode_fb_cmd2 {int height; int* pitches; int pixel_format; int width; } ;
struct drm_fb_helper_surface_size {int surface_height; int surface_depth; int surface_bpp; int surface_width; } ;
struct drm_fb_helper {TYPE_4__* fb; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_10__ {int size; } ;
struct armada_gem_object {scalar_t__ phys_addr; TYPE_5__ obj; } ;
struct armada_framebuffer {TYPE_4__ fb; void* screen_base; int screen_size; TYPE_1__ fix; int * fbops; } ;
typedef int mode ;
struct TYPE_8__ {int (* destroy ) (TYPE_4__*) ;} ;
struct TYPE_7__ {int* cpp; } ;


 int FUNC_0 (char*,int ,int ,int,unsigned long long) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 int VAR_1 ;
 struct fb_info* FUNC_4 (struct drm_device*,struct drm_mode_fb_cmd2*,struct armada_gem_object*) ;
 struct armada_gem_object* FUNC_5 (struct drm_device*,int) ;
 int FUNC_6 (struct drm_device*,struct armada_gem_object*) ;
 void* FUNC_7 (struct drm_device*,struct armada_gem_object*) ;
 int FUNC_8 (int ,int ) ;
 struct fb_info* FUNC_9 (struct drm_fb_helper*) ;
 int FUNC_10 (struct fb_info*,struct drm_fb_helper*,struct drm_fb_helper_surface_size*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct drm_mode_fb_cmd2*,int ,int) ;
 int FUNC_14 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_15(struct drm_fb_helper *VAR_2,
 struct drm_fb_helper_surface_size *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct drm_mode_fb_cmd2 VAR_5;
 struct armada_framebuffer *VAR_6;
 struct armada_gem_object *VAR_7;
 struct fb_info *VAR_8;
 int VAR_9, VAR_10;
 void *VAR_11;

 FUNC_13(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.width = VAR_3->surface_width;
 VAR_5.height = VAR_3->surface_height;
 VAR_5.pitches[0] = FUNC_8(VAR_5.width, VAR_3->surface_bpp);
 VAR_5.pixel_format = FUNC_12(VAR_3->surface_bpp,
     VAR_3->surface_depth);

 VAR_9 = VAR_5.pitches[0] * VAR_5.height;
 VAR_7 = FUNC_5(VAR_4, VAR_9);
 if (!VAR_7) {
  FUNC_1("failed to allocate fb memory\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_6(VAR_4, VAR_7);
 if (VAR_10) {
  FUNC_11(&VAR_7->obj);
  return VAR_10;
 }

 VAR_11 = FUNC_7(VAR_4, VAR_7);
 if (!VAR_11) {
  FUNC_11(&VAR_7->obj);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_4, &VAR_5, VAR_7);





 FUNC_11(&VAR_7->obj);

 if (FUNC_2(VAR_6))
  return FUNC_3(VAR_6);

 VAR_8 = FUNC_9(VAR_2);
 if (FUNC_2(VAR_8)) {
  VAR_10 = FUNC_3(VAR_8);
  goto err_fballoc;
 }

 VAR_8->fbops = &VAR_1;
 VAR_8->fix.smem_start = VAR_7->phys_addr;
 VAR_8->fix.smem_len = VAR_7->obj.size;
 VAR_8->screen_size = VAR_7->obj.size;
 VAR_8->screen_base = VAR_11;
 VAR_2->fb = &VAR_6->fb;

 FUNC_10(VAR_8, VAR_2, VAR_3);

 FUNC_0("allocated %dx%d %dbpp fb: 0x%08llx\n",
  VAR_6->fb.width, VAR_6->fb.height, VAR_6->fb.format->cpp[0] * 8,
  (unsigned long long)VAR_7->phys_addr);

 return 0;

 err_fballoc:
 VAR_6->fb.funcs->destroy(&VAR_6->fb);
 return VAR_10;
}
