
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct qxl_device {int dummy; } ;
struct TYPE_6__ {size_t mem_type; } ;
struct TYPE_4__ {TYPE_3__ mem; TYPE_2__* bdev; } ;
struct qxl_bo {TYPE_1__ tbo; } ;
struct TYPE_5__ {struct ttm_mem_type_manager* man; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct qxl_bo*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (struct ttm_mem_type_manager*,int) ;
 int FUNC_4 (struct ttm_mem_type_manager*) ;

void FUNC_5(struct qxl_device *VAR_2,
          struct qxl_bo *VAR_3, void *VAR_4)
{
 struct ttm_mem_type_manager *VAR_5 = &VAR_3->tbo.bdev->man[VAR_3->tbo.mem.mem_type];

 if ((VAR_3->tbo.mem.mem_type != VAR_1) &&
     (VAR_3->tbo.mem.mem_type != VAR_0))
  goto fallback;

 FUNC_0(VAR_4);

 (void) FUNC_3(VAR_5, 0);
 FUNC_2(VAR_3->tbo.bdev, &VAR_3->tbo.mem);
 FUNC_4(VAR_5);
 return;
 fallback:
 FUNC_1(VAR_3);
}
