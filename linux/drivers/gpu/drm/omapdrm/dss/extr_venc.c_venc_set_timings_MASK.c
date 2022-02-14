
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venc_device {int venc_lock; TYPE_1__* dss; int * config; } ;
struct omap_dss_device {int dummy; } ;
struct drm_display_mode {int dummy; } ;
typedef enum venc_videomode { ____Placeholder_venc_videomode } venc_videomode ;
struct TYPE_2__ {int dispc; } ;


 int FUNC_0 (char*) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 struct venc_device* FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct drm_display_mode const*) ;

__attribute__((used)) static void FUNC_7(struct omap_dss_device *VAR_2,
        const struct drm_display_mode *VAR_3)
{
 struct venc_device *VAR_4 = FUNC_3(VAR_2);
 enum venc_videomode VAR_5 = FUNC_6(VAR_3);

 FUNC_0("venc_set_timings\n");

 FUNC_4(&VAR_4->venc_lock);

 switch (VAR_5) {
 default:
  FUNC_1(1);

 case 128:
  VAR_4->config = &VAR_1;
  break;

 case 129:
  VAR_4->config = &VAR_0;
  break;
 }

 FUNC_2(VAR_4->dss->dispc, 13500000);

 FUNC_5(&VAR_4->venc_lock);
}
