
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_ops {int deferred_io; int delay; } ;
struct fb_info {struct fb_ops* fbops; struct fb_ops* fbdefio; } ;
struct fb_deferred_io {int deferred_io; int delay; } ;
struct drm_fb_helper {struct fb_info* fbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_ops*) ;
 struct fb_ops* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct drm_fb_helper *VAR_3)
{
 struct fb_info *VAR_4 = VAR_3->fbdev;
 struct fb_deferred_io *VAR_5;
 struct fb_ops *VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_5 || !VAR_6) {
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  return -VAR_0;
 }

 VAR_4->fbdefio = VAR_5;
 VAR_5->delay = FUNC_3(50);
 VAR_5->deferred_io = VAR_2;

 *VAR_6 = *VAR_4->fbops;
 VAR_4->fbops = VAR_6;

 FUNC_0(VAR_4);

 return 0;
}
