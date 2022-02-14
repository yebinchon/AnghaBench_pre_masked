
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_context {int od_enabled; } ;
struct TYPE_2__ {int pp_feature; } ;
struct amdgpu_device {int asic_type; TYPE_1__ pm; struct smu_context smu; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smu_context*) ;
 int FUNC_1 (struct smu_context*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_2)
{
 struct smu_context *VAR_3 = &VAR_2->smu;

 switch (VAR_2->asic_type) {
 case 128:
 case 132:
 case 130:
 case 131:
 case 133:
  if (VAR_2->pm.pp_feature & VAR_1)
   VAR_3->od_enabled = 1;
  FUNC_0(VAR_3);
  break;
 case 129:
  if (VAR_2->pm.pp_feature & VAR_1)
   VAR_3->od_enabled = 1;
  FUNC_1(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
