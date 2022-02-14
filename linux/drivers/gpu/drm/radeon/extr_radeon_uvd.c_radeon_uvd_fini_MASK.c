
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vcpu_bo; } ;
struct radeon_device {int uvd_fw; int * ring; TYPE_1__ uvd; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*,int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct radeon_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->uvd.vcpu_bo == ((void*)0))
  return;

 VAR_2 = FUNC_1(VAR_1->uvd.vcpu_bo, 0);
 if (!VAR_2) {
  FUNC_0(VAR_1->uvd.vcpu_bo);
  FUNC_2(VAR_1->uvd.vcpu_bo);
  FUNC_4(VAR_1->uvd.vcpu_bo);
 }

 FUNC_3(&VAR_1->uvd.vcpu_bo);

 FUNC_5(VAR_1, &VAR_1->ring[VAR_0]);

 FUNC_6(VAR_1->uvd_fw);
}
