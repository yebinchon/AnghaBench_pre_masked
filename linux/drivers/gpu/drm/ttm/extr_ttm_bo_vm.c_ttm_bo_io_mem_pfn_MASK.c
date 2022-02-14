
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long base; unsigned long offset; } ;
struct TYPE_6__ {TYPE_2__ bus; } ;
struct ttm_buffer_object {TYPE_3__ mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {TYPE_1__* driver; } ;
struct TYPE_4__ {unsigned long (* io_mem_pfn ) (struct ttm_buffer_object*,unsigned long) ;} ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct ttm_buffer_object*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct ttm_buffer_object *VAR_1,
           unsigned long VAR_2)
{
 struct ttm_bo_device *VAR_3 = VAR_1->bdev;

 if (VAR_3->driver->io_mem_pfn)
  return VAR_3->driver->io_mem_pfn(VAR_1, VAR_2);

 return ((VAR_1->mem.bus.base + VAR_1->mem.bus.offset) >> VAR_0)
  + VAR_2;
}
