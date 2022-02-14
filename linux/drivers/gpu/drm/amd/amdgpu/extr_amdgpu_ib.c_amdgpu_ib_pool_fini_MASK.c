
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int ib_pool_ready; int ring_tmp_bo; } ;


 int FUNC_0 (struct amdgpu_device*,int *) ;

void FUNC_1(struct amdgpu_device *VAR_0)
{
 if (VAR_0->ib_pool_ready) {
  FUNC_0(VAR_0, &VAR_0->ring_tmp_bo);
  VAR_0->ib_pool_ready = 0;
 }
}
