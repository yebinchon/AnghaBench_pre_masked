
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_drm_private {int cmdbuf_suballoc; } ;
struct drm_device {struct etnaviv_drm_private* dev_private; } ;
struct device {int * dma_parms; } ;


 int FUNC_0 (struct device*,struct drm_device*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct etnaviv_drm_private*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_1(VAR_0);
 struct etnaviv_drm_private *VAR_2 = VAR_1->dev_private;

 FUNC_3(VAR_1);

 FUNC_0(VAR_0, VAR_1);

 VAR_0->dma_parms = ((void*)0);

 FUNC_4(VAR_2->cmdbuf_suballoc);

 VAR_1->dev_private = ((void*)0);
 FUNC_5(VAR_2);

 FUNC_2(VAR_1);
}
