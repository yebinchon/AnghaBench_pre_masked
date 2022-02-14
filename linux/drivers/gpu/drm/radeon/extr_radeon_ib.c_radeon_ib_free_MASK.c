
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ib {int fence; int sa_bo; int sync; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_device*,int *,int ) ;
 int FUNC_2 (struct radeon_device*,int *,int ) ;

void FUNC_3(struct radeon_device *VAR_0, struct radeon_ib *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->sync, VAR_1->fence);
 FUNC_1(VAR_0, &VAR_1->sa_bo, VAR_1->fence);
 FUNC_0(&VAR_1->fence);
}
