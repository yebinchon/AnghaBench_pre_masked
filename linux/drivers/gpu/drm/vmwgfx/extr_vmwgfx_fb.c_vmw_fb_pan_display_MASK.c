
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_fb_par {scalar_t__ fb_x; scalar_t__ fb_y; int bo_mutex; TYPE_1__* set_fb; } ;
struct fb_var_screeninfo {scalar_t__ xoffset; scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yoffset; scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {struct vmw_fb_par* par; } ;
struct TYPE_2__ {int height; int width; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_fb_par*,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fb_var_screeninfo *VAR_1,
         struct fb_info *VAR_2)
{
 struct vmw_fb_par *VAR_3 = VAR_2->par;

 if ((VAR_1->xoffset + VAR_1->xres) > VAR_1->xres_virtual ||
     (VAR_1->yoffset + VAR_1->yres) > VAR_1->yres_virtual) {
  FUNC_0("Requested panning can not fit in framebuffer\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_3->bo_mutex);
 VAR_3->fb_x = VAR_1->xoffset;
 VAR_3->fb_y = VAR_1->yoffset;
 if (VAR_3->set_fb)
  FUNC_3(VAR_3, VAR_3->fb_x, VAR_3->fb_y, VAR_3->set_fb->width,
      VAR_3->set_fb->height);
 FUNC_2(&VAR_3->bo_mutex);

 return 0;
}
