
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct drm_framebuffer {int height; int width; } ;
struct psb_framebuffer {struct drm_framebuffer base; struct fb_info* fbdev; } ;
struct TYPE_15__ {struct drm_framebuffer* fb; struct drm_device* dev; } ;
struct psb_fbdev {TYPE_7__ psb_fb_helper; struct psb_framebuffer pfb; } ;
struct gtt_range {scalar_t__ offset; } ;
struct TYPE_14__ {int smem_len; int ywrapstep; int mmio_len; int mmio_start; scalar_t__ ypanstep; int smem_start; } ;
struct fb_info {int screen_size; TYPE_6__ fix; TYPE_4__* apertures; scalar_t__ screen_base; int * fbops; int flags; } ;
struct TYPE_13__ {scalar_t__ stolen_size; } ;
struct drm_psb_private {TYPE_5__ gtt; scalar_t__ vram_addr; TYPE_1__* ops; } ;
struct drm_mode_fb_cmd2 {int width; int height; int* pitches; int pixel_format; } ;
struct drm_fb_helper_surface_size {int surface_width; int surface_height; int surface_bpp; int surface_depth; } ;
struct TYPE_10__ {int fb_base; } ;
struct drm_device {int dev; int pdev; TYPE_2__ mode_config; struct drm_psb_private* dev_private; } ;
struct TYPE_12__ {TYPE_3__* ranges; } ;
struct TYPE_11__ {scalar_t__ size; int base; } ;
struct TYPE_9__ {scalar_t__ accel_2d; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct fb_info*) ;
 int VAR_2 ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 struct fb_info* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (struct fb_info*,TYPE_7__*,struct drm_fb_helper_surface_size*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct drm_device*,struct psb_framebuffer*,struct drm_mode_fb_cmd2*,struct gtt_range*) ;
 int FUNC_11 (struct drm_device*,struct gtt_range*) ;
 struct gtt_range* FUNC_12 (struct drm_device*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(struct psb_fbdev *VAR_6,
    struct drm_fb_helper_surface_size *VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->psb_fb_helper.dev;
 struct drm_psb_private *VAR_9 = VAR_8->dev_private;
 struct fb_info *VAR_10;
 struct drm_framebuffer *VAR_11;
 struct psb_framebuffer *VAR_12 = &VAR_6->pfb;
 struct drm_mode_fb_cmd2 VAR_13;
 int VAR_14;
 int VAR_15;
 struct gtt_range *VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;

 VAR_13.width = VAR_7->surface_width;
 VAR_13.height = VAR_7->surface_height;
 VAR_17 = VAR_7->surface_bpp;
 VAR_18 = VAR_7->surface_depth;


 if (VAR_17 == 24)
  VAR_17 = 32;

 do {





         VAR_13.pitches[0] = FUNC_0(VAR_13.width * ((VAR_17 + 7) / 8), 4096 >> VAR_20);

         VAR_14 = VAR_13.pitches[0] * VAR_13.height;
         VAR_14 = FUNC_0(VAR_14, VAR_2);


  VAR_16 = FUNC_12(VAR_8, VAR_14);

  if (VAR_20)
   VAR_20 *= 2;
  else
   VAR_20 = 1;
  VAR_19++;
 } while (VAR_16 == ((void*)0) && VAR_20 <= 16);


 VAR_20 /= 2;

 if (VAR_16 == ((void*)0)) {






  VAR_19 = 0;
  VAR_20 = 64;

  VAR_13.pitches[0] = FUNC_0(VAR_13.width * ((VAR_17 + 7) / 8), 64);

  VAR_14 = VAR_13.pitches[0] * VAR_13.height;
  VAR_14 = FUNC_0(VAR_14, VAR_2);


  VAR_16 = FUNC_12(VAR_8, VAR_14);
  if (VAR_16 == ((void*)0))
   return -VAR_0;
 }

 FUNC_7(VAR_9->vram_addr + VAR_16->offset, 0, VAR_14);

 VAR_10 = FUNC_4(&VAR_6->psb_fb_helper);
 if (FUNC_1(VAR_10)) {
  VAR_15 = FUNC_2(VAR_10);
  goto out;
 }

 VAR_13.pixel_format = FUNC_6(VAR_17, VAR_18);

 VAR_15 = FUNC_10(VAR_8, VAR_12, &VAR_13, VAR_16);
 if (VAR_15)
  goto out;

 VAR_11 = &VAR_12->base;
 VAR_12->fbdev = VAR_10;

 VAR_6->psb_fb_helper.fb = VAR_11;

 if (VAR_9->ops->accel_2d && VAR_20 > 8)
  VAR_10->fbops = &VAR_3;
 else if (VAR_19) {
  VAR_10->fbops = &VAR_4;
  VAR_10->flags |= VAR_1;
 } else
  VAR_10->fbops = &VAR_5;

 VAR_10->fix.smem_start = VAR_8->mode_config.fb_base;
 VAR_10->fix.smem_len = VAR_14;
 VAR_10->fix.ywrapstep = VAR_19;
 VAR_10->fix.ypanstep = 0;


 VAR_10->screen_base = VAR_9->vram_addr + VAR_16->offset;
 VAR_10->screen_size = VAR_14;

 if (VAR_9->gtt.stolen_size) {
  VAR_10->apertures->ranges[0].base = VAR_8->mode_config.fb_base;
  VAR_10->apertures->ranges[0].size = VAR_9->gtt.stolen_size;
 }

 FUNC_5(VAR_10, &VAR_6->psb_fb_helper, VAR_7);

 VAR_10->fix.mmio_start = FUNC_9(VAR_8->pdev, 0);
 VAR_10->fix.mmio_len = FUNC_8(VAR_8->pdev, 0);



 FUNC_3(VAR_8->dev, "allocated %dx%d fb\n",
     VAR_12->base.width, VAR_12->base.height);

 return 0;
out:
 FUNC_11(VAR_8, VAR_16);
 return VAR_15;
}
