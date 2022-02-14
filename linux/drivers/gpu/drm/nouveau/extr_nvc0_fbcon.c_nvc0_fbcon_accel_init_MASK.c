
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nouveau_framebuffer {TYPE_5__* vma; } ;
struct TYPE_12__ {int handle; } ;
struct TYPE_7__ {int fb; struct drm_device* dev; } ;
struct nouveau_fbdev {TYPE_6__ twod; TYPE_1__ helper; } ;
struct nouveau_drm {struct nouveau_channel* channel; } ;
struct nouveau_channel {int user; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_10__ {int bits_per_pixel; int xres_virtual; int yres_virtual; TYPE_2__ transp; } ;
struct TYPE_9__ {int line_length; } ;
struct fb_info {TYPE_4__ var; TYPE_3__ fix; struct nouveau_fbdev* par; } ;
struct drm_device {int dummy; } ;
struct TYPE_11__ {int addr; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct fb_info*) ;
 struct nouveau_framebuffer* FUNC_8 (int ) ;
 int FUNC_9 (int *,int,int,int *,int ,TYPE_6__*) ;
 int FUNC_10 (int ) ;

int
FUNC_11(struct fb_info *VAR_2)
{
 struct nouveau_fbdev *VAR_3 = VAR_2->par;
 struct drm_device *VAR_4 = VAR_3->helper.dev;
 struct nouveau_framebuffer *VAR_5 = FUNC_8(VAR_3->helper.fb);
 struct nouveau_drm *VAR_6 = FUNC_6(VAR_4);
 struct nouveau_channel *VAR_7 = VAR_6->channel;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_9(&VAR_7->user, 0x902d, 0x902d, ((void*)0), 0,
          &VAR_3->twod);
 if (VAR_8)
  return VAR_8;

 switch (VAR_2->var.bits_per_pixel) {
 case 8:
  VAR_9 = 0xf3;
  break;
 case 15:
  VAR_9 = 0xf8;
  break;
 case 16:
  VAR_9 = 0xe8;
  break;
 case 32:
  switch (VAR_2->var.transp.length) {
  case 0:
  case 8:
   VAR_9 = 0xe6;
   break;
  case 2:
   VAR_9 = 0xd1;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_7, 58);
 if (VAR_8) {
  FUNC_4(1);
  FUNC_7(VAR_2);
  return VAR_8;
 }

 FUNC_0(VAR_7, VAR_1, 0x0000, 1);
 FUNC_2 (VAR_7, VAR_3->twod.handle);
 FUNC_0(VAR_7, VAR_1, 0x0290, 1);
 FUNC_2 (VAR_7, 0);
 FUNC_0(VAR_7, VAR_1, 0x0888, 1);
 FUNC_2 (VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x02ac, 1);
 FUNC_2 (VAR_7, 3);
 FUNC_0(VAR_7, VAR_1, 0x02a0, 1);
 FUNC_2 (VAR_7, 0x55);
 FUNC_0(VAR_7, VAR_1, 0x08c0, 4);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, 1);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0580, 2);
 FUNC_2 (VAR_7, 4);
 FUNC_2 (VAR_7, VAR_9);
 FUNC_0(VAR_7, VAR_1, 0x02e8, 2);
 FUNC_2 (VAR_7, 2);
 FUNC_2 (VAR_7, 1);

 FUNC_0(VAR_7, VAR_1, 0x0804, 1);
 FUNC_2 (VAR_7, VAR_9);
 FUNC_0(VAR_7, VAR_1, 0x0800, 1);
 FUNC_2 (VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0808, 3);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x081c, 1);
 FUNC_2 (VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0840, 4);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, 1);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0200, 10);
 FUNC_2 (VAR_7, VAR_9);
 FUNC_2 (VAR_7, 1);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, 1);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, VAR_2->fix.line_length);
 FUNC_2 (VAR_7, VAR_2->var.xres_virtual);
 FUNC_2 (VAR_7, VAR_2->var.yres_virtual);
 FUNC_2 (VAR_7, FUNC_10(VAR_5->vma->addr));
 FUNC_2 (VAR_7, FUNC_5(VAR_5->vma->addr));
 FUNC_0(VAR_7, VAR_1, 0x0230, 10);
 FUNC_2 (VAR_7, VAR_9);
 FUNC_2 (VAR_7, 1);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, 1);
 FUNC_2 (VAR_7, 0);
 FUNC_2 (VAR_7, VAR_2->fix.line_length);
 FUNC_2 (VAR_7, VAR_2->var.xres_virtual);
 FUNC_2 (VAR_7, VAR_2->var.yres_virtual);
 FUNC_2 (VAR_7, FUNC_10(VAR_5->vma->addr));
 FUNC_2 (VAR_7, FUNC_5(VAR_5->vma->addr));
 FUNC_1 (VAR_7);

 return 0;
}
