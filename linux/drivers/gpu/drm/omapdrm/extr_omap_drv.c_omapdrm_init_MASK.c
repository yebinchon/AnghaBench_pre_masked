
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_device_attribute {scalar_t__ data; } ;
struct omap_drm_private {unsigned int omaprev; unsigned int num_pipes; int wq; TYPE_1__* pipes; struct device* dev; int dispc; TYPE_2__* dispc_ops; int max_bandwidth; int obj_list; int list_lock; int dss; struct drm_device* ddev; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int (* get_memory_bandwidth_limit ) (int ) ;} ;
struct TYPE_3__ {int crtc; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct drm_device* FUNC_11 (int *,struct device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*,int ) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_device*) ;
 int FUNC_17 (struct drm_device*,unsigned int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct omap_drm_private*) ;
 int FUNC_20 (struct omap_drm_private*) ;
 int FUNC_21 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_22 (struct drm_device*) ;
 int FUNC_23 (struct drm_device*) ;
 int FUNC_24 (struct drm_device*) ;
 int FUNC_25 (struct drm_device*) ;
 int FUNC_26 (struct drm_device*) ;
 int FUNC_27 (struct drm_device*) ;
 int FUNC_28 (struct drm_device*) ;
 int FUNC_29 (struct drm_device*) ;
 int VAR_1 ;
 int FUNC_30 () ;
 struct soc_device_attribute* FUNC_31 (int ) ;
 int FUNC_32 (int ) ;

__attribute__((used)) static int FUNC_33(struct omap_drm_private *VAR_2, struct device *VAR_3)
{
 const struct soc_device_attribute *VAR_4;
 struct drm_device *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0("%s", FUNC_7(VAR_3));


 VAR_5 = FUNC_11(&VAR_0, VAR_3);
 if (FUNC_2(VAR_5))
  return FUNC_3(VAR_5);

 VAR_2->ddev = VAR_5;
 VAR_5->dev_private = VAR_2;

 VAR_2->dev = VAR_3;
 VAR_2->dss = FUNC_30();
 VAR_2->dispc = FUNC_8(VAR_2->dss);
 VAR_2->dispc_ops = FUNC_9(VAR_2->dss);

 FUNC_19(VAR_2);

 VAR_4 = FUNC_31(VAR_1);
 VAR_2->omaprev = VAR_4 ? (unsigned int)VAR_4->data : 0;
 VAR_2->wq = FUNC_4("omapdrm", 0);

 FUNC_18(&VAR_2->list_lock);
 FUNC_1(&VAR_2->obj_list);


 if (VAR_2->dispc_ops->get_memory_bandwidth_limit)
  VAR_2->max_bandwidth =
   VAR_2->dispc_ops->get_memory_bandwidth_limit(VAR_2->dispc);

 FUNC_26(VAR_5);

 VAR_7 = FUNC_29(VAR_5);
 if (VAR_7) {
  FUNC_6(VAR_2->dev, "omap_modeset_init failed: ret=%d\n", VAR_7);
  goto err_gem_deinit;
 }


 VAR_7 = FUNC_17(VAR_5, VAR_2->num_pipes);
 if (VAR_7) {
  FUNC_6(VAR_2->dev, "could not init vblank\n");
  goto err_cleanup_modeset;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->num_pipes; VAR_6++)
  FUNC_10(VAR_2->pipes[VAR_6].crtc);

 FUNC_24(VAR_5);

 FUNC_15(VAR_5);
 FUNC_28(VAR_5);





 VAR_7 = FUNC_13(VAR_5, 0);
 if (VAR_7)
  goto err_cleanup_helpers;

 return 0;

err_cleanup_helpers:
 FUNC_27(VAR_5);
 FUNC_14(VAR_5);

 FUNC_23(VAR_5);
err_cleanup_modeset:
 FUNC_16(VAR_5);
 FUNC_22(VAR_5);
err_gem_deinit:
 FUNC_25(VAR_5);
 FUNC_5(VAR_2->wq);
 FUNC_21(VAR_5);
 FUNC_20(VAR_2);
 FUNC_12(VAR_5);
 return VAR_7;
}
