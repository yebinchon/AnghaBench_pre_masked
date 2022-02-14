
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bo; int ptr; } ;
struct amdgpu_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->gart.bo, 0);
 if (FUNC_5(VAR_2 != 0))
  return VAR_2;
 VAR_2 = FUNC_1(VAR_1->gart.bo, VAR_0);
 if (VAR_2) {
  FUNC_4(VAR_1->gart.bo);
  return VAR_2;
 }
 VAR_2 = FUNC_0(VAR_1->gart.bo, &VAR_1->gart.ptr);
 if (VAR_2)
  FUNC_3(VAR_1->gart.bo);
 FUNC_4(VAR_1->gart.bo);
 return VAR_2;
}
