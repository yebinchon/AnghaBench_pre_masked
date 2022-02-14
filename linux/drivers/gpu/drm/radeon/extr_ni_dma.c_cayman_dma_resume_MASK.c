
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,int ,struct radeon_ring*) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (int) ;

int FUNC_6(struct radeon_device *VAR_24)
{
 struct radeon_ring *VAR_25;
 u32 VAR_26, VAR_27, VAR_28;
 u32 VAR_29;
 u32 VAR_30, VAR_31;
 int VAR_32, VAR_33;

 for (VAR_32 = 0; VAR_32 < 2; VAR_32++) {
  if (VAR_32 == 0) {
   VAR_25 = &VAR_24->ring[VAR_22];
   VAR_30 = VAR_4;
   VAR_31 = VAR_23;
  } else {
   VAR_25 = &VAR_24->ring[VAR_0];
   VAR_30 = VAR_5;
   VAR_31 = VAR_1;
  }

  FUNC_1(VAR_20 + VAR_30, 0);
  FUNC_1(VAR_21 + VAR_30, 0);


  VAR_29 = FUNC_2(VAR_25->ring_size / 4);
  VAR_26 = VAR_29 << 1;



  FUNC_1(VAR_11 + VAR_30, VAR_26);


  FUNC_1(VAR_13 + VAR_30, 0);
  FUNC_1(VAR_17 + VAR_30, 0);


  FUNC_1(VAR_14 + VAR_30,
         FUNC_5(VAR_24->wb.gpu_addr + VAR_31) & 0xFF);
  FUNC_1(VAR_15 + VAR_30,
         ((VAR_24->wb.gpu_addr + VAR_31) & 0xFFFFFFFC));

  if (VAR_24->wb.enabled)
   VAR_26 |= VAR_18;

  FUNC_1(VAR_10 + VAR_30, VAR_25->gpu_addr >> 8);


  VAR_28 = VAR_8 | VAR_2;



  FUNC_1(VAR_7 + VAR_30, VAR_28);

  VAR_27 = FUNC_0(VAR_6 + VAR_30);
  VAR_27 &= ~VAR_3;
  FUNC_1(VAR_6 + VAR_30, VAR_27);

  VAR_25->wptr = 0;
  FUNC_1(VAR_17 + VAR_30, VAR_25->wptr << 2);

  FUNC_1(VAR_11 + VAR_30, VAR_26 | VAR_12);

  VAR_25->ready = 1;

  VAR_33 = FUNC_3(VAR_24, VAR_25->idx, VAR_25);
  if (VAR_33) {
   VAR_25->ready = 0;
   return VAR_33;
  }
 }

 if ((VAR_24->asic->copy.copy_ring_index == VAR_22) ||
     (VAR_24->asic->copy.copy_ring_index == VAR_0))
  FUNC_4(VAR_24, VAR_24->mc.real_vram_size);

 return 0;
}
