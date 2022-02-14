
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int base; } ;
struct TYPE_5__ {int bdev; } ;
struct nouveau_drm {scalar_t__ fence; TYPE_2__ master; scalar_t__ channel; scalar_t__ cechan; TYPE_1__ ttm; } ;
struct TYPE_7__ {scalar_t__ num_crtc; } ;
struct drm_device {TYPE_3__ mode_config; } ;
struct TYPE_8__ {int (* resume ) (struct nouveau_drm*) ;int (* suspend ) (struct nouveau_drm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct nouveau_drm*) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int) ;
 TYPE_4__* FUNC_7 (struct nouveau_drm*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct nouveau_drm*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct nouveau_drm*) ;
 int FUNC_12 (struct nouveau_drm*) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int
FUNC_14(struct drm_device *VAR_2, bool VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 FUNC_9(VAR_4);
 FUNC_4(VAR_4);
 FUNC_8(VAR_2);

 if (VAR_2->mode_config.num_crtc) {
  FUNC_0(VAR_4, "suspending console...\n");
  FUNC_6(VAR_2, 1);
  FUNC_0(VAR_4, "suspending display...\n");
  VAR_5 = FUNC_3(VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_0(VAR_4, "evicting buffers...\n");
 FUNC_13(&VAR_4->ttm.bdev, VAR_1);

 FUNC_0(VAR_4, "waiting for kernel channels to go idle...\n");
 if (VAR_4->cechan) {
  VAR_5 = FUNC_1(VAR_4->cechan);
  if (VAR_5)
   goto fail_display;
 }

 if (VAR_4->channel) {
  VAR_5 = FUNC_1(VAR_4->channel);
  if (VAR_5)
   goto fail_display;
 }

 FUNC_0(VAR_4, "suspending fence...\n");
 if (VAR_4->fence && FUNC_7(VAR_4)->suspend) {
  if (!FUNC_7(VAR_4)->suspend(VAR_4)) {
   VAR_5 = -VAR_0;
   goto fail_display;
  }
 }

 FUNC_0(VAR_4, "suspending object tree...\n");
 VAR_5 = FUNC_10(&VAR_4->master.base);
 if (VAR_5)
  goto fail_client;

 return 0;

fail_client:
 if (VAR_4->fence && FUNC_7(VAR_4)->resume)
  FUNC_7(VAR_4)->resume(VAR_4);

fail_display:
 if (VAR_2->mode_config.num_crtc) {
  FUNC_0(VAR_4, "resuming display...\n");
  FUNC_2(VAR_2, VAR_3);
 }
 return VAR_5;
}
