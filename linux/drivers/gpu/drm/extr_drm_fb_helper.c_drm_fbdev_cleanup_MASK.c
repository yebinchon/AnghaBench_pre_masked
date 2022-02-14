
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_ops {int dummy; } ;
struct fb_info {struct fb_ops* fbops; void* screen_buffer; scalar_t__ fbdefio; } ;
struct drm_fb_helper {int buffer; int dev; struct fb_info* fbdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_ops*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(struct drm_fb_helper *VAR_0)
{
 struct fb_info *VAR_1 = VAR_0->fbdev;
 struct fb_ops *VAR_2 = ((void*)0);
 void *VAR_3 = ((void*)0);

 if (!VAR_0->dev)
  return;

 if (VAR_1 && VAR_1->fbdefio) {
  FUNC_2(VAR_1);
  VAR_3 = VAR_1->screen_buffer;
  VAR_2 = VAR_1->fbops;
 }

 FUNC_1(VAR_0);

 if (VAR_3) {
  FUNC_4(VAR_3);
  FUNC_3(VAR_2);
 }

 FUNC_0(VAR_0->buffer);
}
