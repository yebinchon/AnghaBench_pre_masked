
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttm_buffer_object {int dummy; } ;
struct TYPE_5__ {int mutex; } ;
struct qxl_device {TYPE_1__ gem; } ;
struct TYPE_8__ {TYPE_2__* dev; } ;
struct TYPE_7__ {TYPE_4__ base; } ;
struct qxl_bo {scalar_t__ map_count; TYPE_3__ tbo; int list; } ;
struct TYPE_6__ {scalar_t__ dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct qxl_bo*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qxl_device*,struct qxl_bo*,int) ;
 struct qxl_bo* FUNC_7 (struct ttm_buffer_object*) ;

__attribute__((used)) static void FUNC_8(struct ttm_buffer_object *VAR_0)
{
 struct qxl_bo *VAR_1;
 struct qxl_device *VAR_2;

 VAR_1 = FUNC_7(VAR_0);
 VAR_2 = (struct qxl_device *)VAR_1->tbo.base.dev->dev_private;

 FUNC_6(VAR_2, VAR_1, 0);
 FUNC_0(VAR_1->map_count > 0);
 FUNC_4(&VAR_2->gem.mutex);
 FUNC_3(&VAR_1->list);
 FUNC_5(&VAR_2->gem.mutex);
 FUNC_1(&VAR_1->tbo.base);
 FUNC_2(VAR_1);
}
