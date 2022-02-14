
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_placement {scalar_t__ placement; scalar_t__ num_placement; scalar_t__ busy_placement; scalar_t__ num_busy_placement; } ;
struct ttm_mem_reg {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,struct ttm_mem_reg*,int *) ;

bool FUNC_1(struct ttm_placement *VAR_0,
         struct ttm_mem_reg *VAR_1,
         uint32_t *VAR_2)
{
 if (FUNC_0(VAR_0->placement, VAR_0->num_placement,
     VAR_1, VAR_2))
  return 1;

 if ((VAR_0->busy_placement != VAR_0->placement ||
      VAR_0->num_busy_placement > VAR_0->num_placement) &&
     FUNC_0(VAR_0->busy_placement,
     VAR_0->num_busy_placement,
     VAR_1, VAR_2))
  return 1;

 return 0;
}
