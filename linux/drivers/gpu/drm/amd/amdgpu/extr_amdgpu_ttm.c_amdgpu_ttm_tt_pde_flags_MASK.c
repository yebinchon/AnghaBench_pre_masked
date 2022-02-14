
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_tt {scalar_t__ caching_state; } ;
struct ttm_mem_reg {scalar_t__ mem_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

uint64_t FUNC_0(struct ttm_tt *VAR_6, struct ttm_mem_reg *VAR_7)
{
 uint64_t VAR_8 = 0;

 if (VAR_7 && VAR_7->mem_type != VAR_3)
  VAR_8 |= VAR_2;

 if (VAR_7 && VAR_7->mem_type == VAR_4) {
  VAR_8 |= VAR_1;

  if (VAR_6->caching_state == VAR_5)
   VAR_8 |= VAR_0;
 }

 return VAR_8;
}
