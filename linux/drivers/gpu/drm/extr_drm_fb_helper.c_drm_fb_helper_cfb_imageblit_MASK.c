
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct fb_image {int height; int width; int dy; int dx; } ;


 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (struct fb_info*,int ,int ,int ,int ) ;

void FUNC_2(struct fb_info *VAR_0,
     const struct fb_image *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1->dx, VAR_1->dy,
       VAR_1->width, VAR_1->height);
}
