
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_gem_object {TYPE_1__* sgt; } ;
struct rockchip_drm_private {scalar_t__ domain; } ;
struct drm_gem_object {scalar_t__ import_attach; struct drm_device* dev; } ;
struct drm_device {int dev; struct rockchip_drm_private* dev_private; } ;
struct TYPE_2__ {int nents; int sgl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct drm_gem_object*,TYPE_1__*) ;
 int FUNC_2 (struct rockchip_gem_object*) ;
 int FUNC_3 (struct rockchip_gem_object*) ;
 int FUNC_4 (struct rockchip_gem_object*) ;
 struct rockchip_gem_object* FUNC_5 (struct drm_gem_object*) ;

void FUNC_6(struct drm_gem_object *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct rockchip_drm_private *VAR_3 = VAR_2->dev_private;
 struct rockchip_gem_object *VAR_4 = FUNC_5(VAR_1);

 if (VAR_1->import_attach) {
  if (VAR_3->domain) {
   FUNC_3(VAR_4);
  } else {
   FUNC_0(VAR_2->dev, VAR_4->sgt->sgl,
         VAR_4->sgt->nents, VAR_0);
  }
  FUNC_1(VAR_1, VAR_4->sgt);
 } else {
  FUNC_2(VAR_4);
 }

 FUNC_4(VAR_4);
}
