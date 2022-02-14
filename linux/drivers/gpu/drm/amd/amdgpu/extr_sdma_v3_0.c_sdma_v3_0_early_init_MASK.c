
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {int asic_type; TYPE_1__ sdma; } ;



 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;

 switch (VAR_2->asic_type) {
 case 128:
  VAR_2->sdma.num_instances = 1;
  break;
 default:
  VAR_2->sdma.num_instances = VAR_0;
  break;
 }

 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
