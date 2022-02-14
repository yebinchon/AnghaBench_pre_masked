
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct radeon_device {TYPE_1__* fence_drv; } ;
struct TYPE_2__ {int last_seq; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_device*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct radeon_device *VAR_0,
          u64 VAR_1, unsigned VAR_2)
{
 if (FUNC_0(&VAR_0->fence_drv[VAR_2].last_seq) >= VAR_1) {
  return 1;
 }

 FUNC_1(VAR_0, VAR_2);
 if (FUNC_0(&VAR_0->fence_drv[VAR_2].last_seq) >= VAR_1) {
  return 1;
 }
 return 0;
}
