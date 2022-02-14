
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {scalar_t__ state; int flags; } ;
struct fb_copyarea {int width; int height; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (struct fb_info*,struct fb_copyarea const*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct fb_info *VAR_2,
      const struct fb_copyarea *VAR_3)
{
 if (FUNC_2(VAR_2->state != VAR_1))
  return;


 if (VAR_3->width == 8 || VAR_3->height == 8 ||
  (VAR_2->flags & VAR_0))
  return FUNC_0(VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_3);
}
