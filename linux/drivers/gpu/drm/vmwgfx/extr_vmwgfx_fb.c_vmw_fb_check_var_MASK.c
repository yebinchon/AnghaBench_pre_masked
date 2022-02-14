
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct vmw_fb_par {scalar_t__ max_width; scalar_t__ max_height; struct vmw_private* vmw_priv; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int offset; int length; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ xoffset; int xres; scalar_t__ yoffset; scalar_t__ yres; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {struct vmw_fb_par* par; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct vmw_private*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_1,
       struct fb_info *VAR_2)
{
 int VAR_3 = VAR_1->bits_per_pixel;
 struct vmw_fb_par *VAR_4 = VAR_2->par;
 struct vmw_private *VAR_5 = VAR_4->vmw_priv;

 switch (VAR_1->bits_per_pixel) {
 case 32:
  VAR_3 = (VAR_1->transp.length > 0) ? 32 : 24;
  break;
 default:
  FUNC_0("Bad bpp %u.\n", VAR_1->bits_per_pixel);
  return -VAR_0;
 }

 switch (VAR_3) {
 case 24:
  VAR_1->red.offset = 16;
  VAR_1->green.offset = 8;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.length = 8;
  VAR_1->transp.length = 0;
  VAR_1->transp.offset = 0;
  break;
 case 32:
  VAR_1->red.offset = 16;
  VAR_1->green.offset = 8;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.length = 8;
  VAR_1->transp.length = 8;
  VAR_1->transp.offset = 24;
  break;
 default:
  FUNC_0("Bad depth %u.\n", VAR_3);
  return -VAR_0;
 }

 if ((VAR_1->xoffset + VAR_1->xres) > VAR_4->max_width ||
     (VAR_1->yoffset + VAR_1->yres) > VAR_4->max_height) {
  FUNC_0("Requested geom can not fit in framebuffer\n");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_5,
     VAR_1->xres * VAR_1->bits_per_pixel/8,
     VAR_1->yoffset + VAR_1->yres)) {
  FUNC_0("Requested geom can not fit in framebuffer\n");
  return -VAR_0;
 }

 return 0;
}
