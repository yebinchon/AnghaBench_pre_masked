
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct radeon_fence {int dummy; } ;
struct TYPE_2__ {int max_handles; int * handles; struct drm_file** filp; } ;
struct radeon_device {TYPE_1__ uvd; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct radeon_fence**) ;
 int FUNC_4 (struct radeon_fence*,int) ;
 int FUNC_5 (struct radeon_device*,int ,scalar_t__,struct radeon_fence**) ;
 int FUNC_6 (struct radeon_device*) ;

void FUNC_7(struct radeon_device *VAR_1, struct drm_file *VAR_2)
{
 int VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_1->uvd.max_handles; ++VAR_3) {
  uint32_t VAR_5 = FUNC_1(&VAR_1->uvd.handles[VAR_3]);
  if (VAR_5 != 0 && VAR_1->uvd.filp[VAR_3] == VAR_2) {
   struct radeon_fence *VAR_6;

   FUNC_6(VAR_1);

   VAR_4 = FUNC_5(VAR_1,
    VAR_0, VAR_5, &VAR_6);
   if (VAR_4) {
    FUNC_0("Error destroying UVD (%d)!\n", VAR_4);
    continue;
   }

   FUNC_4(VAR_6, 0);
   FUNC_3(&VAR_6);

   VAR_1->uvd.filp[VAR_3] = ((void*)0);
   FUNC_2(&VAR_1->uvd.handles[VAR_3], 0);
  }
 }
}
