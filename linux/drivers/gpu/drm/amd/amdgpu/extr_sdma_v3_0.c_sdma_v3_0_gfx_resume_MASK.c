
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_13__ {int ready; } ;
struct amdgpu_ring {int rptr_offs; int ring_size; int gpu_addr; int doorbell_index; int wptr_offs; TYPE_6__ sched; scalar_t__ use_pollmem; scalar_t__ use_doorbell; scalar_t__ wptr; } ;
struct TYPE_8__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct TYPE_14__ {int num_instances; TYPE_2__* instance; } ;
struct TYPE_12__ {scalar_t__ gpu_addr; } ;
struct TYPE_10__ {int gb_addr_config; } ;
struct TYPE_11__ {TYPE_3__ config; } ;
struct amdgpu_device {TYPE_1__ mman; TYPE_7__ sdma; TYPE_5__ wb; TYPE_4__ gfx; int srbm_mutex; } ;
struct TYPE_9__ {struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 scalar_t__* VAR_31 ;
 int FUNC_10 (struct amdgpu_device*,int) ;
 int FUNC_11 (struct amdgpu_device*,int) ;
 int FUNC_12 (struct amdgpu_ring*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct amdgpu_device*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_15(struct amdgpu_device *VAR_32)
{
 struct amdgpu_ring *VAR_33;
 u32 VAR_34, VAR_35, VAR_36;
 u32 VAR_37;
 u32 VAR_38;
 u32 VAR_39;
 u64 VAR_40;
 int VAR_41, VAR_42, VAR_43;

 for (VAR_41 = 0; VAR_41 < VAR_32->sdma.num_instances; VAR_41++) {
  VAR_33 = &VAR_32->sdma.instance[VAR_41].ring;
  FUNC_3(VAR_33);
  VAR_38 = (VAR_33->rptr_offs * 4);

  FUNC_7(&VAR_32->srbm_mutex);
  for (VAR_42 = 0; VAR_42 < 16; VAR_42++) {
   FUNC_14(VAR_32, 0, 0, 0, VAR_42);

   FUNC_2(VAR_28 + VAR_31[VAR_41], 0);
   FUNC_2(VAR_13 + VAR_31[VAR_41], 0);
  }
  FUNC_14(VAR_32, 0, 0, 0, 0);
  FUNC_8(&VAR_32->srbm_mutex);

  FUNC_2(VAR_30 + VAR_31[VAR_41],
         VAR_32->gfx.config.gb_addr_config & 0x70);

  FUNC_2(VAR_29 + VAR_31[VAR_41], 0);


  VAR_37 = FUNC_9(VAR_33->ring_size / 4);
  VAR_34 = FUNC_1(VAR_20 + VAR_31[VAR_41]);
  VAR_34 = FUNC_0(VAR_34, VAR_11, VAR_5, VAR_37);





  FUNC_2(VAR_20 + VAR_31[VAR_41], VAR_34);


  VAR_33->wptr = 0;
  FUNC_2(VAR_21 + VAR_31[VAR_41], 0);
  FUNC_12(VAR_33);
  FUNC_2(VAR_17 + VAR_31[VAR_41], 0);
  FUNC_2(VAR_16 + VAR_31[VAR_41], 0);


  FUNC_2(VAR_22 + VAR_31[VAR_41],
         FUNC_13(VAR_32->wb.gpu_addr + VAR_38) & 0xFFFFFFFF);
  FUNC_2(VAR_23 + VAR_31[VAR_41],
         FUNC_6(VAR_32->wb.gpu_addr + VAR_38) & 0xFFFFFFFC);

  VAR_34 = FUNC_0(VAR_34, VAR_11, VAR_7, 1);

  FUNC_2(VAR_18 + VAR_31[VAR_41], VAR_33->gpu_addr >> 8);
  FUNC_2(VAR_19 + VAR_31[VAR_41], VAR_33->gpu_addr >> 40);

  VAR_39 = FUNC_1(VAR_14 + VAR_31[VAR_41]);

  if (VAR_33->use_doorbell) {
   VAR_39 = FUNC_0(VAR_39, VAR_9,
       VAR_3, VAR_33->doorbell_index);
   VAR_39 = FUNC_0(VAR_39, VAR_9, VAR_0, 1);
  } else {
   VAR_39 = FUNC_0(VAR_39, VAR_9, VAR_0, 0);
  }
  FUNC_2(VAR_14 + VAR_31[VAR_41], VAR_39);


  VAR_40 = VAR_32->wb.gpu_addr + (VAR_33->wptr_offs * 4);

  FUNC_2(VAR_26 + VAR_31[VAR_41],
         FUNC_6(VAR_40));
  FUNC_2(VAR_25 + VAR_31[VAR_41],
         FUNC_13(VAR_40));
  VAR_36 = FUNC_1(VAR_27 + VAR_31[VAR_41]);
  if (VAR_33->use_pollmem) {

   FUNC_2(VAR_24 + VAR_31[VAR_41], 0);
   VAR_36 = FUNC_0(VAR_36,
             VAR_12,
             VAR_0, 1);
  } else {
   VAR_36 = FUNC_0(VAR_36,
             VAR_12,
             VAR_0, 0);
  }
  FUNC_2(VAR_27 + VAR_31[VAR_41], VAR_36);


  VAR_34 = FUNC_0(VAR_34, VAR_11, VAR_4, 1);
  FUNC_2(VAR_20 + VAR_31[VAR_41], VAR_34);

  VAR_35 = FUNC_1(VAR_15 + VAR_31[VAR_41]);
  VAR_35 = FUNC_0(VAR_35, VAR_10, VAR_1, 1);




  FUNC_2(VAR_15 + VAR_31[VAR_41], VAR_35);

  VAR_33->sched.ready = 1;
 }


 FUNC_11(VAR_32, 1);

 FUNC_10(VAR_32, 1);

 for (VAR_41 = 0; VAR_41 < VAR_32->sdma.num_instances; VAR_41++) {
  VAR_33 = &VAR_32->sdma.instance[VAR_41].ring;
  VAR_43 = FUNC_4(VAR_33);
  if (VAR_43)
   return VAR_43;

  if (VAR_32->mman.buffer_funcs_ring == VAR_33)
   FUNC_5(VAR_32, 1);
 }

 return 0;
}
