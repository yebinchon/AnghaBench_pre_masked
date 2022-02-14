
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smu_context*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct smu_context*,int ,scalar_t__*) ;
 int FUNC_2 (struct smu_context*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_5->adev;
 int VAR_7 = 0;
 uint32_t VAR_8 = 0, VAR_9 = 0;
 uint32_t VAR_10 = 0;

 switch (VAR_6->pdev->revision) {
 case 0xf0:
 case 0xc0:
  VAR_8 = VAR_2;
  break;
 case 0xf1:
 case 0xc1:
  VAR_8 = VAR_1;
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_4, &VAR_10);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_10 - 1, &VAR_9);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_3, VAR_8, VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_9, VAR_9);
 if (VAR_7)
  return VAR_7;

 return VAR_7;
}
