
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_context {int autoload_supported; struct amdgpu_device* adev; } ;
struct amdgpu_device {int asic_type; struct psp_context psp; } ;
 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct psp_context*) ;
 int FUNC_2 (struct psp_context*) ;
 int FUNC_3 (struct psp_context*) ;
 int FUNC_4 (struct psp_context*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct psp_context *VAR_3 = &VAR_2->psp;

 FUNC_0(VAR_2);

 switch (VAR_2->asic_type) {
 case 130:
 case 129:
  FUNC_4(VAR_3);
  VAR_3->autoload_supported = 0;
  break;
 case 132:
  FUNC_1(VAR_3);
  VAR_3->autoload_supported = 0;
  break;
 case 128:
 case 136:
  FUNC_2(VAR_3);
  VAR_3->autoload_supported = 0;
  break;
 case 135:
 case 133:
 case 134:
  FUNC_2(VAR_3);
  VAR_3->autoload_supported = 1;
  break;
 case 131:
  FUNC_3(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 VAR_3->adev = VAR_2;

 return 0;
}
