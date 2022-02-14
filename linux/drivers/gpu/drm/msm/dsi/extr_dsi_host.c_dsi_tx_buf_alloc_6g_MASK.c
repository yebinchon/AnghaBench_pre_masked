
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u8 ;
struct msm_dsi_host {TYPE_2__* tx_gem_obj; int tx_size; struct drm_device* dev; } ;
struct msm_drm_private {TYPE_1__* kms; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int aspace; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct drm_device*,int,int ,int ,TYPE_2__**,int *) ;
 int FUNC_3 (TYPE_2__*,char*) ;

int FUNC_4(struct msm_dsi_host *VAR_1, int VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;
 uint64_t VAR_5;
 u8 *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_0,
     VAR_4->kms->aspace,
     &VAR_1->tx_gem_obj, &VAR_5);

 if (FUNC_0(VAR_6)) {
  VAR_1->tx_gem_obj = ((void*)0);
  return FUNC_1(VAR_6);
 }

 FUNC_3(VAR_1->tx_gem_obj, "tx_gem");

 VAR_1->tx_size = VAR_1->tx_gem_obj->size;

 return 0;
}
