
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int ring_size; int gpu_addr; int wptr; int ready; int idx; } ;
struct TYPE_8__ {int real_vram_size; } ;
struct TYPE_5__ {int gpu_addr; scalar_t__ enabled; } ;
struct radeon_device {TYPE_4__ mc; TYPE_3__* asic; TYPE_1__ wb; struct radeon_ring* ring; } ;
struct TYPE_6__ {size_t copy_ring_index; } ;
struct TYPE_7__ {TYPE_2__ copy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
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
 int VAR_21 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct radeon_device*,int ,struct radeon_ring*) ;
 int FUNC_3 (struct radeon_device*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_22)
{
 struct radeon_ring *VAR_23;
 u32 VAR_24, VAR_25;
 u32 VAR_26;
 u32 VAR_27, VAR_28;
 int VAR_29, VAR_30;

 for (VAR_29 = 0; VAR_29 < 2; VAR_29++) {
  if (VAR_29 == 0) {
   VAR_23 = &VAR_22->ring[VAR_2];
   VAR_27 = VAR_12;
   VAR_28 = VAR_3;
  } else {
   VAR_23 = &VAR_22->ring[VAR_0];
   VAR_27 = VAR_15;
   VAR_28 = VAR_1;
  }

  FUNC_0(VAR_13 + VAR_27, 0);
  FUNC_0(VAR_14 + VAR_27, 0);


  VAR_26 = FUNC_1(VAR_23->ring_size / 4);
  VAR_24 = VAR_26 << 1;



  FUNC_0(VAR_7 + VAR_27, VAR_24);


  FUNC_0(VAR_8 + VAR_27, 0);
  FUNC_0(VAR_11 + VAR_27, 0);


  FUNC_0(VAR_9 + VAR_27,
         FUNC_4(VAR_22->wb.gpu_addr + VAR_28) & 0xFFFFFFFF);
  FUNC_0(VAR_10 + VAR_27,
         ((VAR_22->wb.gpu_addr + VAR_28) & 0xFFFFFFFC));

  if (VAR_22->wb.enabled)
   VAR_24 |= VAR_20;

  FUNC_0(VAR_5 + VAR_27, VAR_23->gpu_addr >> 8);
  FUNC_0(VAR_6 + VAR_27, VAR_23->gpu_addr >> 40);

  VAR_23->wptr = 0;
  FUNC_0(VAR_11 + VAR_27, VAR_23->wptr << 2);


  FUNC_0(VAR_7 + VAR_27, VAR_24 | VAR_18);

  VAR_25 = VAR_16;




  FUNC_0(VAR_4 + VAR_27, VAR_25);

  VAR_23->ready = 1;

  VAR_30 = FUNC_2(VAR_22, VAR_23->idx, VAR_23);
  if (VAR_30) {
   VAR_23->ready = 0;
   return VAR_30;
  }
 }

 if ((VAR_22->asic->copy.copy_ring_index == VAR_2) ||
     (VAR_22->asic->copy.copy_ring_index == VAR_0))
  FUNC_3(VAR_22, VAR_22->mc.real_vram_size);

 return 0;
}
