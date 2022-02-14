
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_4__ {TYPE_1__* instance; } ;
struct amdgpu_device {int asic_type; TYPE_2__ sdma; } ;
struct TYPE_3__ {int fw_version; } ;






__attribute__((used)) static bool FUNC_0(struct amdgpu_device *VAR_0)
{
 uint VAR_1 = VAR_0->sdma.instance[0].fw_version;

 switch (VAR_0->asic_type) {
 case 130:
  return VAR_1 >= 430;
 case 129:

  return 0;
 case 128:
  return VAR_1 >= 123;
 default:
  return 0;
 }
}
