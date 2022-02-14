
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct amdgpu_device {int grbm_idx_mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_device*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static uint32_t FUNC_4(struct amdgpu_device *VAR_0, u32 VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 uint32_t VAR_4;

 FUNC_2(&VAR_0->grbm_idx_mutex);
 if (VAR_1 != 0xffffffff || VAR_2 != 0xffffffff)
  FUNC_1(VAR_0, VAR_1, VAR_2, 0xffffffff);

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_1 != 0xffffffff || VAR_2 != 0xffffffff)
  FUNC_1(VAR_0, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_3(&VAR_0->grbm_idx_mutex);
 return VAR_4;
}
