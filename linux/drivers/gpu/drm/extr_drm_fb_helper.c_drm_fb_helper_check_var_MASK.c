
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int msb_right; int length; int offset; } ;
struct TYPE_9__ {int msb_right; int length; int offset; } ;
struct TYPE_8__ {int msb_right; int length; int offset; } ;
struct TYPE_7__ {int msb_right; int length; int offset; } ;
struct fb_var_screeninfo {scalar_t__ pixclock; int bits_per_pixel; scalar_t__ xres; scalar_t__ yres; scalar_t__ xres_virtual; scalar_t__ yres_virtual; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {int var; struct drm_fb_helper* par; } ;
struct drm_framebuffer {scalar_t__ width; scalar_t__ height; TYPE_5__* format; } ;
struct drm_fb_helper {struct drm_framebuffer* fb; } ;
struct TYPE_11__ {int* cpp; int depth; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct fb_var_screeninfo*,int ) ;
 int FUNC_2 (struct fb_var_screeninfo*,int *) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 () ;

int FUNC_6(struct fb_var_screeninfo *VAR_1,
       struct fb_info *VAR_2)
{
 struct drm_fb_helper *VAR_3 = VAR_2->par;
 struct drm_framebuffer *VAR_4 = VAR_3->fb;

 if (FUNC_5())
  return -VAR_0;

 if (VAR_1->pixclock != 0) {
  FUNC_0("fbdev emulation doesn't support changing the pixel clock, value of pixclock is ignored\n");
  VAR_1->pixclock = 0;
 }

 if ((FUNC_4(VAR_4->format, 0) > 1) ||
     (FUNC_3(VAR_4->format, 0) > 1))
  return -VAR_0;





 if (VAR_1->bits_per_pixel != VAR_4->format->cpp[0] * 8 ||
     VAR_1->xres > VAR_4->width || VAR_1->yres > VAR_4->height ||
     VAR_1->xres_virtual > VAR_4->width || VAR_1->yres_virtual > VAR_4->height) {
  FUNC_0("fb requested width/height/bpp can't fit in current fb "
     "request %dx%d-%d (virtual %dx%d) > %dx%d-%d\n",
     VAR_1->xres, VAR_1->yres, VAR_1->bits_per_pixel,
     VAR_1->xres_virtual, VAR_1->yres_virtual,
     VAR_4->width, VAR_4->height, VAR_4->format->cpp[0] * 8);
  return -VAR_0;
 }






 if (!VAR_1->red.offset && !VAR_1->green.offset &&
     !VAR_1->blue.offset && !VAR_1->transp.offset &&
     !VAR_1->red.length && !VAR_1->green.length &&
     !VAR_1->blue.length && !VAR_1->transp.length &&
     !VAR_1->red.msb_right && !VAR_1->green.msb_right &&
     !VAR_1->blue.msb_right && !VAR_1->transp.msb_right) {
  FUNC_1(VAR_1, VAR_4->format->depth);
 }





 if (!FUNC_2(VAR_1, &VAR_2->var)) {
  FUNC_0("fbdev emulation doesn't support changing the pixel format\n");
  return -VAR_0;
 }

 return 0;
}
