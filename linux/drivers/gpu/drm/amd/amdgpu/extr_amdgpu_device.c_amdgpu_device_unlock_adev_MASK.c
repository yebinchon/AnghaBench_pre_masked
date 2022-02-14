
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int lock_reset; scalar_t__ in_gpu_reset; int mp1_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_1)
{

 if (!FUNC_1(VAR_1))
                FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 VAR_1->mp1_state = VAR_0;
 VAR_1->in_gpu_reset = 0;
 FUNC_3(&VAR_1->lock_reset);
}
