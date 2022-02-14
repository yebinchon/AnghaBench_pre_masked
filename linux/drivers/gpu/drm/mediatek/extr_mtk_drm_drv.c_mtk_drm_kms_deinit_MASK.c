
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_drm_private {TYPE_1__* dma_dev; scalar_t__ dma_parms_allocated; } ;
struct drm_device {int dev; struct mtk_drm_private* dev_private; } ;
struct TYPE_2__ {int * dma_parms; } ;


 int FUNC_0 (int ,struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0)
{
 struct mtk_drm_private *VAR_1 = VAR_0->dev_private;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 if (VAR_1->dma_parms_allocated)
  VAR_1->dma_dev->dma_parms = ((void*)0);

 FUNC_0(VAR_0->dev, VAR_0);
 FUNC_3(VAR_0);
}
