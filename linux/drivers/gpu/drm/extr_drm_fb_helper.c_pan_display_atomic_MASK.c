
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_2__ {int yoffset; int xoffset; } ;
struct fb_info {TYPE_1__ var; struct drm_fb_helper* par; } ;
struct drm_fb_helper {int client; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_fb_helper*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_0,
         struct fb_info *VAR_1)
{
 struct drm_fb_helper *VAR_2 = VAR_1->par;
 int VAR_3;

 FUNC_1(VAR_2, VAR_0->xoffset, VAR_0->yoffset);

 VAR_3 = FUNC_0(&VAR_2->client);
 if (!VAR_3) {
  VAR_1->var.xoffset = VAR_0->xoffset;
  VAR_1->var.yoffset = VAR_0->yoffset;
 } else
  FUNC_1(VAR_2, VAR_1->var.xoffset, VAR_1->var.yoffset);

 return VAR_3;
}
