
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_mem_type_manager {int has_type; int io_reserve_fastpath; int use_io_reserve_lru; int use_type; unsigned long size; int * move; int * lru; TYPE_2__* func; struct ttm_bo_device* bdev; int io_reserve_lru; int move_lock; int io_reserve_mutex; } ;
struct ttm_bo_device {TYPE_1__* driver; struct ttm_mem_type_manager* man; } ;
struct TYPE_4__ {int (* init ) (struct ttm_mem_type_manager*,unsigned long) ;} ;
struct TYPE_3__ {int (* init_mem_type ) (struct ttm_bo_device*,unsigned int,struct ttm_mem_type_manager*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_bo_device*,unsigned int,struct ttm_mem_type_manager*) ;
 int FUNC_5 (struct ttm_mem_type_manager*,unsigned long) ;

int FUNC_6(struct ttm_bo_device *VAR_3, unsigned VAR_4,
   unsigned long VAR_5)
{
 int VAR_6;
 struct ttm_mem_type_manager *VAR_7;
 unsigned VAR_8;

 FUNC_0(VAR_4 >= VAR_1);
 VAR_7 = &VAR_3->man[VAR_4];
 FUNC_0(VAR_7->has_type);
 VAR_7->io_reserve_fastpath = 1;
 VAR_7->use_io_reserve_lru = 0;
 FUNC_2(&VAR_7->io_reserve_mutex);
 FUNC_3(&VAR_7->move_lock);
 FUNC_1(&VAR_7->io_reserve_lru);

 VAR_6 = VAR_3->driver->init_mem_type(VAR_3, VAR_4, VAR_7);
 if (VAR_6)
  return VAR_6;
 VAR_7->bdev = VAR_3;

 if (VAR_4 != VAR_2) {
  VAR_6 = (*VAR_7->func->init)(VAR_7, VAR_5);
  if (VAR_6)
   return VAR_6;
 }
 VAR_7->has_type = 1;
 VAR_7->use_type = 1;
 VAR_7->size = VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
  FUNC_1(&VAR_7->lru[VAR_8]);
 VAR_7->move = ((void*)0);

 return 0;
}
