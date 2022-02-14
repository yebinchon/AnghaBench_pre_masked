
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_4__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int activate; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {int dummy; } ;
typedef int __u32 ;


 struct fb_var_screeninfo VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 __u32 VAR_3 = VAR_1->bits_per_pixel;
 __u32 VAR_4 = VAR_1->activate;


 *VAR_1 = VAR_0;
 VAR_1->activate = VAR_4;
 if (VAR_3 >= 8) {
  VAR_1->bits_per_pixel = 8;
  VAR_1->red.length = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.length = 8;
 } else {
  VAR_1->bits_per_pixel = 1;
  VAR_1->red.length = 1;
  VAR_1->green.length = 1;
  VAR_1->blue.length = 1;
 }
 return 0;
}
