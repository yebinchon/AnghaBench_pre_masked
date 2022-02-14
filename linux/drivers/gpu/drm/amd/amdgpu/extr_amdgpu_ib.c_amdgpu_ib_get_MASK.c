
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_vm {int dummy; } ;
struct amdgpu_ib {int sa_bo; int gpu_addr; int ptr; } ;
struct amdgpu_device {int dev; int ring_tmp_bo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,unsigned int,int) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(struct amdgpu_device *VAR_0, struct amdgpu_vm *VAR_1,
    unsigned VAR_2, struct amdgpu_ib *VAR_3)
{
 int VAR_4;

 if (VAR_2) {
  VAR_4 = FUNC_2(&VAR_0->ring_tmp_bo,
          &VAR_3->sa_bo, VAR_2, 256);
  if (VAR_4) {
   FUNC_3(VAR_0->dev, "failed to get a new IB (%d)\n", VAR_4);
   return VAR_4;
  }

  VAR_3->ptr = FUNC_0(VAR_3->sa_bo);

  if (!VAR_1)
   VAR_3->gpu_addr = FUNC_1(VAR_3->sa_bo);
 }

 return 0;
}
