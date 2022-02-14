
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
struct TYPE_10__ {int gpu_addr; } ;
struct TYPE_8__ {int gb_addr_config; } ;
struct TYPE_9__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_7__ mman; TYPE_6__ sdma; TYPE_3__ wb; TYPE_2__ gfx; int srbm_mutex; } ;
struct TYPE_12__ {struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int ,int ,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 scalar_t__* VAR_21 ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_22)
{
 struct amdgpu_ring *VAR_23;
 u32 VAR_24, VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 int VAR_28, VAR_29, VAR_30;

 for (VAR_28 = 0; VAR_28 < VAR_22->sdma.num_instances; VAR_28++) {
  VAR_23 = &VAR_22->sdma.instance[VAR_28].ring;
  VAR_27 = (VAR_23->rptr_offs * 4);

  FUNC_6(&VAR_22->srbm_mutex);
  for (VAR_29 = 0; VAR_29 < 16; VAR_29++) {
   FUNC_4(VAR_22, 0, 0, 0, VAR_29);

   FUNC_0(VAR_17 + VAR_21[VAR_28], 0);
   FUNC_0(VAR_6 + VAR_21[VAR_28], 0);

  }
  FUNC_4(VAR_22, 0, 0, 0, 0);
  FUNC_7(&VAR_22->srbm_mutex);

  FUNC_0(VAR_20 + VAR_21[VAR_28],
         VAR_22->gfx.config.gb_addr_config & 0x70);

  FUNC_0(VAR_18 + VAR_21[VAR_28], 0);
  FUNC_0(VAR_19 + VAR_21[VAR_28], 0);


  VAR_26 = FUNC_8(VAR_23->ring_size / 4);
  VAR_24 = VAR_26 << 1;




  FUNC_0(VAR_12 + VAR_21[VAR_28], VAR_24);


  FUNC_0(VAR_13 + VAR_21[VAR_28], 0);
  FUNC_0(VAR_16 + VAR_21[VAR_28], 0);
  FUNC_0(VAR_9 + VAR_21[VAR_28], 0);
  FUNC_0(VAR_8 + VAR_21[VAR_28], 0);


  FUNC_0(VAR_14 + VAR_21[VAR_28],
         FUNC_9(VAR_22->wb.gpu_addr + VAR_27) & 0xFFFFFFFF);
  FUNC_0(VAR_15 + VAR_21[VAR_28],
         ((VAR_22->wb.gpu_addr + VAR_27) & 0xFFFFFFFC));

  VAR_24 |= VAR_4;

  FUNC_0(VAR_10 + VAR_21[VAR_28], VAR_23->gpu_addr >> 8);
  FUNC_0(VAR_11 + VAR_21[VAR_28], VAR_23->gpu_addr >> 40);

  VAR_23->wptr = 0;
  FUNC_0(VAR_16 + VAR_21[VAR_28], FUNC_5(VAR_23->wptr) << 2);


  FUNC_0(VAR_12 + VAR_21[VAR_28],
         VAR_24 | VAR_2);

  VAR_25 = VAR_0;




  FUNC_0(VAR_7 + VAR_21[VAR_28], VAR_25);

  VAR_23->sched.ready = 1;
 }

 FUNC_3(VAR_22, 1);

 for (VAR_28 = 0; VAR_28 < VAR_22->sdma.num_instances; VAR_28++) {
  VAR_23 = &VAR_22->sdma.instance[VAR_28].ring;
  VAR_30 = FUNC_1(VAR_23);
  if (VAR_30)
   return VAR_30;

  if (VAR_22->mman.buffer_funcs_ring == VAR_23)
   FUNC_2(VAR_22, 1);
 }

 return 0;
}
