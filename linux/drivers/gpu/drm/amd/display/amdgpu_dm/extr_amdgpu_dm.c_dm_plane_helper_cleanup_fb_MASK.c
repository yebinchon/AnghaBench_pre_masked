
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {TYPE_1__* fb; } ;
struct drm_plane {int dummy; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_2__ {int * obj; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_bo*,int) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_bo**) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 struct amdgpu_bo* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct drm_plane *VAR_0,
           struct drm_plane_state *VAR_1)
{
 struct amdgpu_bo *VAR_2;
 int VAR_3;

 if (!VAR_1->fb)
  return;

 VAR_2 = FUNC_5(VAR_1->fb->obj[0]);
 VAR_3 = FUNC_1(VAR_2, 0);
 if (FUNC_6(VAR_3)) {
  FUNC_0("failed to reserve rbo before unpin\n");
  return;
 }

 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
 FUNC_3(&VAR_2);
}
