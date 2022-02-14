
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_place {int dummy; } ;
struct ttm_mem_type_manager {int dummy; } ;
struct ttm_mem_reg {void* mm_node; } ;
struct ttm_buffer_object {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct ttm_mem_type_manager *VAR_0,
          struct ttm_buffer_object *VAR_1,
          const struct ttm_place *VAR_2,
          struct ttm_mem_reg *VAR_3)
{
 VAR_3->mm_node = (void *)1;
 return 0;
}
