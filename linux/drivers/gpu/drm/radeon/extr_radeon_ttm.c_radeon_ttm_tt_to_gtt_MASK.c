
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int * func; } ;
struct radeon_ttm_tt {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static struct radeon_ttm_tt *FUNC_0(struct ttm_tt *VAR_1)
{
 if (!VAR_1 || VAR_1->func != &VAR_0)
  return ((void*)0);
 return (struct radeon_ttm_tt *)VAR_1;
}
