
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct amdgpu_ring {scalar_t__ trail_seq; int idx; int * trail_fence_cpu_addr; int trail_fence_gpu_addr; struct amdgpu_device* adev; } ;
struct amdgpu_device {int usec_timeout; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (struct amdgpu_ring*,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct amdgpu_ring*,int ,scalar_t__,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_ring *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct amdgpu_device *VAR_6 = VAR_3->adev;
 u32 VAR_7 = 0;
 u64 VAR_8;

 FUNC_5(VAR_3, &VAR_7);
 if (VAR_7 == 0)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;


 FUNC_4(VAR_3, 0);


 VAR_3->trail_seq += 1;
 FUNC_2(VAR_3, 10);
 FUNC_7(VAR_3, VAR_3->trail_fence_gpu_addr,
      VAR_3->trail_seq, 0);
 FUNC_3(VAR_3);


 FUNC_1(VAR_8, 1);


 for (VAR_4 = 0; VAR_4 < VAR_6->usec_timeout; VAR_4++) {
  if (VAR_3->trail_seq ==
      FUNC_6(*(VAR_3->trail_fence_cpu_addr)))
   break;
  FUNC_8(1);
 }

 if (VAR_4 >= VAR_6->usec_timeout) {
  VAR_5 = -VAR_0;
  FUNC_0("ring %d failed to be preempted\n", VAR_3->idx);
 }


 FUNC_1(VAR_8, 0);


 FUNC_4(VAR_3, 1);
 return VAR_5;
}
