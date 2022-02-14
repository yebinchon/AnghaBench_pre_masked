
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ offset; scalar_t__ length; scalar_t__ msb_right; } ;
struct TYPE_7__ {scalar_t__ offset; scalar_t__ length; scalar_t__ msb_right; } ;
struct TYPE_6__ {scalar_t__ offset; scalar_t__ length; scalar_t__ msb_right; } ;
struct TYPE_5__ {scalar_t__ offset; scalar_t__ length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {scalar_t__ bits_per_pixel; scalar_t__ grayscale; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;



__attribute__((used)) static bool FUNC_0(const struct fb_var_screeninfo *VAR_0,
          const struct fb_var_screeninfo *VAR_1)
{
 return VAR_0->bits_per_pixel == VAR_1->bits_per_pixel &&
        VAR_0->grayscale == VAR_1->grayscale &&
        VAR_0->red.offset == VAR_1->red.offset &&
        VAR_0->red.length == VAR_1->red.length &&
        VAR_0->red.msb_right == VAR_1->red.msb_right &&
        VAR_0->green.offset == VAR_1->green.offset &&
        VAR_0->green.length == VAR_1->green.length &&
        VAR_0->green.msb_right == VAR_1->green.msb_right &&
        VAR_0->blue.offset == VAR_1->blue.offset &&
        VAR_0->blue.length == VAR_1->blue.length &&
        VAR_0->blue.msb_right == VAR_1->blue.msb_right &&
        VAR_0->transp.offset == VAR_1->transp.offset &&
        VAR_0->transp.length == VAR_1->transp.length &&
        VAR_0->transp.msb_right == VAR_1->transp.msb_right;
}
