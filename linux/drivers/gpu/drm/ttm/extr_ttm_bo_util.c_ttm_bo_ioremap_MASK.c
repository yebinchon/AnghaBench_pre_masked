
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ base; scalar_t__ addr; } ;
struct ttm_mem_reg {int placement; TYPE_1__ bus; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; } ;
struct ttm_bo_kmap_obj {void* virtual; int bo_kmap_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__,unsigned long) ;
 void* FUNC_1 (scalar_t__,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ttm_buffer_object *VAR_4,
     unsigned long VAR_5,
     unsigned long VAR_6,
     struct ttm_bo_kmap_obj *VAR_7)
{
 struct ttm_mem_reg *VAR_8 = &VAR_4->mem;

 if (VAR_4->mem.bus.addr) {
  VAR_7->bo_kmap_type = VAR_3;
  VAR_7->virtual = (void *)(((u8 *)VAR_4->mem.bus.addr) + VAR_5);
 } else {
  VAR_7->bo_kmap_type = VAR_2;
  if (VAR_8->placement & VAR_1)
   VAR_7->virtual = FUNC_1(VAR_4->mem.bus.base + VAR_4->mem.bus.offset + VAR_5,
        VAR_6);
  else
   VAR_7->virtual = FUNC_0(VAR_4->mem.bus.base + VAR_4->mem.bus.offset + VAR_5,
             VAR_6);
 }
 return (!VAR_7->virtual) ? -VAR_0 : 0;
}
