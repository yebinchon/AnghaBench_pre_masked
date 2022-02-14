
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int dev; } ;
struct nouveau_fbdev {TYPE_1__ helper; } ;
struct nouveau_drm {struct nouveau_channel* channel; } ;
struct nouveau_channel {int dummy; } ;
struct TYPE_6__ {scalar_t__ visual; } ;
struct TYPE_5__ {int bits_per_pixel; } ;
struct fb_info {int* pseudo_palette; TYPE_3__ fix; TYPE_2__ var; struct nouveau_fbdev* par; } ;
struct fb_image {int depth; size_t bg_color; size_t fg_color; int width; int height; int dx; int dy; scalar_t__ data; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nouveau_channel*,int ,int,int) ;
 int FUNC_2 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct nouveau_channel*) ;
 int VAR_3 ;
 int FUNC_4 (struct nouveau_channel*,int) ;
 int FUNC_5 (struct nouveau_channel*,int*,int) ;
 int FUNC_6 (struct nouveau_channel*,int) ;
 struct nouveau_drm* FUNC_7 (int ) ;

int
FUNC_8(struct fb_info *VAR_4, const struct fb_image *VAR_5)
{
 struct nouveau_fbdev *VAR_6 = VAR_4->par;
 struct nouveau_drm *VAR_7 = FUNC_7(VAR_6->helper.dev);
 struct nouveau_channel *VAR_8 = VAR_7->channel;
 uint32_t VAR_9, *VAR_10 = (uint32_t *)VAR_5->data;
 uint32_t VAR_11 = ~(~0 >> (32 - VAR_4->var.bits_per_pixel));
 uint32_t *VAR_12 = VAR_4->pseudo_palette;
 int VAR_13;

 if (VAR_5->depth != 1)
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_8, 11);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_8, VAR_3, 0x0814, 2);
 if (VAR_4->fix.visual == VAR_2 ||
     VAR_4->fix.visual == VAR_1) {
  FUNC_4 (VAR_8, VAR_12[VAR_5->bg_color] | VAR_11);
  FUNC_4 (VAR_8, VAR_12[VAR_5->fg_color] | VAR_11);
 } else {
  FUNC_4 (VAR_8, VAR_5->bg_color);
  FUNC_4 (VAR_8, VAR_5->fg_color);
 }
 FUNC_2(VAR_8, VAR_3, 0x0838, 2);
 FUNC_4 (VAR_8, VAR_5->width);
 FUNC_4 (VAR_8, VAR_5->height);
 FUNC_2(VAR_8, VAR_3, 0x0850, 4);
 FUNC_4 (VAR_8, 0);
 FUNC_4 (VAR_8, VAR_5->dx);
 FUNC_4 (VAR_8, 0);
 FUNC_4 (VAR_8, VAR_5->dy);

 VAR_9 = FUNC_0(FUNC_0(VAR_5->width, 8) * VAR_5->height, 32) >> 5;
 while (VAR_9) {
  int VAR_14 = VAR_9 > 2047 ? 2047 : VAR_9;

  VAR_13 = FUNC_6(VAR_8, VAR_14 + 1);
  if (VAR_13)
   return VAR_13;

  VAR_9 -= VAR_14;

  FUNC_1(VAR_8, VAR_3, 0x0860, VAR_14);
  FUNC_5(VAR_8, VAR_10, VAR_14);
  VAR_10 += VAR_14;
 }

 FUNC_3(VAR_8);
 return 0;
}
