
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_5__ {int bits_per_pixel; void* yres; void* xres; int activate; scalar_t__ yoffset; scalar_t__ xoffset; int accel_flags; int yres_virtual; int xres_virtual; } ;
struct fb_info {TYPE_3__ var; int pseudo_palette; } ;
struct drm_framebuffer {TYPE_1__* format; int height; int width; } ;
struct drm_fb_helper {int pseudo_palette; struct drm_framebuffer* fb; } ;
struct TYPE_4__ {int* cpp; int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_2,
       struct drm_fb_helper *VAR_3,
       uint32_t VAR_4, uint32_t VAR_5)
{
 struct drm_framebuffer *VAR_6 = VAR_3->fb;

 FUNC_0((FUNC_3(VAR_6->format, 0) > 1) ||
  (FUNC_2(VAR_6->format, 0) > 1));
 VAR_2->pseudo_palette = VAR_3->pseudo_palette;
 VAR_2->var.xres_virtual = VAR_6->width;
 VAR_2->var.yres_virtual = VAR_6->height;
 VAR_2->var.bits_per_pixel = VAR_6->format->cpp[0] * 8;
 VAR_2->var.accel_flags = VAR_0;
 VAR_2->var.xoffset = 0;
 VAR_2->var.yoffset = 0;
 VAR_2->var.activate = VAR_1;

 FUNC_1(&VAR_2->var, VAR_6->format->depth);

 VAR_2->var.xres = VAR_4;
 VAR_2->var.yres = VAR_5;
}
