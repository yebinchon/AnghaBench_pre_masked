
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int gpu_addr; int ring_size; int wptr; } ;
struct TYPE_2__ {struct amdgpu_ring* ring; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_21)
{
 struct amdgpu_ring *VAR_22;
 int VAR_23;

 VAR_22 = &VAR_21->vce.ring[0];

 FUNC_2(FUNC_1(VAR_0, 0, VAR_9), FUNC_4(VAR_22->wptr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_15), FUNC_4(VAR_22->wptr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_6), VAR_22->gpu_addr);
 FUNC_2(FUNC_1(VAR_0, 0, VAR_3), FUNC_6(VAR_22->gpu_addr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_12), VAR_22->ring_size / 4);

 VAR_22 = &VAR_21->vce.ring[1];

 FUNC_2(FUNC_1(VAR_0, 0, VAR_10), FUNC_4(VAR_22->wptr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_16), FUNC_4(VAR_22->wptr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_7), VAR_22->gpu_addr);
 FUNC_2(FUNC_1(VAR_0, 0, VAR_4), FUNC_6(VAR_22->gpu_addr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_13), VAR_22->ring_size / 4);

 VAR_22 = &VAR_21->vce.ring[2];

 FUNC_2(FUNC_1(VAR_0, 0, VAR_11), FUNC_4(VAR_22->wptr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_17), FUNC_4(VAR_22->wptr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_8), VAR_22->gpu_addr);
 FUNC_2(FUNC_1(VAR_0, 0, VAR_5), FUNC_6(VAR_22->gpu_addr));
 FUNC_2(FUNC_1(VAR_0, 0, VAR_14), VAR_22->ring_size / 4);

 FUNC_8(VAR_21);
 FUNC_3(FUNC_1(VAR_0, 0, VAR_19), VAR_2,
   ~VAR_2);

 FUNC_3(FUNC_1(VAR_0, 0, VAR_20), 1, ~0x200001);

 FUNC_3(FUNC_1(VAR_0, 0, VAR_18), 0,
   ~VAR_1);
 FUNC_5(100);

 VAR_23 = FUNC_7(VAR_21);


 FUNC_3(FUNC_1(VAR_0, 0, VAR_19), 0, ~VAR_2);

 if (VAR_23) {
  FUNC_0("VCE not responding, giving up!!!\n");
  return VAR_23;
 }

 return 0;
}
