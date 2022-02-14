
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct si_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_pcie_gen { ____Placeholder_amdgpu_pcie_gen } amdgpu_pcie_gen ;
struct TYPE_2__ {scalar_t__ pcie_gen; } ;


 struct si_ps* FUNC_0 (struct amdgpu_ps*) ;

__attribute__((used)) static enum amdgpu_pcie_gen FUNC_1(struct amdgpu_device *VAR_0,
            struct amdgpu_ps *VAR_1)
{
 struct si_ps *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;
 u16 VAR_4, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->performance_level_count; VAR_3++) {
  VAR_4 = VAR_2->performance_levels[VAR_3].pcie_gen;
  if (VAR_5 < VAR_4)
   VAR_5 = VAR_4;
 }
 return VAR_5;
}
