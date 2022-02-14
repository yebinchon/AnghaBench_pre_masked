
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_mem_reg {scalar_t__ mem_type; } ;
struct ttm_buffer_object {int dummy; } ;
struct TYPE_2__ {int handle; } ;
struct nouveau_channel {TYPE_1__ vram; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline uint32_t
FUNC_0(struct ttm_buffer_object *VAR_2,
        struct nouveau_channel *VAR_3, struct ttm_mem_reg *VAR_4)
{
 if (VAR_4->mem_type == VAR_1)
  return VAR_0;
 return VAR_3->vram.handle;
}
