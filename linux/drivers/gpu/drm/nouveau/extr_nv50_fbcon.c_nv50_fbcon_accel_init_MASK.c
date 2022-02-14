
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


struct nouveau_framebuffer {TYPE_6__* vma; } ;
struct TYPE_14__ {int handle; } ;
struct TYPE_8__ {struct drm_device* dev; int fb; } ;
struct nouveau_fbdev {TYPE_7__ twod; TYPE_1__ helper; } ;
struct nouveau_drm {struct nouveau_channel* channel; } ;
struct TYPE_10__ {int handle; } ;
struct nouveau_channel {TYPE_3__ vram; int user; } ;
struct TYPE_9__ {int length; } ;
struct TYPE_12__ {int bits_per_pixel; int xres_virtual; int yres_virtual; TYPE_2__ transp; } ;
struct TYPE_11__ {int line_length; } ;
struct fb_info {TYPE_5__ var; TYPE_4__ fix; struct nouveau_fbdev* par; } ;
struct drm_device {int dummy; } ;
struct TYPE_13__ {int addr; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int ) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct fb_info*) ;
 struct nouveau_framebuffer* FUNC_7 (int ) ;
 int FUNC_8 (int *,int,int,int *,int ,TYPE_7__*) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct fb_info *VAR_2)
{
 struct nouveau_fbdev *VAR_3 = VAR_2->par;
 struct nouveau_framebuffer *VAR_4 = FUNC_7(VAR_3->helper.fb);
 struct drm_device *VAR_5 = VAR_3->helper.dev;
 struct nouveau_drm *VAR_6 = FUNC_5(VAR_5);
 struct nouveau_channel *VAR_7 = VAR_6->channel;
 int VAR_8, VAR_9;

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

 VAR_8 = FUNC_8(&VAR_7->user, 0x502d, 0x502d, ((void*)0), 0,
          &VAR_3->twod);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_7, 58);
 if (VAR_8) {
  FUNC_6(VAR_2);
  return VAR_8;
 }

 FUNC_0(VAR_7, VAR_1, 0x0000, 1);
 FUNC_2(VAR_7, VAR_3->twod.handle);
 FUNC_0(VAR_7, VAR_1, 0x0184, 3);
 FUNC_2(VAR_7, VAR_7->vram.handle);
 FUNC_2(VAR_7, VAR_7->vram.handle);
 FUNC_2(VAR_7, VAR_7->vram.handle);
 FUNC_0(VAR_7, VAR_1, 0x0290, 1);
 FUNC_2(VAR_7, 0);
 FUNC_0(VAR_7, VAR_1, 0x0888, 1);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x02ac, 1);
 FUNC_2(VAR_7, 3);
 FUNC_0(VAR_7, VAR_1, 0x02a0, 1);
 FUNC_2(VAR_7, 0x55);
 FUNC_0(VAR_7, VAR_1, 0x08c0, 4);
 FUNC_2(VAR_7, 0);
 FUNC_2(VAR_7, 1);
 FUNC_2(VAR_7, 0);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0580, 2);
 FUNC_2(VAR_7, 4);
 FUNC_2(VAR_7, VAR_9);
 FUNC_0(VAR_7, VAR_1, 0x02e8, 2);
 FUNC_2(VAR_7, 2);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0804, 1);
 FUNC_2(VAR_7, VAR_9);
 FUNC_0(VAR_7, VAR_1, 0x0800, 1);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0808, 3);
 FUNC_2(VAR_7, 0);
 FUNC_2(VAR_7, 0);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x081c, 1);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0840, 4);
 FUNC_2(VAR_7, 0);
 FUNC_2(VAR_7, 1);
 FUNC_2(VAR_7, 0);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0200, 2);
 FUNC_2(VAR_7, VAR_9);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0214, 5);
 FUNC_2(VAR_7, VAR_2->fix.line_length);
 FUNC_2(VAR_7, VAR_2->var.xres_virtual);
 FUNC_2(VAR_7, VAR_2->var.yres_virtual);
 FUNC_2(VAR_7, FUNC_9(VAR_4->vma->addr));
 FUNC_2(VAR_7, FUNC_4(VAR_4->vma->addr));
 FUNC_0(VAR_7, VAR_1, 0x0230, 2);
 FUNC_2(VAR_7, VAR_9);
 FUNC_2(VAR_7, 1);
 FUNC_0(VAR_7, VAR_1, 0x0244, 5);
 FUNC_2(VAR_7, VAR_2->fix.line_length);
 FUNC_2(VAR_7, VAR_2->var.xres_virtual);
 FUNC_2(VAR_7, VAR_2->var.yres_virtual);
 FUNC_2(VAR_7, FUNC_9(VAR_4->vma->addr));
 FUNC_2(VAR_7, FUNC_4(VAR_4->vma->addr));
 FUNC_1(VAR_7);

 return 0;
}
