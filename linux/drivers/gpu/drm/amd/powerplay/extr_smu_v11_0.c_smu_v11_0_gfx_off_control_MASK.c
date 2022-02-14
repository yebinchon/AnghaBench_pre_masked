
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_context {int mutex; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int pp_feature; } ;
struct amdgpu_device {int asic_type; TYPE_1__ pm; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 struct amdgpu_device *VAR_6 = VAR_3->adev;

 switch (VAR_6->asic_type) {
 case 128:
  break;
 case 131:
 case 129:
 case 130:
  if (!(VAR_6->pm.pp_feature & VAR_0))
   return 0;
  FUNC_0(&VAR_3->mutex);
  if (VAR_4)
   VAR_5 = FUNC_2(VAR_3, VAR_1);
  else
   VAR_5 = FUNC_2(VAR_3, VAR_2);
  FUNC_1(&VAR_3->mutex);
  break;
 default:
  break;
 }

 return VAR_5;
}
