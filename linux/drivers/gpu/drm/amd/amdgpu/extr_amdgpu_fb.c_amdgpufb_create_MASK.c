
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {unsigned long smem_start; void* smem_len; } ;
struct fb_info {TYPE_4__ fix; int * screen_base; TYPE_3__* apertures; void* screen_size; int * fbops; } ;
struct drm_mode_fb_cmd2 {int pixel_format; int height; int width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {unsigned long* pitches; TYPE_6__* format; } ;
struct drm_fb_helper_surface_size {int surface_bpp; int surface_depth; int surface_height; int surface_width; } ;
struct drm_fb_helper {int dummy; } ;
struct TYPE_16__ {struct drm_framebuffer* fb; } ;
struct TYPE_18__ {struct drm_framebuffer base; } ;
struct amdgpu_fbdev {TYPE_7__ helper; TYPE_9__ rfb; struct amdgpu_device* adev; } ;
struct TYPE_14__ {unsigned long vram_start; unsigned long aper_base; int aper_size; } ;
struct amdgpu_device {TYPE_8__* ddev; TYPE_5__ gmc; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_10__ {int fb_base; } ;
struct TYPE_17__ {int pdev; TYPE_1__ mode_config; } ;
struct TYPE_15__ {unsigned long depth; } ;
struct TYPE_12__ {TYPE_2__* ranges; } ;
struct TYPE_11__ {int size; int base; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 unsigned long FUNC_4 (struct amdgpu_bo*) ;
 int * FUNC_5 (struct amdgpu_bo*) ;
 void* FUNC_6 (struct amdgpu_bo*) ;
 int FUNC_7 (TYPE_8__*,TYPE_9__*,struct drm_mode_fb_cmd2*,struct drm_gem_object*) ;
 int FUNC_8 (struct amdgpu_fbdev*,struct drm_mode_fb_cmd2*,struct drm_gem_object**) ;
 int VAR_1 ;
 struct fb_info* FUNC_9 (struct drm_fb_helper*) ;
 int FUNC_10 (struct fb_info*,TYPE_7__*,struct drm_fb_helper_surface_size*) ;
 int FUNC_11 (struct drm_framebuffer*) ;
 int FUNC_12 (struct drm_framebuffer*) ;
 int FUNC_13 (struct drm_gem_object*) ;
 int FUNC_14 (int,int ) ;
 struct amdgpu_bo* FUNC_15 (struct drm_gem_object*) ;
 int FUNC_16 (struct drm_framebuffer*) ;
 int FUNC_17 (int ,struct fb_info*) ;

__attribute__((used)) static int FUNC_18(struct drm_fb_helper *VAR_2,
      struct drm_fb_helper_surface_size *VAR_3)
{
 struct amdgpu_fbdev *VAR_4 = (struct amdgpu_fbdev *)VAR_2;
 struct amdgpu_device *VAR_5 = VAR_4->adev;
 struct fb_info *VAR_6;
 struct drm_framebuffer *VAR_7 = ((void*)0);
 struct drm_mode_fb_cmd2 VAR_8;
 struct drm_gem_object *VAR_9 = ((void*)0);
 struct amdgpu_bo *VAR_10 = ((void*)0);
 int VAR_11;
 unsigned long VAR_12;

 VAR_8.width = VAR_3->surface_width;
 VAR_8.height = VAR_3->surface_height;

 if (VAR_3->surface_bpp == 24)
  VAR_3->surface_bpp = 32;

 VAR_8.pixel_format = FUNC_14(VAR_3->surface_bpp,
         VAR_3->surface_depth);

 VAR_11 = FUNC_8(VAR_4, &VAR_8, &VAR_9);
 if (VAR_11) {
  FUNC_0("failed to create fbcon object %d\n", VAR_11);
  return VAR_11;
 }

 VAR_10 = FUNC_15(VAR_9);


 VAR_6 = FUNC_9(VAR_2);
 if (FUNC_2(VAR_6)) {
  VAR_11 = FUNC_3(VAR_6);
  goto out;
 }

 VAR_11 = FUNC_7(VAR_5->ddev, &VAR_4->rfb,
           &VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_0("failed to initialize framebuffer %d\n", VAR_11);
  goto out;
 }

 VAR_7 = &VAR_4->rfb.base;


 VAR_4->helper.fb = VAR_7;

 VAR_6->fbops = &VAR_1;

 VAR_12 = FUNC_4(VAR_10) - VAR_5->gmc.vram_start;
 VAR_6->fix.smem_start = VAR_5->gmc.aper_base + VAR_12;
 VAR_6->fix.smem_len = FUNC_6(VAR_10);
 VAR_6->screen_base = FUNC_5(VAR_10);
 VAR_6->screen_size = FUNC_6(VAR_10);

 FUNC_10(VAR_6, &VAR_4->helper, VAR_3);


 VAR_6->apertures->ranges[0].base = VAR_5->ddev->mode_config.fb_base;
 VAR_6->apertures->ranges[0].size = VAR_5->gmc.aper_size;



 if (VAR_6->screen_base == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto out;
 }

 FUNC_1("fb mappable at 0x%lX\n", VAR_6->fix.smem_start);
 FUNC_1("vram apper at 0x%lX\n", (unsigned long)VAR_5->gmc.aper_base);
 FUNC_1("size %lu\n", (unsigned long)FUNC_6(VAR_10));
 FUNC_1("fb depth is %d\n", VAR_7->format->depth);
 FUNC_1("   pitch is %d\n", VAR_7->pitches[0]);

 FUNC_17(VAR_5->ddev->pdev, VAR_6);
 return 0;

out:
 if (VAR_10) {

 }
 if (VAR_7 && VAR_11) {
  FUNC_13(VAR_9);
  FUNC_12(VAR_7);
  FUNC_11(VAR_7);
  FUNC_16(VAR_7);
 }
 return VAR_11;
}
