
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int in_gpu_reset; int mp1_state; int gpu_reset_counter; int lock_reset; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct amdgpu_device *VAR_3, bool VAR_4)
{
 if (VAR_4) {
  if (!FUNC_5(&VAR_3->lock_reset))
   return 0;
 } else
  FUNC_4(&VAR_3->lock_reset);

 FUNC_3(&VAR_3->gpu_reset_counter);
 VAR_3->in_gpu_reset = 1;
 switch (FUNC_1(VAR_3)) {
 case 129:
  VAR_3->mp1_state = VAR_2;
  break;
 case 128:
  VAR_3->mp1_state = VAR_1;
  break;
 default:
  VAR_3->mp1_state = VAR_0;
  break;
 }

 if (!FUNC_2(VAR_3))
                FUNC_0(VAR_3);

 return 1;
}
