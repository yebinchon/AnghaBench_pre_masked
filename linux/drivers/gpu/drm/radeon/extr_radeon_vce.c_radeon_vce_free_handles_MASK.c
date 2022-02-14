
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * handles; struct drm_file** filp; } ;
struct radeon_device {TYPE_1__ vce; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct radeon_device*,int ,int ,int *) ;
 int FUNC_4 (struct radeon_device*) ;

void FUNC_5(struct radeon_device *VAR_2, struct drm_file *VAR_3)
{
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  uint32_t VAR_6 = FUNC_1(&VAR_2->vce.handles[VAR_4]);
  if (!VAR_6 || VAR_2->vce.filp[VAR_4] != VAR_3)
   continue;

  FUNC_4(VAR_2);

  VAR_5 = FUNC_3(VAR_2, VAR_1,
            VAR_6, ((void*)0));
  if (VAR_5)
   FUNC_0("Error destroying VCE handle (%d)!\n", VAR_5);

  VAR_2->vce.filp[VAR_4] = ((void*)0);
  FUNC_2(&VAR_2->vce.handles[VAR_4], 0);
 }
}
