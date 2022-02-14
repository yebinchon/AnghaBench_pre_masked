
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u64 ;
struct vmw_private {scalar_t__ active_display_unit; scalar_t__ vram_size; scalar_t__ prim_bb_mem; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct vmw_private *VAR_1,
    uint32_t VAR_2,
    uint32_t VAR_3)
{
 return ((u64) VAR_2 * (u64) VAR_3) < (u64)
  ((VAR_1->active_display_unit == VAR_0) ?
   VAR_1->prim_bb_mem : VAR_1->vram_size);
}
