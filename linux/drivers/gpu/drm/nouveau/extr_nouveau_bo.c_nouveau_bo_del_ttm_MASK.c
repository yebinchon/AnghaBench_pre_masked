
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dev; } ;
struct ttm_buffer_object {TYPE_1__ base; int bdev; } ;
struct nouveau_drm {struct drm_device* dev; } ;
struct nouveau_bo {scalar_t__ pin_refcnt; int tile; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nouveau_bo*) ;
 struct nouveau_drm* FUNC_3 (int ) ;
 struct nouveau_bo* FUNC_4 (struct ttm_buffer_object*) ;
 int FUNC_5 (struct drm_device*,int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct ttm_buffer_object *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_3(VAR_0->bdev);
 struct drm_device *VAR_2 = VAR_1->dev;
 struct nouveau_bo *VAR_3 = FUNC_4(VAR_0);

 FUNC_0(VAR_3->pin_refcnt > 0);
 FUNC_5(VAR_2, VAR_3->tile, ((void*)0));





 if (VAR_0->base.dev)
  FUNC_1(&VAR_0->base);

 FUNC_2(VAR_3);
}
