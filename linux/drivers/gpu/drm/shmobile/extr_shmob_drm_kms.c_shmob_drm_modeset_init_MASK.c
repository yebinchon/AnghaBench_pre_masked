
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int encoder; } ;
struct shmob_drm_device {TYPE_3__* ddev; TYPE_1__ encoder; } ;
struct TYPE_7__ {int max_width; int max_height; int * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct TYPE_8__ {TYPE_2__ mode_config; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct shmob_drm_device*,int *) ;
 int FUNC_4 (struct shmob_drm_device*) ;
 int FUNC_5 (struct shmob_drm_device*) ;
 int VAR_0 ;

int FUNC_6(struct shmob_drm_device *VAR_1)
{
 FUNC_2(VAR_1->ddev);

 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1, &VAR_1->encoder.encoder);

 FUNC_1(VAR_1->ddev);

 VAR_1->ddev->mode_config.min_width = 0;
 VAR_1->ddev->mode_config.min_height = 0;
 VAR_1->ddev->mode_config.max_width = 4095;
 VAR_1->ddev->mode_config.max_height = 4095;
 VAR_1->ddev->mode_config.funcs = &VAR_0;

 FUNC_0(VAR_1->ddev);

 return 0;
}
