
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int lock; int accum_us_vis; int accum_us; } ;
struct amdgpu_device {TYPE_1__ mm_stats; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct amdgpu_device *VAR_0, u64 VAR_1,
      u64 VAR_2)
{
 FUNC_1(&VAR_0->mm_stats.lock);
 VAR_0->mm_stats.accum_us -= FUNC_0(VAR_0, VAR_1);
 VAR_0->mm_stats.accum_us_vis -= FUNC_0(VAR_0, VAR_2);
 FUNC_2(&VAR_0->mm_stats.lock);
}
