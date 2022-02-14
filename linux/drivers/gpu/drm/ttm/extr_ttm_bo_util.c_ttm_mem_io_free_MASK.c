
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_mem_type_manager {int io_reserve_fastpath; } ;
struct TYPE_4__ {scalar_t__ io_reserved_count; } ;
struct ttm_mem_reg {size_t mem_type; TYPE_2__ bus; } ;
struct ttm_bo_device {TYPE_1__* driver; struct ttm_mem_type_manager* man; } ;
struct TYPE_3__ {int (* io_mem_free ) (struct ttm_bo_device*,struct ttm_mem_reg*) ;scalar_t__ io_mem_reserve; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_bo_device*,struct ttm_mem_reg*) ;

void FUNC_2(struct ttm_bo_device *VAR_0,
       struct ttm_mem_reg *VAR_1)
{
 struct ttm_mem_type_manager *VAR_2 = &VAR_0->man[VAR_1->mem_type];

 if (FUNC_0(VAR_2->io_reserve_fastpath))
  return;

 if (VAR_0->driver->io_mem_reserve &&
     --VAR_1->bus.io_reserved_count == 0 &&
     VAR_0->driver->io_mem_free)
  VAR_0->driver->io_mem_free(VAR_0, VAR_1);

}
