
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct radeon_fence {int dummy; } ;
struct TYPE_2__ {int max_handles; int * handles; int ** filp; int * vcpu_bo; } ;
struct radeon_device {TYPE_1__ uvd; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct radeon_fence**) ;
 int FUNC_4 (struct radeon_fence*,int) ;
 int FUNC_5 (struct radeon_device*,int ,scalar_t__,struct radeon_fence**) ;
 int FUNC_6 (struct radeon_device*) ;

int FUNC_7(struct radeon_device *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->uvd.vcpu_bo == ((void*)0))
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->uvd.max_handles; ++VAR_2) {
  uint32_t VAR_4 = FUNC_1(&VAR_1->uvd.handles[VAR_2]);
  if (VAR_4 != 0) {
   struct radeon_fence *VAR_5;

   FUNC_6(VAR_1);

   VAR_3 = FUNC_5(VAR_1,
    VAR_0, VAR_4, &VAR_5);
   if (VAR_3) {
    FUNC_0("Error destroying UVD (%d)!\n", VAR_3);
    continue;
   }

   FUNC_4(VAR_5, 0);
   FUNC_3(&VAR_5);

   VAR_1->uvd.filp[VAR_2] = ((void*)0);
   FUNC_2(&VAR_1->uvd.handles[VAR_2], 0);
  }
 }

 return 0;
}
