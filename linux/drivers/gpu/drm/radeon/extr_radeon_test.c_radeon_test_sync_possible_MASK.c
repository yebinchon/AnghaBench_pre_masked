
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {scalar_t__ idx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct radeon_ring *VAR_2,
          struct radeon_ring *VAR_3)
{
 if (VAR_2->idx == VAR_1 &&
     VAR_3->idx == VAR_0)
  return 0;

 return 1;
}
