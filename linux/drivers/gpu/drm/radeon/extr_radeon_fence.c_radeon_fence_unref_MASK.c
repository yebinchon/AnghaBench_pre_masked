
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_fence {int base; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct radeon_fence **VAR_0)
{
 struct radeon_fence *VAR_1 = *VAR_0;

 *VAR_0 = ((void*)0);
 if (VAR_1) {
  FUNC_0(&VAR_1->base);
 }
}
