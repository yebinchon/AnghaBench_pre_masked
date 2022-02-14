
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct qxl_bo {int pin_count; int placement; TYPE_2__ tbo; int type; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*,struct qxl_bo*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct qxl_bo*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int *,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct qxl_bo *VAR_0)
{
 struct ttm_operation_ctx VAR_1 = { 0, 0 };
 struct drm_device *VAR_2 = VAR_0->tbo.base.dev;
 int VAR_3;

 if (VAR_0->pin_count) {
  VAR_0->pin_count++;
  return 0;
 }
 FUNC_2(VAR_0, VAR_0->type, 1);
 VAR_3 = FUNC_3(&VAR_0->tbo, &VAR_0->placement, &VAR_1);
 if (FUNC_1(VAR_3 == 0)) {
  VAR_0->pin_count = 1;
 }
 if (FUNC_4(VAR_3 != 0))
  FUNC_0(VAR_2->dev, "%p pin failed\n", VAR_0);
 return VAR_3;
}
