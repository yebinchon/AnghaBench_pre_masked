
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_buffer_object {int dummy; } ;
struct qxl_device {int dummy; } ;
struct qxl_bo {struct ttm_buffer_object tbo; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ dev_private; } ;


 struct qxl_bo* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct qxl_device*,struct qxl_bo*,int) ;
 int FUNC_2 (struct ttm_buffer_object*) ;

void FUNC_3(struct drm_gem_object *VAR_0)
{
 struct qxl_bo *VAR_1 = FUNC_0(VAR_0);
 struct qxl_device *VAR_2;
 struct ttm_buffer_object *VAR_3;

 VAR_2 = (struct qxl_device *)VAR_0->dev->dev_private;

 FUNC_1(VAR_2, VAR_1, 0);

 VAR_3 = &VAR_1->tbo;
 FUNC_2(VAR_3);
}
