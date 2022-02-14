
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_drm {TYPE_1__* dev; } ;
struct TYPE_4__ {int sg; int bdev; } ;
struct nouveau_bo {TYPE_2__ bo; } ;
struct drm_gem_object {scalar_t__ import_attach; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_gem_object*,int ) ;
 struct nouveau_drm* FUNC_2 (int ) ;
 struct nouveau_bo* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (TYPE_2__*) ;

void
FUNC_8(struct drm_gem_object *VAR_1)
{
 struct nouveau_bo *VAR_2 = FUNC_3(VAR_1);
 struct nouveau_drm *VAR_3 = FUNC_2(VAR_2->bo.bdev);
 struct device *VAR_4 = VAR_3->dev->dev;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_5 < 0 && VAR_5 != -VAR_0))
  return;

 if (VAR_1->import_attach)
  FUNC_1(VAR_1, VAR_2->bo.sg);

 FUNC_7(&VAR_2->bo);

 FUNC_5(VAR_4);
 FUNC_6(VAR_4);
}
