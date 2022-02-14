
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct msm_dsi_host {int tx_gem_obj; struct drm_device* dev; } ;
struct msm_drm_private {TYPE_1__* kms; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {int aspace; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

int FUNC_1(struct msm_dsi_host *VAR_1, uint64_t *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;

 if (!VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_1->tx_gem_obj,
    VAR_4->kms->aspace, VAR_2);
}
