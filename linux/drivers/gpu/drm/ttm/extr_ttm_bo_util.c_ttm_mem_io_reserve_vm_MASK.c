
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_mem_type_manager {int io_reserve_lru; scalar_t__ use_io_reserve_lru; } ;
struct TYPE_3__ {int io_reserved_vm; } ;
struct ttm_mem_reg {size_t mem_type; TYPE_1__ bus; } ;
struct ttm_buffer_object {int io_reserve_lru; TYPE_2__* bdev; struct ttm_mem_reg mem; } ;
struct TYPE_4__ {struct ttm_mem_type_manager* man; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,struct ttm_mem_reg*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ttm_buffer_object *VAR_0)
{
 struct ttm_mem_reg *VAR_1 = &VAR_0->mem;
 int VAR_2;

 if (!VAR_1->bus.io_reserved_vm) {
  struct ttm_mem_type_manager *VAR_3 =
   &VAR_0->bdev->man[VAR_1->mem_type];

  VAR_2 = FUNC_1(VAR_0->bdev, VAR_1);
  if (FUNC_2(VAR_2 != 0))
   return VAR_2;
  VAR_1->bus.io_reserved_vm = 1;
  if (VAR_3->use_io_reserve_lru)
   FUNC_0(&VAR_0->io_reserve_lru,
          &VAR_3->io_reserve_lru);
 }
 return 0;
}
