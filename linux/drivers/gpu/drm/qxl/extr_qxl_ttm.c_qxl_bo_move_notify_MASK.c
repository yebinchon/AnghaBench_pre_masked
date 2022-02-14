
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttm_mem_reg {int dummy; } ;
struct TYPE_8__ {scalar_t__ mem_type; } ;
struct ttm_buffer_object {TYPE_4__ mem; } ;
struct qxl_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_7__ {TYPE_2__ base; } ;
struct qxl_bo {scalar_t__ surface_id; TYPE_3__ tbo; } ;
struct TYPE_5__ {struct qxl_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qxl_device*,struct qxl_bo*,int) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 struct qxl_bo* FUNC_2 (struct ttm_buffer_object*) ;

__attribute__((used)) static void FUNC_3(struct ttm_buffer_object *VAR_1,
          bool VAR_2,
          struct ttm_mem_reg *VAR_3)
{
 struct qxl_bo *VAR_4;
 struct qxl_device *VAR_5;

 if (!FUNC_1(VAR_1))
  return;
 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = VAR_4->tbo.base.dev->dev_private;

 if (VAR_1->mem.mem_type == VAR_0 && VAR_4->surface_id)
  FUNC_0(VAR_5, VAR_4, VAR_3 ? 1 : 0);
}
