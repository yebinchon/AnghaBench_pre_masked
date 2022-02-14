
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct qxl_device {struct io_mapping* surface_mapping; struct io_mapping* vram_mapping; } ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_8__ {size_t mem_type; TYPE_1__ bus; } ;
struct TYPE_6__ {TYPE_4__ mem; TYPE_3__* bdev; } ;
struct qxl_bo {void* kptr; TYPE_2__ tbo; } ;
struct io_mapping {int dummy; } ;
struct TYPE_7__ {struct ttm_mem_type_manager* man; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (struct io_mapping*,scalar_t__) ;
 int FUNC_1 (struct qxl_bo*,void**) ;
 int FUNC_2 (struct ttm_mem_type_manager*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (struct ttm_mem_type_manager*) ;

void *FUNC_5(struct qxl_device *VAR_3,
         struct qxl_bo *VAR_4, int VAR_5)
{
 struct ttm_mem_type_manager *VAR_6 = &VAR_4->tbo.bdev->man[VAR_4->tbo.mem.mem_type];
 void *VAR_7;
 int VAR_8;
 struct io_mapping *VAR_9;

 if (VAR_4->tbo.mem.mem_type == VAR_2)
  VAR_9 = VAR_3->vram_mapping;
 else if (VAR_4->tbo.mem.mem_type == VAR_1)
  VAR_9 = VAR_3->surface_mapping;
 else
  goto fallback;

 (void) FUNC_2(VAR_6, 0);
 VAR_8 = FUNC_3(VAR_4->tbo.bdev, &VAR_4->tbo.mem);
 FUNC_4(VAR_6);

 return FUNC_0(VAR_9, VAR_4->tbo.mem.bus.offset + VAR_5);
fallback:
 if (VAR_4->kptr) {
  VAR_7 = VAR_4->kptr + (VAR_5 * VAR_0);
  return VAR_7;
 }

 VAR_8 = FUNC_1(VAR_4, &VAR_7);
 if (VAR_8)
  return ((void*)0);

 VAR_7 += VAR_5 * VAR_0;
 return VAR_7;
}
