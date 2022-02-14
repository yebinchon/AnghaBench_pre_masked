
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int ib_pool_ready; int dev; int ring_tmp_bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int *,int,int ,int ) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct amdgpu_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->ib_pool_ready) {
  return 0;
 }
 VAR_4 = FUNC_1(VAR_3, &VAR_3->ring_tmp_bo,
          VAR_2*64*1024,
          VAR_1,
          VAR_0);
 if (VAR_4) {
  return VAR_4;
 }

 VAR_3->ib_pool_ready = 1;
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_3->dev, "failed to register debugfs file for SA\n");
 }
 return 0;
}
