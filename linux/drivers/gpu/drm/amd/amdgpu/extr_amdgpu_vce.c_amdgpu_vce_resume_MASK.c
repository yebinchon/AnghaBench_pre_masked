
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct common_firmware_header {int ucode_array_offset_bytes; } ;
struct TYPE_4__ {int * vcpu_bo; TYPE_1__* fw; } ;
struct amdgpu_device {TYPE_2__ vce; int dev; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (void*,scalar_t__,scalar_t__) ;

int FUNC_7(struct amdgpu_device *VAR_1)
{
 void *VAR_2;
 const struct common_firmware_header *VAR_3;
 unsigned VAR_4;
 int VAR_5;

 if (VAR_1->vce.vcpu_bo == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_1->vce.vcpu_bo, 0);
 if (VAR_5) {
  FUNC_4(VAR_1->dev, "(%d) failed to reserve VCE bo\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_1->vce.vcpu_bo, &VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_1->vce.vcpu_bo);
  FUNC_4(VAR_1->dev, "(%d) VCE map failed\n", VAR_5);
  return VAR_5;
 }

 VAR_3 = (const struct common_firmware_header *)VAR_1->vce.fw->data;
 VAR_4 = FUNC_5(VAR_3->ucode_array_offset_bytes);
 FUNC_6(VAR_2, VAR_1->vce.fw->data + VAR_4,
      VAR_1->vce.fw->size - VAR_4);

 FUNC_1(VAR_1->vce.vcpu_bo);

 FUNC_3(VAR_1->vce.vcpu_bo);

 return 0;
}
