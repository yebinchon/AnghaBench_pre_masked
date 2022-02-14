
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int grbm_idx_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pp_hwmgr*,int) ;
 int FUNC_6 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_5->adev;
 int VAR_7;

 FUNC_1(VAR_6);

 FUNC_3(&VAR_6->grbm_idx_mutex);
 FUNC_0(VAR_0, 0, VAR_4, 0xE0000000);
 FUNC_4(&VAR_6->grbm_idx_mutex);

 VAR_7 = FUNC_6(VAR_5, VAR_2, VAR_3);
 VAR_7 |= FUNC_6(VAR_5, VAR_1, VAR_3);
 if (0 != VAR_7)
  return VAR_7;

 FUNC_5(VAR_5, 0);

 FUNC_2(VAR_6);

 return 0;
}
