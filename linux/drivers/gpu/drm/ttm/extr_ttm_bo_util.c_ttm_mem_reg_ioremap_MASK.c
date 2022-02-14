
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_2__ {int size; scalar_t__ offset; scalar_t__ base; void* addr; int is_iomem; } ;
struct ttm_mem_reg {size_t mem_type; int placement; TYPE_1__ bus; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__,int ) ;
 void* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct ttm_bo_device*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_mem_type_manager*,int) ;
 int FUNC_4 (struct ttm_bo_device*,struct ttm_mem_reg*) ;
 int FUNC_5 (struct ttm_mem_type_manager*) ;

__attribute__((used)) static int FUNC_6(struct ttm_bo_device *VAR_2, struct ttm_mem_reg *VAR_3,
   void **VAR_4)
{
 struct ttm_mem_type_manager *VAR_5 = &VAR_2->man[VAR_3->mem_type];
 int VAR_6;
 void *VAR_7;

 *VAR_4 = ((void*)0);
 (void) FUNC_3(VAR_5, 0);
 VAR_6 = FUNC_4(VAR_2, VAR_3);
 FUNC_5(VAR_5);
 if (VAR_6 || !VAR_3->bus.is_iomem)
  return VAR_6;

 if (VAR_3->bus.addr) {
  VAR_7 = VAR_3->bus.addr;
 } else {
  if (VAR_3->placement & VAR_1)
   VAR_7 = FUNC_1(VAR_3->bus.base + VAR_3->bus.offset, VAR_3->bus.size);
  else
   VAR_7 = FUNC_0(VAR_3->bus.base + VAR_3->bus.offset, VAR_3->bus.size);
  if (!VAR_7) {
   (void) FUNC_3(VAR_5, 0);
   FUNC_2(VAR_2, VAR_3);
   FUNC_5(VAR_5);
   return -VAR_0;
  }
 }
 *VAR_4 = VAR_7;
 return 0;
}
