
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_7__ {int ready; } ;
struct amdgpu_ring {int rptr_offs; int ring_size; int wptr_offs; int gpu_addr; int doorbell_index; TYPE_1__ sched; scalar_t__ use_doorbell; scalar_t__ wptr; } ;
struct TYPE_8__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct TYPE_11__ {scalar_t__ gpu_addr; } ;
struct TYPE_10__ {int num_instances; TYPE_3__* instance; } ;
struct amdgpu_device {TYPE_2__ mman; TYPE_6__* nbio_funcs; TYPE_5__ wb; TYPE_4__ sdma; } ;
struct TYPE_12__ {int (* sdma_doorbell_range ) (struct amdgpu_device*,int,scalar_t__,int,int) ;} ;
struct TYPE_9__ {struct amdgpu_ring ring; } ;


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
 int VAR_12 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int) ;
 int FUNC_10 (struct amdgpu_device*,int,int ) ;
 int FUNC_11 (struct amdgpu_ring*) ;
 int FUNC_12 (struct amdgpu_device*,int,scalar_t__,int,int) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct amdgpu_device *VAR_46)
{
 struct amdgpu_ring *VAR_47;
 u32 VAR_48, VAR_49;
 u32 VAR_50;
 u32 VAR_51;
 u32 VAR_52;
 u32 VAR_53;
 u32 VAR_54;
 u32 VAR_55;
 u64 VAR_56;
 int VAR_57, VAR_58;

 for (VAR_57 = 0; VAR_57 < VAR_46->sdma.num_instances; VAR_57++) {
  VAR_47 = &VAR_46->sdma.instance[VAR_57].ring;
  VAR_51 = (VAR_47->rptr_offs * 4);

  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_43), 0);


  VAR_50 = FUNC_7(VAR_47->ring_size / 4);
  VAR_48 = FUNC_1(FUNC_10(VAR_46, VAR_57, VAR_33));
  VAR_48 = FUNC_0(VAR_48, VAR_21, VAR_10, VAR_50);





  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_33), VAR_48);


  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_34), 0);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_37), 0);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_38), 0);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_39), 0);


  VAR_56 = VAR_46->wb.gpu_addr + (VAR_47->wptr_offs * 4);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_41),
         FUNC_6(VAR_56));
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_40),
         FUNC_13(VAR_56));
  VAR_55 = FUNC_1(FUNC_10(VAR_46, VAR_57,
        VAR_42));
  VAR_55 = FUNC_0(VAR_55,
            VAR_22,
            VAR_3, 1);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_42),
         VAR_55);


  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_35),
         FUNC_13(VAR_46->wb.gpu_addr + VAR_51) & 0xFFFFFFFF);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_36),
         FUNC_6(VAR_46->wb.gpu_addr + VAR_51) & 0xFFFFFFFC);

  VAR_48 = FUNC_0(VAR_48, VAR_21, VAR_14, 1);

  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_31), VAR_47->gpu_addr >> 8);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_32), VAR_47->gpu_addr >> 40);

  VAR_47->wptr = 0;


  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_30), 1);

  if (!FUNC_4(VAR_46)) {
   FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_38), FUNC_6(VAR_47->wptr) << 2);
   FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_39), FUNC_13(VAR_47->wptr) << 2);
  }

  VAR_52 = FUNC_1(FUNC_10(VAR_46, VAR_57, VAR_27));
  VAR_53 = FUNC_1(FUNC_10(VAR_46, VAR_57, VAR_28));

  if (VAR_47->use_doorbell) {
   VAR_52 = FUNC_0(VAR_52, VAR_18, VAR_2, 1);
   VAR_53 = FUNC_0(VAR_53, VAR_19,
     VAR_8, VAR_47->doorbell_index);
  } else {
   VAR_52 = FUNC_0(VAR_52, VAR_18, VAR_2, 0);
  }
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_27), VAR_52);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_28), VAR_53);

  VAR_46->nbio_funcs->sdma_doorbell_range(VAR_46, VAR_57, VAR_47->use_doorbell,
            VAR_47->doorbell_index, 20);

  if (FUNC_4(VAR_46))
   FUNC_11(VAR_47);


  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_30), 0);


  VAR_54 = FUNC_1(FUNC_10(VAR_46, VAR_57, VAR_25));
  VAR_54 = FUNC_0(VAR_54, VAR_16, VAR_24, 1);


  VAR_54 = FUNC_0(VAR_54, VAR_16, VAR_7, 1);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_25), VAR_54);


  VAR_54 = FUNC_1(FUNC_10(VAR_46, VAR_57, VAR_44));
  VAR_54 = FUNC_0(VAR_54, VAR_23, VAR_13, 3);
  VAR_54 = FUNC_0(VAR_54, VAR_23, VAR_12, 9);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_44), VAR_54);


  VAR_54 = FUNC_1(FUNC_10(VAR_46, VAR_57, VAR_45));

  VAR_54 &= 0xFF0FFF;
  VAR_54 |= ((VAR_0 << 12) | (VAR_1 << 14));
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_45), VAR_54);

  if (!FUNC_4(VAR_46)) {

   VAR_54 = FUNC_1(FUNC_10(VAR_46, VAR_57, VAR_26));
   VAR_54 = FUNC_0(VAR_54, VAR_17, VAR_4, 0);
   FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_26), VAR_54);
  }


  VAR_48 = FUNC_0(VAR_48, VAR_21, VAR_9, 1);
  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_33), VAR_48);

  VAR_49 = FUNC_1(FUNC_10(VAR_46, VAR_57, VAR_29));
  VAR_49 = FUNC_0(VAR_49, VAR_20, VAR_5, 1);




  FUNC_2(FUNC_10(VAR_46, VAR_57, VAR_29), VAR_49);

  VAR_47->sched.ready = 1;

  if (FUNC_4(VAR_46)) {
   FUNC_8(VAR_46, 1);
   FUNC_9(VAR_46, 1);
  }

  VAR_58 = FUNC_3(VAR_47);
  if (VAR_58) {
   VAR_47->sched.ready = 0;
   return VAR_58;
  }

  if (VAR_46->mman.buffer_funcs_ring == VAR_47)
   FUNC_5(VAR_46, 1);
 }

 return 0;
}
