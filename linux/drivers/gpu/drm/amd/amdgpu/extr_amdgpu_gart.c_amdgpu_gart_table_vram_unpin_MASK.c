
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ptr; int * bo; } ;
struct amdgpu_device {TYPE_1__ gart; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->gart.bo == ((void*)0)) {
  return;
 }
 VAR_1 = FUNC_1(VAR_0->gart.bo, 1);
 if (FUNC_4(VAR_1 == 0)) {
  FUNC_0(VAR_0->gart.bo);
  FUNC_2(VAR_0->gart.bo);
  FUNC_3(VAR_0->gart.bo);
  VAR_0->gart.ptr = ((void*)0);
 }
}
