
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u32 ;
struct TYPE_9__ {int ready; } ;
struct amdgpu_ring {int ring_size; int rptr_offs; int gpu_addr; TYPE_4__ sched; scalar_t__ wptr; } ;
struct TYPE_10__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct TYPE_8__ {scalar_t__ gpu_addr; } ;
struct TYPE_7__ {int num_instances; TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_5__ mman; TYPE_3__ wb; TYPE_2__ sdma; } ;
struct TYPE_6__ {struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct amdgpu_ring*) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__* VAR_18 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_19)
{
 struct amdgpu_ring *VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26;
 uint64_t VAR_27;

 for (VAR_25 = 0; VAR_25 < VAR_19->sdma.num_instances; VAR_25++) {
  VAR_20 = &VAR_19->sdma.instance[VAR_25].ring;

  FUNC_1(VAR_16 + VAR_18[VAR_25], 0);
  FUNC_1(VAR_17 + VAR_18[VAR_25], 0);


  VAR_24 = FUNC_5(VAR_20->ring_size / 4);
  VAR_21 = VAR_24 << 1;



  FUNC_1(VAR_7 + VAR_18[VAR_25], VAR_21);


  FUNC_1(VAR_9 + VAR_18[VAR_25], 0);
  FUNC_1(VAR_13 + VAR_18[VAR_25], 0);

  VAR_27 = VAR_19->wb.gpu_addr + (VAR_20->rptr_offs * 4);

  FUNC_1(VAR_11 + VAR_18[VAR_25], FUNC_4(VAR_27));
  FUNC_1(VAR_10 + VAR_18[VAR_25], FUNC_6(VAR_27) & 0xFF);

  VAR_21 |= VAR_14;

  FUNC_1(VAR_6 + VAR_18[VAR_25], VAR_20->gpu_addr >> 8);


  VAR_23 = VAR_4 | VAR_0;



  FUNC_1(VAR_3 + VAR_18[VAR_25], VAR_23);

  VAR_22 = FUNC_0(VAR_2 + VAR_18[VAR_25]);
  VAR_22 &= ~VAR_1;
  FUNC_1(VAR_2 + VAR_18[VAR_25], VAR_22);

  VAR_20->wptr = 0;
  FUNC_1(VAR_13 + VAR_18[VAR_25], FUNC_4(VAR_20->wptr) << 2);
  FUNC_1(VAR_7 + VAR_18[VAR_25], VAR_21 | VAR_8);

  VAR_20->sched.ready = 1;

  VAR_26 = FUNC_2(VAR_20);
  if (VAR_26)
   return VAR_26;

  if (VAR_19->mman.buffer_funcs_ring == VAR_20)
   FUNC_3(VAR_19, 1);
 }

 return 0;
}
