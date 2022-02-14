
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int log2_max_MBps; } ;
struct amdgpu_device {TYPE_1__ mm_stats; } ;
typedef int s64 ;



__attribute__((used)) static s64 FUNC_0(struct amdgpu_device *VAR_0, u64 VAR_1)
{
 if (!VAR_0->mm_stats.log2_max_MBps)
  return 0;

 return VAR_1 >> VAR_0->mm_stats.log2_max_MBps;
}
