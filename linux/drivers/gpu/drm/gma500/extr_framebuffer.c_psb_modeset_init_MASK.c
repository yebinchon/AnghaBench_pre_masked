
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct psb_intel_mode_device {int dummy; } ;
struct drm_psb_private {int num_pipe; int modeset; TYPE_2__* ops; struct psb_intel_mode_device mode_dev; } ;
struct TYPE_3__ {int max_width; int max_height; int fb_base; int * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_1__ mode_config; int pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_4__ {int (* errata ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct drm_device*,int,struct psb_intel_mode_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;

void FUNC_5(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 struct psb_intel_mode_device *VAR_4 = &VAR_3->mode_dev;
 int VAR_5;

 FUNC_0(VAR_2);

 VAR_2->mode_config.min_width = 0;
 VAR_2->mode_config.min_height = 0;

 VAR_2->mode_config.funcs = &VAR_1;



 FUNC_1(VAR_2->pdev, VAR_0, (u32 *)
     &(VAR_2->mode_config.fb_base));


 for (VAR_5 = 0; VAR_5 < VAR_3->num_pipe; VAR_5++)
  FUNC_2(VAR_2, VAR_5, VAR_4);

 VAR_2->mode_config.max_width = 4096;
 VAR_2->mode_config.max_height = 4096;

 FUNC_3(VAR_2);

 if (VAR_3->ops->errata)
         VAR_3->ops->errata(VAR_2);

        VAR_3->modeset = 1;
}
