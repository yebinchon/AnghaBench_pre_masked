
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fsl_dcu_drm_device {TYPE_2__* drm; int crtc; } ;
struct TYPE_6__ {int max_width; int max_height; int * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct TYPE_7__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct fsl_dcu_drm_device*) ;
 int FUNC_5 (struct fsl_dcu_drm_device*) ;
 int FUNC_6 (struct fsl_dcu_drm_device*,int *) ;
 int VAR_0 ;

int FUNC_7(struct fsl_dcu_drm_device *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1->drm);

 VAR_1->drm->mode_config.min_width = 0;
 VAR_1->drm->mode_config.min_height = 0;
 VAR_1->drm->mode_config.max_width = 2031;
 VAR_1->drm->mode_config.max_height = 2047;
 VAR_1->drm->mode_config.funcs = &VAR_0;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_6(VAR_1, &VAR_1->crtc);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto err;

 FUNC_3(VAR_1->drm);
 FUNC_0(VAR_1->drm);

 return 0;

err:
 FUNC_1(VAR_1->drm);
 return VAR_2;
}
