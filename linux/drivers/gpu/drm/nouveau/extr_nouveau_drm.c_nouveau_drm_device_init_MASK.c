
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int chipset; } ;
struct TYPE_10__ {int object; TYPE_2__ info; } ;
struct TYPE_13__ {TYPE_3__ device; int base; } ;
struct TYPE_8__ {int lock; } ;
struct nouveau_drm {TYPE_6__ master; TYPE_6__ client; TYPE_1__ tile; int clients; struct drm_device* dev; } ;
struct TYPE_11__ {scalar_t__ num_crtc; } ;
struct drm_device {int irq_enabled; int dev; TYPE_4__ mode_config; struct nouveau_drm* dev_private; } ;
struct TYPE_12__ {int debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_drm*) ;
 struct nouveau_drm* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nouveau_drm*) ;
 int FUNC_4 (struct nouveau_drm*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (struct nouveau_drm*,char*,TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_9 (struct nouveau_drm*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*,int,int) ;
 int FUNC_13 (struct nouveau_drm*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_device*) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (struct nouveau_drm*) ;
 int FUNC_19 (struct nouveau_drm*) ;
 int FUNC_20 (struct nouveau_drm*) ;
 int FUNC_21 (struct nouveau_drm*) ;
 int FUNC_22 (struct nouveau_drm*) ;
 int FUNC_23 (int *,int,int,int) ;
 int FUNC_24 (int ,char*) ;
 TYPE_5__* FUNC_25 (int *) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int *) ;

__attribute__((used)) static int
FUNC_33(struct drm_device *VAR_3)
{
 struct nouveau_drm *VAR_4;
 int VAR_5;

 if (!(VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1)))
  return -VAR_0;
 VAR_3->dev_private = VAR_4;
 VAR_4->dev = VAR_3;

 VAR_5 = FUNC_8(VAR_4, "DRM-master", &VAR_4->master);
 if (VAR_5)
  goto fail_alloc;

 VAR_5 = FUNC_8(VAR_4, "DRM", &VAR_4->client);
 if (VAR_5)
  goto fail_master;

 VAR_3->irq_enabled = 1;

 FUNC_25(&VAR_4->client.base)->debug =
  FUNC_24(VAR_2, "DRM");

 FUNC_0(&VAR_4->clients);
 FUNC_32(&VAR_4->tile.lock);





 if (VAR_4->client.device.info.chipset == 0xc1)
  FUNC_23(&VAR_4->client.device.object, 0x00088080, 0x00000800, 0x00000000);

 FUNC_22(VAR_4);

 VAR_5 = FUNC_20(VAR_4);
 if (VAR_5)
  goto fail_ttm;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  goto fail_bios;

 FUNC_4(VAR_4);

 VAR_5 = FUNC_10(VAR_3);
 if (VAR_5)
  goto fail_dispctor;

 if (VAR_3->mode_config.num_crtc) {
  VAR_5 = FUNC_12(VAR_3, 0, 0);
  if (VAR_5)
   goto fail_dispinit;
 }

 FUNC_9(VAR_4);
 FUNC_15(VAR_3);
 FUNC_18(VAR_4);
 FUNC_13(VAR_4);
 FUNC_14(VAR_3);
 FUNC_16(VAR_3);

 if (FUNC_17()) {
  FUNC_31(VAR_3->dev);
  FUNC_30(VAR_3->dev, 5000);
  FUNC_29(VAR_3->dev);
  FUNC_26(VAR_3->dev);
  FUNC_27(VAR_3->dev);
  FUNC_28(VAR_3->dev);
 }

 return 0;

fail_dispinit:
 FUNC_11(VAR_3);
fail_dispctor:
 FUNC_3(VAR_4);
 FUNC_6(VAR_3);
fail_bios:
 FUNC_19(VAR_4);
fail_ttm:
 FUNC_21(VAR_4);
 FUNC_7(&VAR_4->client);
fail_master:
 FUNC_7(&VAR_4->master);
fail_alloc:
 FUNC_1(VAR_4);
 return VAR_5;
}
