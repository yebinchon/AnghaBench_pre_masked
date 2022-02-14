
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct nvkm_device {TYPE_1__* func; } ;
struct TYPE_20__ {int notifier_call; } ;
struct TYPE_14__ {scalar_t__ family; int chipset; } ;
struct TYPE_21__ {TYPE_2__ info; } ;
struct TYPE_17__ {TYPE_9__ device; } ;
struct TYPE_15__ {scalar_t__ entries; } ;
struct TYPE_16__ {TYPE_3__ dcb; } ;
struct nouveau_drm {TYPE_8__ acpi_nb; int hpd_work; TYPE_5__ client; TYPE_4__ vbios; struct nouveau_display* display; } ;
struct TYPE_18__ {scalar_t__ oclass; } ;
struct TYPE_12__ {TYPE_6__ object; } ;
struct nouveau_display {int (* dtor ) (struct drm_device*) ;TYPE_11__ disp; } ;
struct TYPE_19__ {int max_width; int max_height; int preferred_depth; int prefer_shadow; int async_page_flip; scalar_t__ num_crtc; scalar_t__ min_height; scalar_t__ min_width; int fb_base; int * funcs; } ;
struct drm_device {TYPE_7__ mode_config; } ;
struct TYPE_13__ {int (* resource_addr ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 struct nouveau_display* FUNC_9 (int,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct drm_device*) ;
 int VAR_7 ;
 int FUNC_11 (struct drm_device*) ;
 struct nouveau_drm* FUNC_12 (struct drm_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (TYPE_9__*,int ,TYPE_11__*) ;
 struct nvkm_device* FUNC_16 (TYPE_9__*) ;
 int FUNC_17 (TYPE_8__*) ;
 int FUNC_18 (struct nvkm_device*,int) ;
 int FUNC_19 (struct drm_device*) ;

int
FUNC_20(struct drm_device *VAR_10)
{
 struct nouveau_drm *VAR_11 = FUNC_12(VAR_10);
 struct nvkm_device *VAR_12 = FUNC_16(&VAR_11->client.device);
 struct nouveau_display *VAR_13;
 int VAR_14;

 VAR_13 = VAR_11->display = FUNC_9(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_5(VAR_10);
 FUNC_8(VAR_10);
 FUNC_7(VAR_10);

 VAR_10->mode_config.funcs = &VAR_8;
 VAR_10->mode_config.fb_base = VAR_12->func->resource_addr(VAR_12, 1);

 VAR_10->mode_config.min_width = 0;
 VAR_10->mode_config.min_height = 0;
 if (VAR_11->client.device.info.family < VAR_3) {
  VAR_10->mode_config.max_width = 2048;
  VAR_10->mode_config.max_height = 2048;
 } else
 if (VAR_11->client.device.info.family < VAR_5) {
  VAR_10->mode_config.max_width = 4096;
  VAR_10->mode_config.max_height = 4096;
 } else
 if (VAR_11->client.device.info.family < VAR_4) {
  VAR_10->mode_config.max_width = 8192;
  VAR_10->mode_config.max_height = 8192;
 } else {
  VAR_10->mode_config.max_width = 16384;
  VAR_10->mode_config.max_height = 16384;
 }

 VAR_10->mode_config.preferred_depth = 24;
 VAR_10->mode_config.prefer_shadow = 1;

 if (VAR_11->client.device.info.chipset < 0x11)
  VAR_10->mode_config.async_page_flip = 0;
 else
  VAR_10->mode_config.async_page_flip = 1;

 FUNC_3(VAR_10);
 FUNC_1(VAR_10);

 if (VAR_9 != 2 && VAR_11->vbios.dcb.entries) {
  VAR_14 = FUNC_15(&VAR_11->client.device, 0, &VAR_13->disp);
  if (VAR_14 == 0) {
   FUNC_10(VAR_10);
   if (VAR_13->disp.object.oclass < VAR_2)
    VAR_14 = FUNC_13(VAR_10);
   else
    VAR_14 = FUNC_14(VAR_10);
  }
 } else {
  VAR_14 = 0;
 }

 if (VAR_14)
  goto disp_create_err;

 FUNC_6(VAR_10);

 if (VAR_10->mode_config.num_crtc) {
  VAR_14 = FUNC_11(VAR_10);
  if (VAR_14)
   goto vblank_err;
 }

 FUNC_0(&VAR_11->hpd_work, VAR_7);





 return 0;

vblank_err:
 VAR_13->dtor(VAR_10);
disp_create_err:
 FUNC_2(VAR_10);
 FUNC_4(VAR_10);
 return VAR_14;
}
