
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_dsi_host {int tx_buf_paddr; int tx_buf; int tx_size; int * tx_gem_obj; struct drm_device* dev; } ;
struct msm_drm_private {TYPE_1__* kms; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {int aspace; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct msm_dsi_host *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct msm_drm_private *VAR_2;







 if (!VAR_1)
  return;

 VAR_2 = VAR_1->dev_private;
 if (VAR_0->tx_gem_obj) {
  FUNC_2(VAR_0->tx_gem_obj, VAR_2->kms->aspace);
  FUNC_1(VAR_0->tx_gem_obj);
  VAR_0->tx_gem_obj = ((void*)0);
 }

 if (VAR_0->tx_buf)
  FUNC_0(VAR_1->dev, VAR_0->tx_size, VAR_0->tx_buf,
   VAR_0->tx_buf_paddr);
}
