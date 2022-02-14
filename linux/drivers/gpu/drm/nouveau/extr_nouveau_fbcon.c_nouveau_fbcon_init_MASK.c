
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_20__ {TYPE_7__* fbdev; } ;
struct nouveau_fbdev {TYPE_8__ helper; int hotplug_lock; } ;
struct TYPE_15__ {int ram_size; } ;
struct TYPE_16__ {TYPE_3__ info; } ;
struct TYPE_17__ {TYPE_4__ device; } ;
struct nouveau_drm {TYPE_5__ client; int fbcon_work; struct nouveau_fbdev* fbcon; } ;
struct TYPE_13__ {int num_crtc; } ;
struct drm_device {TYPE_2__* pdev; TYPE_1__ mode_config; } ;
struct TYPE_18__ {int buf_align; } ;
struct TYPE_19__ {TYPE_6__ pixmap; } ;
struct TYPE_14__ {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (struct drm_device*,TYPE_8__*,int) ;
 int FUNC_4 (TYPE_8__*,int) ;
 int FUNC_5 (struct drm_device*,TYPE_8__*,int *) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct nouveau_fbdev*) ;
 struct nouveau_fbdev* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 struct nouveau_drm* FUNC_11 (struct drm_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_12(struct drm_device *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_11(VAR_6);
 struct nouveau_fbdev *VAR_8;
 int VAR_9 = VAR_3;
 int VAR_10;

 if (!VAR_6->mode_config.num_crtc ||
     (VAR_6->pdev->class >> 8) != VAR_2)
  return 0;

 VAR_8 = FUNC_9(sizeof(struct nouveau_fbdev), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->fbcon = VAR_8;
 FUNC_0(&VAR_7->fbcon_work, VAR_5);
 FUNC_10(&VAR_8->hotplug_lock);

 FUNC_5(VAR_6, &VAR_8->helper, &VAR_4);

 VAR_10 = FUNC_3(VAR_6, &VAR_8->helper, 4);
 if (VAR_10)
  goto free;

 VAR_10 = FUNC_6(&VAR_8->helper);
 if (VAR_10)
  goto fini;

 if (VAR_9 != 8 && VAR_9 != 16 && VAR_9 != 32) {
  if (VAR_7->client.device.info.ram_size <= 32 * 1024 * 1024)
   VAR_9 = 8;
  else
  if (VAR_7->client.device.info.ram_size <= 64 * 1024 * 1024)
   VAR_9 = 16;
  else
   VAR_9 = 32;
 }


 if (!FUNC_1(VAR_6))
  FUNC_7(VAR_6);

 VAR_10 = FUNC_4(&VAR_8->helper, VAR_9);
 if (VAR_10)
  goto fini;

 if (VAR_8->helper.fbdev)
  VAR_8->helper.fbdev->pixmap.buf_align = 4;
 return 0;

fini:
 FUNC_2(&VAR_8->helper);
free:
 FUNC_8(VAR_8);
 return VAR_10;
}
