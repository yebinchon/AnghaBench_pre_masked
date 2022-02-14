
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_file {int dummy; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_2__ {int * handles; struct drm_file** filp; struct amdgpu_ring* ring; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct amdgpu_ring*,int ,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct amdgpu_device *VAR_1, struct drm_file *VAR_2)
{
 struct amdgpu_ring *VAR_3 = &VAR_1->vce.ring[0];
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  uint32_t VAR_6 = FUNC_2(&VAR_1->vce.handles[VAR_4]);

  if (!VAR_6 || VAR_1->vce.filp[VAR_4] != VAR_2)
   continue;

  VAR_5 = FUNC_1(VAR_3, VAR_6, 0, ((void*)0));
  if (VAR_5)
   FUNC_0("Error destroying VCE handle (%d)!\n", VAR_5);

  VAR_1->vce.filp[VAR_4] = ((void*)0);
  FUNC_3(&VAR_1->vce.handles[VAR_4], 0);
 }
}
