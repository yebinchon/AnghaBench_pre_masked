
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_5__ {TYPE_1__* dev; int resv; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct qxl_bo {TYPE_3__ tbo; int placement; int type; int pin_count; } ;
struct TYPE_4__ {int dev_private; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct qxl_bo*) ;
 int FUNC_2 (struct qxl_bo*,int ,int) ;
 int FUNC_3 (TYPE_3__*,int *,struct ttm_operation_ctx*) ;

__attribute__((used)) static int FUNC_4(struct qxl_bo *VAR_0)
{
 struct ttm_operation_ctx VAR_1 = { 1, 0 };
 int VAR_2;

 if (!VAR_0->pin_count) {
  FUNC_2(VAR_0, VAR_0->type, 0);
  VAR_2 = FUNC_3(&VAR_0->tbo, &VAR_0->placement, &VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0->tbo.base.resv, 1);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_0->tbo.base.dev->dev_private, VAR_0);
 if (VAR_2)
  return VAR_2;
 return 0;
}
