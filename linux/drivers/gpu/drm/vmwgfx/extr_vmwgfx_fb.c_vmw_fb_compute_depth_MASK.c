
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_1__ transp; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1,
    int *VAR_2)
{
 switch (VAR_1->bits_per_pixel) {
 case 32:
  *VAR_2 = (VAR_1->transp.length > 0) ? 32 : 24;
  break;
 default:
  FUNC_0("Bad bpp %u.\n", VAR_1->bits_per_pixel);
  return -VAR_0;
 }

 return 0;
}
