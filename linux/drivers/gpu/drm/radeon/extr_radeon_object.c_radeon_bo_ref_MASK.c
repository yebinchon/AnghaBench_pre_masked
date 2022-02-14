
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_bo {int tbo; } ;


 int FUNC_0 (int *) ;

struct radeon_bo *FUNC_1(struct radeon_bo *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 FUNC_0(&VAR_0->tbo);
 return VAR_0;
}
