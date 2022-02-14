
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int last_activity; int last_rptr; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*) ;

void FUNC_3(struct radeon_device *VAR_1,
          struct radeon_ring *VAR_2)
{
 FUNC_1(&VAR_2->last_rptr, FUNC_2(VAR_1, VAR_2));
 FUNC_0(&VAR_2->last_activity, VAR_0);
}
