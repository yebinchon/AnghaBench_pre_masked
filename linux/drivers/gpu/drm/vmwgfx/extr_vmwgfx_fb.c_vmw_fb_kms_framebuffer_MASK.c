
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {int width; scalar_t__ height; int* pitches; TYPE_1__* format; } ;
struct vmw_framebuffer {struct drm_framebuffer base; } ;
struct vmw_fb_par {size_t bo_size; struct drm_framebuffer* set_fb; int vmw_bo; int vmw_priv; } ;
struct fb_var_screeninfo {int xres; scalar_t__ yres; int bits_per_pixel; } ;
struct fb_info {struct fb_var_screeninfo var; struct vmw_fb_par* par; } ;
struct drm_mode_fb_cmd2 {int width; scalar_t__ height; int* pitches; scalar_t__ pixel_format; } ;
struct TYPE_2__ {scalar_t__ format; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct vmw_framebuffer*) ;
 int FUNC_2 (struct vmw_framebuffer*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct fb_var_screeninfo*,int*) ;
 int FUNC_5 (int ,size_t,int *) ;
 int FUNC_6 (struct vmw_fb_par*,int,int) ;
 struct vmw_framebuffer* FUNC_7 (int ,int ,int *,int,struct drm_mode_fb_cmd2*) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_0)
{
 struct drm_mode_fb_cmd2 VAR_1;
 struct vmw_fb_par *VAR_2 = VAR_0->par;
 struct fb_var_screeninfo *VAR_3 = &VAR_0->var;
 struct drm_framebuffer *VAR_4;
 struct vmw_framebuffer *VAR_5;
 int VAR_6 = 0, VAR_7;
 size_t VAR_8;

 VAR_6 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_1.width = VAR_3->xres;
 VAR_1.height = VAR_3->yres;
 VAR_1.pitches[0] = ((VAR_3->bits_per_pixel + 7) / 8) * VAR_1.width;
 VAR_1.pixel_format =
  FUNC_3(VAR_3->bits_per_pixel, VAR_7);

 VAR_4 = VAR_2->set_fb;
 if (VAR_4 && VAR_4->width == VAR_1.width &&
     VAR_4->height == VAR_1.height &&
     VAR_4->format->format == VAR_1.pixel_format &&
     VAR_4->pitches[0] == VAR_1.pitches[0])
  return 0;


 VAR_8 = (size_t) VAR_1.pitches[0] * (size_t) VAR_1.height;
 VAR_6 = FUNC_6(VAR_2,
    VAR_2->bo_size < VAR_8 ||
    VAR_2->bo_size > 2*VAR_8,
    1);
 if (VAR_6)
  return VAR_6;

 if (!VAR_2->vmw_bo) {
  VAR_6 = FUNC_5(VAR_2->vmw_priv, VAR_8,
           &VAR_2->vmw_bo);
  if (VAR_6) {
   FUNC_0("Failed creating a buffer object for "
      "fbdev.\n");
   return VAR_6;
  }
  VAR_2->bo_size = VAR_8;
 }

 VAR_5 = FUNC_7(VAR_2->vmw_priv, VAR_2->vmw_bo, ((void*)0),
          1, &VAR_1);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_2->set_fb = &VAR_5->base;

 return 0;
}
