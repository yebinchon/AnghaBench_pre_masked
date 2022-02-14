
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_8__ {struct drm_framebuffer* fb; } ;
struct psb_fbdev {TYPE_1__ psb_fb_helper; } ;
struct TYPE_12__ {unsigned int offset; int length; } ;
struct TYPE_11__ {unsigned int offset; int length; } ;
struct TYPE_10__ {unsigned int offset; int length; } ;
struct TYPE_9__ {unsigned int offset; int length; } ;
struct TYPE_13__ {TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_6__ var; struct psb_fbdev* par; } ;
struct drm_framebuffer {TYPE_7__* format; } ;
struct TYPE_14__ {int* cpp; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      struct fb_info *VAR_6)
{
 struct psb_fbdev *VAR_7 = VAR_6->par;
 struct drm_framebuffer *VAR_8 = VAR_7->psb_fb_helper.fb;
 uint32_t VAR_9;

 if (!VAR_8)
  return -VAR_0;

 if (VAR_1 > 255)
  return 1;

 VAR_2 = FUNC_0(VAR_2, VAR_6->var.red.length);
 VAR_4 = FUNC_0(VAR_4, VAR_6->var.blue.length);
 VAR_3 = FUNC_0(VAR_3, VAR_6->var.green.length);
 VAR_5 = FUNC_0(VAR_5, VAR_6->var.transp.length);

 VAR_9 = (VAR_2 << VAR_6->var.red.offset) |
     (VAR_3 << VAR_6->var.green.offset) |
     (VAR_4 << VAR_6->var.blue.offset) |
     (VAR_5 << VAR_6->var.transp.offset);

 if (VAR_1 < 16) {
  switch (VAR_8->format->cpp[0] * 8) {
  case 16:
   ((uint32_t *) VAR_6->pseudo_palette)[VAR_1] = VAR_9;
   break;
  case 24:
  case 32:
   ((uint32_t *) VAR_6->pseudo_palette)[VAR_1] = VAR_9;
   break;
  }
 }

 return 0;
}
