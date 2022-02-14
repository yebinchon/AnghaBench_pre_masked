
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_10__ {TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; } ;
struct fb_cmap {int start; int len; int* red; int* green; int* blue; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fb_cmap *VAR_1, struct fb_info *VAR_2)
{
 u32 *VAR_3 = (u32 *)VAR_2->pseudo_palette;
 int VAR_4;

 if (VAR_1->start + VAR_1->len > 16)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1->len; ++VAR_4) {
  u16 VAR_5 = VAR_1->red[VAR_4];
  u16 VAR_6 = VAR_1->green[VAR_4];
  u16 VAR_7 = VAR_1->blue[VAR_4];
  u32 VAR_8;

  VAR_5 >>= 16 - VAR_2->var.red.length;
  VAR_6 >>= 16 - VAR_2->var.green.length;
  VAR_7 >>= 16 - VAR_2->var.blue.length;
  VAR_8 = (VAR_5 << VAR_2->var.red.offset) |
   (VAR_6 << VAR_2->var.green.offset) |
   (VAR_7 << VAR_2->var.blue.offset);
  if (VAR_2->var.transp.length > 0) {
   u32 VAR_9 = (1 << VAR_2->var.transp.length) - 1;

   VAR_9 <<= VAR_2->var.transp.offset;
   VAR_8 |= VAR_9;
  }
  VAR_3[VAR_1->start + VAR_4] = VAR_8;
 }

 return 0;
}
