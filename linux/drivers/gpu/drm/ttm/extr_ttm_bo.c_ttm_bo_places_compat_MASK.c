
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_place {scalar_t__ fpfn; scalar_t__ lpfn; int flags; } ;
struct ttm_mem_reg {scalar_t__ start; scalar_t__ num_pages; int placement; scalar_t__ mm_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(const struct ttm_place *VAR_3,
     unsigned VAR_4,
     struct ttm_mem_reg *VAR_5,
     uint32_t *VAR_6)
{
 unsigned VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  const struct ttm_place *VAR_8 = &VAR_3[VAR_7];

  if (VAR_5->mm_node && (VAR_5->start < VAR_8->fpfn ||
       (VAR_8->lpfn != 0 && (VAR_5->start + VAR_5->num_pages) > VAR_8->lpfn)))
   continue;

  *VAR_6 = VAR_8->flags;
  if ((*VAR_6 & VAR_5->placement & VAR_1) &&
      (*VAR_6 & VAR_5->placement & VAR_2) &&
      (!(*VAR_6 & VAR_0) ||
       (VAR_5->placement & VAR_0)))
   return 1;
 }
 return 0;
}
