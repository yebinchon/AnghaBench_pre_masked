
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


typedef int u32 ;
struct TYPE_11__ {int ready; } ;
struct amdgpu_ring {int rptr_offs; int ring_size; int gpu_addr; TYPE_4__ sched; scalar_t__ wptr; } ;
struct TYPE_14__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct TYPE_13__ {int num_instances; TYPE_5__* instance; } ;
struct TYPE_10__ {scalar_t__ gpu_addr; } ;
struct TYPE_8__ {int gb_addr_config; } ;
struct TYPE_9__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_7__ mman; TYPE_6__ sdma; TYPE_3__ wb; TYPE_2__ gfx; int srbm_mutex; } ;
struct TYPE_12__ {struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
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
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 scalar_t__* VAR_23 ;
 int FUNC_9 (struct amdgpu_device*,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct amdgpu_device*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_24)
{
 struct amdgpu_ring *VAR_25;
 u32 VAR_26, VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 int VAR_30, VAR_31, VAR_32;

 for (VAR_30 = 0; VAR_30 < VAR_24->sdma.num_instances; VAR_30++) {
  VAR_25 = &VAR_24->sdma.instance[VAR_30].ring;
  VAR_29 = (VAR_25->rptr_offs * 4);

  FUNC_6(&VAR_24->srbm_mutex);
  for (VAR_31 = 0; VAR_31 < 16; VAR_31++) {
   FUNC_11(VAR_24, 0, 0, 0, VAR_31);

   FUNC_2(VAR_20 + VAR_23[VAR_30], 0);
   FUNC_2(VAR_9 + VAR_23[VAR_30], 0);
  }
  FUNC_11(VAR_24, 0, 0, 0, 0);
  FUNC_7(&VAR_24->srbm_mutex);

  FUNC_2(VAR_22 + VAR_23[VAR_30],
         VAR_24->gfx.config.gb_addr_config & 0x70);

  FUNC_2(VAR_21 + VAR_23[VAR_30], 0);


  VAR_28 = FUNC_8(VAR_25->ring_size / 4);
  VAR_26 = FUNC_1(VAR_15 + VAR_23[VAR_30]);
  VAR_26 = FUNC_0(VAR_26, VAR_8, VAR_3, VAR_28);





  FUNC_2(VAR_15 + VAR_23[VAR_30], VAR_26);


  FUNC_2(VAR_16 + VAR_23[VAR_30], 0);
  FUNC_2(VAR_19 + VAR_23[VAR_30], 0);
  FUNC_2(VAR_12 + VAR_23[VAR_30], 0);
  FUNC_2(VAR_11 + VAR_23[VAR_30], 0);


  FUNC_2(VAR_17 + VAR_23[VAR_30],
         FUNC_10(VAR_24->wb.gpu_addr + VAR_29) & 0xFFFFFFFF);
  FUNC_2(VAR_18 + VAR_23[VAR_30],
         FUNC_5(VAR_24->wb.gpu_addr + VAR_29) & 0xFFFFFFFC);

  VAR_26 = FUNC_0(VAR_26, VAR_8, VAR_5, 1);

  FUNC_2(VAR_13 + VAR_23[VAR_30], VAR_25->gpu_addr >> 8);
  FUNC_2(VAR_14 + VAR_23[VAR_30], VAR_25->gpu_addr >> 40);

  VAR_25->wptr = 0;
  FUNC_2(VAR_19 + VAR_23[VAR_30], FUNC_5(VAR_25->wptr) << 2);


  VAR_26 = FUNC_0(VAR_26, VAR_8, VAR_2, 1);
  FUNC_2(VAR_15 + VAR_23[VAR_30], VAR_26);

  VAR_27 = FUNC_1(VAR_10 + VAR_23[VAR_30]);
  VAR_27 = FUNC_0(VAR_27, VAR_7, VAR_0, 1);




  FUNC_2(VAR_10 + VAR_23[VAR_30], VAR_27);

  VAR_25->sched.ready = 1;
 }

 FUNC_9(VAR_24, 1);
 for (VAR_30 = 0; VAR_30 < VAR_24->sdma.num_instances; VAR_30++) {
  VAR_25 = &VAR_24->sdma.instance[VAR_30].ring;
  VAR_32 = FUNC_3(VAR_25);
  if (VAR_32)
   return VAR_32;

  if (VAR_24->mman.buffer_funcs_ring == VAR_25)
   FUNC_4(VAR_24, 1);
 }

 return 0;
}
