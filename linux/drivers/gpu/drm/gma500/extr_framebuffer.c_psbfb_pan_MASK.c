
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * obj; struct drm_device* dev; } ;
struct psb_framebuffer {TYPE_2__ base; } ;
struct psb_fbdev {struct psb_framebuffer pfb; } ;
struct gtt_range {scalar_t__ npage; } ;
struct fb_var_screeninfo {int yoffset; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct psb_fbdev* par; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct gtt_range*,int) ;
 struct gtt_range* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_0, struct fb_info *VAR_1)
{
 struct psb_fbdev *VAR_2 = VAR_1->par;
 struct psb_framebuffer *VAR_3 = &VAR_2->pfb;
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct gtt_range *VAR_5 = FUNC_1(VAR_3->base.obj[0]);






 if (VAR_5->npage) {


  int VAR_6 = VAR_1->fix.line_length >> 12;
  FUNC_0(VAR_4, VAR_5, VAR_0->yoffset * VAR_6);
 }
        return 0;
}
