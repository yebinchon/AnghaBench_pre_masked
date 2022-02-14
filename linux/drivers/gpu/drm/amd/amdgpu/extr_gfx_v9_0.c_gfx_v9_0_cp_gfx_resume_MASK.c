
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int ready; } ;
struct amdgpu_ring {int ring_size; int wptr; int rptr_offs; int wptr_offs; int gpu_addr; int doorbell_index; TYPE_3__ sched; scalar_t__ use_doorbell; } ;
struct TYPE_5__ {int gpu_addr; } ;
struct TYPE_4__ {struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_2__ wb; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
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
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_26)
{
 struct amdgpu_ring *VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u64 VAR_30, VAR_31, VAR_32;


 FUNC_2(VAR_9, 0, VAR_23, 0);


 FUNC_2(VAR_9, 0, VAR_22, 0);


 VAR_27 = &VAR_26->gfx.gfx_ring[0];
 VAR_29 = FUNC_6(VAR_27->ring_size / 8);
 VAR_28 = FUNC_0(0, VAR_1, VAR_11, VAR_29);
 VAR_28 = FUNC_0(VAR_28, VAR_1, VAR_10, VAR_29 - 2);



 FUNC_2(VAR_9, 0, VAR_14, VAR_28);


 VAR_27->wptr = 0;
 FUNC_2(VAR_9, 0, VAR_17, FUNC_4(VAR_27->wptr));
 FUNC_2(VAR_9, 0, VAR_18, FUNC_7(VAR_27->wptr));


 VAR_31 = VAR_26->wb.gpu_addr + (VAR_27->rptr_offs * 4);
 FUNC_2(VAR_9, 0, VAR_15, FUNC_4(VAR_31));
 FUNC_2(VAR_9, 0, VAR_16, FUNC_7(VAR_31) & VAR_5);

 VAR_32 = VAR_26->wb.gpu_addr + (VAR_27->wptr_offs * 4);
 FUNC_2(VAR_9, 0, VAR_25, FUNC_4(VAR_32));
 FUNC_2(VAR_9, 0, VAR_24, FUNC_7(VAR_32));

 FUNC_5(1);
 FUNC_2(VAR_9, 0, VAR_14, VAR_28);

 VAR_30 = VAR_27->gpu_addr >> 8;
 FUNC_2(VAR_9, 0, VAR_12, VAR_30);
 FUNC_2(VAR_9, 0, VAR_13, FUNC_7(VAR_30));

 VAR_28 = FUNC_1(VAR_9, 0, VAR_19);
 if (VAR_27->use_doorbell) {
  VAR_28 = FUNC_0(VAR_28, VAR_2,
        VAR_7, VAR_27->doorbell_index);
  VAR_28 = FUNC_0(VAR_28, VAR_2,
        VAR_6, 1);
 } else {
  VAR_28 = FUNC_0(VAR_28, VAR_2, VAR_6, 0);
 }
 FUNC_2(VAR_9, 0, VAR_19, VAR_28);

 VAR_28 = FUNC_0(0, VAR_3,
   VAR_8, VAR_27->doorbell_index);
 FUNC_2(VAR_9, 0, VAR_20, VAR_28);

 FUNC_2(VAR_9, 0, VAR_21,
         VAR_4);



 FUNC_3(VAR_26);
 VAR_27->sched.ready = 1;

 return 0;
}
