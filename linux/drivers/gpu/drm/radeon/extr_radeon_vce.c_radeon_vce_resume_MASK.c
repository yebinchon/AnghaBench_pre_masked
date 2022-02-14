
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * vcpu_bo; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ vce; TYPE_1__* vce_fw; int dev; } ;
struct TYPE_3__ {int size; int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct radeon_device*,void*) ;

int FUNC_9(struct radeon_device *VAR_2)
{
 void *VAR_3;
 int VAR_4;

 if (VAR_2->vce.vcpu_bo == ((void*)0))
  return -VAR_1;

 VAR_4 = FUNC_5(VAR_2->vce.vcpu_bo, 0);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "(%d) failed to reserve VCE bo\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_2->vce.vcpu_bo, &VAR_3);
 if (VAR_4) {
  FUNC_7(VAR_2->vce.vcpu_bo);
  FUNC_0(VAR_2->dev, "(%d) VCE map failed\n", VAR_4);
  return VAR_4;
 }

 FUNC_2(VAR_3, 0, FUNC_6(VAR_2->vce.vcpu_bo));
 if (VAR_2->family < VAR_0)
  VAR_4 = FUNC_8(VAR_2, VAR_3);
 else
  FUNC_1(VAR_3, VAR_2->vce_fw->data, VAR_2->vce_fw->size);

 FUNC_4(VAR_2->vce.vcpu_bo);

 FUNC_7(VAR_2->vce.vcpu_bo);

 return VAR_4;
}
