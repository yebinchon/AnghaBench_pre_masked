
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ family; int chipset; } ;
struct nvif_device {TYPE_4__ info; } ;
struct TYPE_18__ {int handle; } ;
struct TYPE_10__ {struct drm_device* dev; } ;
struct nouveau_fbdev {TYPE_9__ rop; TYPE_9__ patt; TYPE_9__ surf2d; TYPE_9__ gdi; TYPE_9__ blit; TYPE_9__ clip; TYPE_1__ helper; } ;
struct TYPE_11__ {struct nvif_device device; } ;
struct nouveau_drm {TYPE_2__ client; struct nouveau_channel* channel; } ;
struct TYPE_14__ {int handle; } ;
struct nouveau_channel {TYPE_5__ vram; int user; } ;
struct TYPE_12__ {int length; } ;
struct TYPE_17__ {int bits_per_pixel; int yres_virtual; int xres_virtual; TYPE_3__ transp; } ;
struct TYPE_15__ {int line_length; int smem_start; } ;
struct fb_info {TYPE_8__ var; TYPE_6__ fix; struct nouveau_fbdev* par; } ;
struct TYPE_16__ {int fb_base; } ;
struct drm_device {TYPE_7__ mode_config; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 scalar_t__ FUNC_3 (struct nouveau_channel*,int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (int *,int,int,int *,int ,TYPE_9__*) ;

int
FUNC_7(struct fb_info *VAR_5)
{
 struct nouveau_fbdev *VAR_6 = VAR_5->par;
 struct drm_device *VAR_7 = VAR_6->helper.dev;
 struct nouveau_drm *VAR_8 = FUNC_4(VAR_7);
 struct nouveau_channel *VAR_9 = VAR_8->channel;
 struct nvif_device *VAR_10 = &VAR_8->client.device;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;

 switch (VAR_5->var.bits_per_pixel) {
 case 8:
  VAR_11 = 1;
  VAR_12 = 3;
  VAR_13 = 3;
  break;
 case 16:
  VAR_11 = 4;
  VAR_12 = 1;
  VAR_13 = 1;
  break;
 case 32:
  switch (VAR_5->var.transp.length) {
  case 0:
  case 8:
   break;
  default:
   return -VAR_0;
  }

  VAR_11 = 6;
  VAR_12 = 3;
  VAR_13 = 3;
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = FUNC_6(&VAR_9->user, 0x0062,
          VAR_10->info.family >= VAR_1 ?
          0x0062 : 0x0042, ((void*)0), 0, &VAR_6->surf2d);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_6(&VAR_9->user, 0x0019, 0x0019, ((void*)0), 0,
          &VAR_6->clip);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_6(&VAR_9->user, 0x0043, 0x0043, ((void*)0), 0,
          &VAR_6->rop);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_6(&VAR_9->user, 0x0044, 0x0044, ((void*)0), 0,
          &VAR_6->patt);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_6(&VAR_9->user, 0x004a, 0x004a, ((void*)0), 0,
          &VAR_6->gdi);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_6(&VAR_9->user, 0x005f,
          VAR_10->info.chipset >= 0x11 ? 0x009f : 0x005f,
          ((void*)0), 0, &VAR_6->blit);
 if (VAR_14)
  return VAR_14;

 if (FUNC_3(VAR_9, 49 + (VAR_10->info.chipset >= 0x11 ? 4 : 0))) {
  FUNC_5(VAR_5);
  return 0;
 }

 FUNC_0(VAR_9, VAR_2, 0x0000, 1);
 FUNC_2(VAR_9, VAR_6->surf2d.handle);
 FUNC_0(VAR_9, VAR_2, 0x0184, 2);
 FUNC_2(VAR_9, VAR_9->vram.handle);
 FUNC_2(VAR_9, VAR_9->vram.handle);
 FUNC_0(VAR_9, VAR_2, 0x0300, 4);
 FUNC_2(VAR_9, VAR_11);
 FUNC_2(VAR_9, VAR_5->fix.line_length | (VAR_5->fix.line_length << 16));
 FUNC_2(VAR_9, VAR_5->fix.smem_start - VAR_7->mode_config.fb_base);
 FUNC_2(VAR_9, VAR_5->fix.smem_start - VAR_7->mode_config.fb_base);

 FUNC_0(VAR_9, VAR_2, 0x0000, 1);
 FUNC_2(VAR_9, VAR_6->rop.handle);
 FUNC_0(VAR_9, VAR_2, 0x0300, 1);
 FUNC_2(VAR_9, 0x55);

 FUNC_0(VAR_9, VAR_2, 0x0000, 1);
 FUNC_2(VAR_9, VAR_6->patt.handle);
 FUNC_0(VAR_9, VAR_2, 0x0300, 8);
 FUNC_2(VAR_9, VAR_12);



 FUNC_2(VAR_9, 1);

 FUNC_2(VAR_9, 0);
 FUNC_2(VAR_9, 1);
 FUNC_2(VAR_9, ~0);
 FUNC_2(VAR_9, ~0);
 FUNC_2(VAR_9, ~0);
 FUNC_2(VAR_9, ~0);

 FUNC_0(VAR_9, VAR_2, 0x0000, 1);
 FUNC_2(VAR_9, VAR_6->clip.handle);
 FUNC_0(VAR_9, VAR_2, 0x0300, 2);
 FUNC_2(VAR_9, 0);
 FUNC_2(VAR_9, (VAR_5->var.yres_virtual << 16) | VAR_5->var.xres_virtual);

 FUNC_0(VAR_9, VAR_4, 0x0000, 1);
 FUNC_2(VAR_9, VAR_6->blit.handle);
 FUNC_0(VAR_9, VAR_4, 0x019c, 1);
 FUNC_2(VAR_9, VAR_6->surf2d.handle);
 FUNC_0(VAR_9, VAR_4, 0x02fc, 1);
 FUNC_2(VAR_9, 3);
 if (VAR_10->info.chipset >= 0x11 ) {
  FUNC_0(VAR_9, VAR_4, 0x0120, 3);
  FUNC_2(VAR_9, 0);
  FUNC_2(VAR_9, 1);
  FUNC_2(VAR_9, 2);
 }

 FUNC_0(VAR_9, VAR_3, 0x0000, 1);
 FUNC_2(VAR_9, VAR_6->gdi.handle);
 FUNC_0(VAR_9, VAR_3, 0x0198, 1);
 FUNC_2(VAR_9, VAR_6->surf2d.handle);
 FUNC_0(VAR_9, VAR_3, 0x0188, 2);
 FUNC_2(VAR_9, VAR_6->patt.handle);
 FUNC_2(VAR_9, VAR_6->rop.handle);
 FUNC_0(VAR_9, VAR_3, 0x0304, 1);
 FUNC_2(VAR_9, 1);
 FUNC_0(VAR_9, VAR_3, 0x0300, 1);
 FUNC_2(VAR_9, VAR_13);
 FUNC_0(VAR_9, VAR_3, 0x02fc, 1);
 FUNC_2(VAR_9, 3);

 FUNC_1(VAR_9);

 return 0;
}
