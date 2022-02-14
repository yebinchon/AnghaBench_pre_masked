
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_display_manager {int dc; int cached_state; } ;
struct amdgpu_device {int ddev; struct amdgpu_display_manager dm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1;
 struct amdgpu_display_manager *VAR_3 = &VAR_2->dm;
 int VAR_4 = 0;

 FUNC_0(VAR_2->dm.cached_state);
 VAR_2->dm.cached_state = FUNC_3(VAR_2->ddev);

 FUNC_4(VAR_2->ddev, 1);

 FUNC_1(VAR_2);


 FUNC_2(VAR_3->dc, VAR_0);

 return VAR_4;
}
