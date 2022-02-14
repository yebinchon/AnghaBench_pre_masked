
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int ring_size; int wptr; int gpu_addr; int ready; } ;
struct TYPE_8__ {int real_vram_size; } ;
struct TYPE_5__ {int gpu_addr; scalar_t__ enabled; } ;
struct radeon_device {TYPE_4__ mc; TYPE_3__* asic; TYPE_1__ wb; struct radeon_ring* ring; } ;
struct TYPE_6__ {size_t copy_ring_index; } ;
struct TYPE_7__ {TYPE_2__ copy; } ;


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
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_6 (struct radeon_device*,int ) ;
 int FUNC_7 (int) ;

int FUNC_8(struct radeon_device *VAR_20)
{
 struct radeon_ring *VAR_21 = &VAR_20->ring[VAR_12];
 u32 VAR_22;
 u32 VAR_23;
 int VAR_24;


 FUNC_1(VAR_10, VAR_19);
 FUNC_0(VAR_10);
 FUNC_2(15);
 FUNC_1(VAR_10, 0);


 VAR_23 = FUNC_3(VAR_21->ring_size / 8);
 VAR_22 = (FUNC_3(VAR_11/8) << 8) | VAR_23;



 FUNC_1(VAR_3, VAR_22);
 FUNC_1(VAR_9, 0x0);


 FUNC_1(VAR_8, 0);


 FUNC_1(VAR_3, VAR_22 | VAR_16);
 FUNC_1(VAR_6, 0);
 VAR_21->wptr = 0;
 FUNC_1(VAR_7, VAR_21->wptr);


 FUNC_1(VAR_4,
        ((VAR_20->wb.gpu_addr + VAR_13) & 0xFFFFFFFC));
 FUNC_1(VAR_5, FUNC_7(VAR_20->wb.gpu_addr + VAR_13) & 0xFF);
 FUNC_1(VAR_17, ((VAR_20->wb.gpu_addr + VAR_14) >> 8) & 0xFFFFFFFF);

 if (VAR_20->wb.enabled)
  FUNC_1(VAR_18, 0xff);
 else {
  VAR_22 |= VAR_15;
  FUNC_1(VAR_18, 0);
 }

 FUNC_2(1);
 FUNC_1(VAR_3, VAR_22);

 FUNC_1(VAR_2, VAR_21->gpu_addr >> 8);
 FUNC_1(VAR_1, (1 << 27) | (1 << 28));

 FUNC_4(VAR_20);
 VAR_21->ready = 1;
 VAR_24 = FUNC_5(VAR_20, VAR_12, VAR_21);
 if (VAR_24) {
  VAR_21->ready = 0;
  return VAR_24;
 }

 if (VAR_20->asic->copy.copy_ring_index == VAR_12)
  FUNC_6(VAR_20, VAR_20->mc.real_vram_size);

 return 0;
}
