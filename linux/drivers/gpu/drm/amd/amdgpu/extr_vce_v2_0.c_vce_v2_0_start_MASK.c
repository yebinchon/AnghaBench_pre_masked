
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int gpu_addr; int ring_size; int wptr; } ;
struct TYPE_2__ {struct amdgpu_ring* ring; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_15)
{
 struct amdgpu_ring *VAR_16;
 int VAR_17;


 FUNC_3(VAR_14, 1, ~1);

 FUNC_9(VAR_15);
 FUNC_7(VAR_15);

 FUNC_10(VAR_15);

 VAR_16 = &VAR_15->vce.ring[0];
 FUNC_1(VAR_8, FUNC_4(VAR_16->wptr));
 FUNC_1(VAR_12, FUNC_4(VAR_16->wptr));
 FUNC_1(VAR_6, VAR_16->gpu_addr);
 FUNC_1(VAR_4, FUNC_6(VAR_16->gpu_addr));
 FUNC_1(VAR_10, VAR_16->ring_size / 4);

 VAR_16 = &VAR_15->vce.ring[1];
 FUNC_1(VAR_9, FUNC_4(VAR_16->wptr));
 FUNC_1(VAR_13, FUNC_4(VAR_16->wptr));
 FUNC_1(VAR_7, VAR_16->gpu_addr);
 FUNC_1(VAR_5, FUNC_6(VAR_16->gpu_addr));
 FUNC_1(VAR_11, VAR_16->ring_size / 4);

 FUNC_2(VAR_3, VAR_0, 1);
 FUNC_2(VAR_2, VAR_1, 1);
 FUNC_5(100);
 FUNC_2(VAR_2, VAR_1, 0);

 VAR_17 = FUNC_8(VAR_15);


 FUNC_3(VAR_14, 0, ~1);

 if (VAR_17) {
  FUNC_0("VCE not responding, giving up!!!\n");
  return VAR_17;
 }

 return 0;
}
