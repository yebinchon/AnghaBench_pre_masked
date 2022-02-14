
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int flags; } ;
struct TYPE_2__ {int size; int is_iomem; scalar_t__ base; scalar_t__ offset; int * addr; } ;
struct ttm_mem_reg {size_t mem_type; int num_pages; TYPE_1__ bus; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static int FUNC_0(struct ttm_bo_device *VAR_3,
      struct ttm_mem_reg *VAR_4)
{
 struct ttm_mem_type_manager *VAR_5 = &VAR_3->man[VAR_4->mem_type];

 VAR_4->bus.addr = ((void*)0);
 VAR_4->bus.offset = 0;
 VAR_4->bus.size = VAR_4->num_pages << VAR_1;
 VAR_4->bus.base = 0;
 VAR_4->bus.is_iomem = 0;
 if (!(VAR_5->flags & VAR_2))
  return -VAR_0;
 switch (VAR_4->mem_type) {
 case 129:
 case 128:

  return 0;
 default:
  return -VAR_0;
 }
 return 0;
}
