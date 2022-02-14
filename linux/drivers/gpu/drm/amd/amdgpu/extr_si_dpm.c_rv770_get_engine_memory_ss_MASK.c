
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_power_info {int dynamic_ss; void* mclk_ss; void* sclk_ss; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_atom_ss {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct amdgpu_device*,struct amdgpu_atom_ss*,int ,int ) ;
 struct rv7xx_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_1(VAR_2);
 struct amdgpu_atom_ss VAR_4;

 VAR_3->sclk_ss = FUNC_0(VAR_2, &VAR_4,
             VAR_0, 0);
 VAR_3->mclk_ss = FUNC_0(VAR_2, &VAR_4,
             VAR_1, 0);

 if (VAR_3->sclk_ss || VAR_3->mclk_ss)
  VAR_3->dynamic_ss = 1;
 else
  VAR_3->dynamic_ss = 0;
}
