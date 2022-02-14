
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int gpu_addr; int ring_size; int wptr; } ;
struct TYPE_2__ {int harvest_config; struct amdgpu_ring* ring; } ;
struct amdgpu_device {scalar_t__ asic_type; int grbm_idx_mutex; TYPE_1__ vce; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_26)
{
 struct amdgpu_ring *VAR_27;
 int VAR_28, VAR_29;

 FUNC_7(&VAR_26->grbm_idx_mutex);
 for (VAR_28 = 0; VAR_28 < 2; ++VAR_28) {
  if (VAR_26->vce.harvest_config & (1 << VAR_28))
   continue;

  FUNC_2(VAR_8, FUNC_1(VAR_28));



  if (VAR_28 != 1 || VAR_26->vce.harvest_config == VAR_0) {
   VAR_27 = &VAR_26->vce.ring[0];
   FUNC_2(VAR_16, FUNC_5(VAR_27->wptr));
   FUNC_2(VAR_22, FUNC_5(VAR_27->wptr));
   FUNC_2(VAR_13, VAR_27->gpu_addr);
   FUNC_2(VAR_10, FUNC_9(VAR_27->gpu_addr));
   FUNC_2(VAR_19, VAR_27->ring_size / 4);

   VAR_27 = &VAR_26->vce.ring[1];
   FUNC_2(VAR_17, FUNC_5(VAR_27->wptr));
   FUNC_2(VAR_23, FUNC_5(VAR_27->wptr));
   FUNC_2(VAR_14, VAR_27->gpu_addr);
   FUNC_2(VAR_11, FUNC_9(VAR_27->gpu_addr));
   FUNC_2(VAR_20, VAR_27->ring_size / 4);

   VAR_27 = &VAR_26->vce.ring[2];
   FUNC_2(VAR_18, FUNC_5(VAR_27->wptr));
   FUNC_2(VAR_24, FUNC_5(VAR_27->wptr));
   FUNC_2(VAR_15, VAR_27->gpu_addr);
   FUNC_2(VAR_12, FUNC_9(VAR_27->gpu_addr));
   FUNC_2(VAR_21, VAR_27->ring_size / 4);
  }

  FUNC_11(VAR_26, VAR_28);
  FUNC_3(VAR_6, VAR_4, 1);

  if (VAR_26->asic_type >= VAR_1)
   FUNC_4(VAR_25, 1, ~0x200001);
  else
   FUNC_3(VAR_7, VAR_2, 1);

  FUNC_3(VAR_5, VAR_3, 0);
  FUNC_6(100);

  VAR_29 = FUNC_10(VAR_26);


  FUNC_3(VAR_6, VAR_4, 0);

  if (VAR_29) {
   FUNC_0("VCE not responding, giving up!!!\n");
   FUNC_8(&VAR_26->grbm_idx_mutex);
   return VAR_29;
  }
 }

 FUNC_2(VAR_8, VAR_9);
 FUNC_8(&VAR_26->grbm_idx_mutex);

 return 0;
}
