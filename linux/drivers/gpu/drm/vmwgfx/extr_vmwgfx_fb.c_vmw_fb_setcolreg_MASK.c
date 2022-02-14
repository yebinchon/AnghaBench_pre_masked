
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vmw_fb_par {unsigned int* pseudo_palette; TYPE_2__* set_fb; } ;
struct fb_info {struct vmw_fb_par* par; } ;
struct TYPE_4__ {TYPE_1__* format; } ;
struct TYPE_3__ {int depth; int* cpp; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
       unsigned VAR_3, unsigned VAR_4,
       struct fb_info *VAR_5)
{
 struct vmw_fb_par *VAR_6 = VAR_5->par;
 u32 *VAR_7 = VAR_6->pseudo_palette;

 if (VAR_0 > 15) {
  FUNC_0("Bad regno %u.\n", VAR_0);
  return 1;
 }

 switch (VAR_6->set_fb->format->depth) {
 case 24:
 case 32:
  VAR_7[VAR_0] = ((VAR_1 & 0xff00) << 8) |
         (VAR_2 & 0xff00) |
        ((VAR_3 & 0xff00) >> 8);
  break;
 default:
  FUNC_0("Bad depth %u, bpp %u.\n",
     VAR_6->set_fb->format->depth,
     VAR_6->set_fb->format->cpp[0] * 8);
  return 1;
 }

 return 0;
}
