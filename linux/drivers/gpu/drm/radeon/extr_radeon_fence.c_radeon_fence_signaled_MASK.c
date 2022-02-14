
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_fence {int base; int ring; int seq; int rdev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

bool FUNC_3(struct radeon_fence *VAR_0)
{
 if (!VAR_0)
  return 1;

 if (FUNC_2(VAR_0->rdev, VAR_0->seq, VAR_0->ring)) {
  int VAR_1;

  VAR_1 = FUNC_1(&VAR_0->base);
  if (!VAR_1)
   FUNC_0(&VAR_0->base, "signaled from radeon_fence_signaled\n");
  return 1;
 }
 return 0;
}
