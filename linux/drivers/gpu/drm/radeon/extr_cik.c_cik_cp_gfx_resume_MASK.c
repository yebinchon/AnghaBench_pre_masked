
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct radeon_ring {int ring_size; int wptr; int gpu_addr; int ready; } ;
struct TYPE_8__ {int real_vram_size; } ;
struct TYPE_5__ {int gpu_addr; int enabled; } ;
struct radeon_device {scalar_t__ family; TYPE_4__ mc; TYPE_3__* asic; struct radeon_ring* ring; TYPE_1__ wb; } ;
struct TYPE_6__ {size_t copy_ring_index; } ;
struct TYPE_7__ {TYPE_2__ copy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_5 (struct radeon_device*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_20)
{
 struct radeon_ring *VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u64 VAR_24;
 int VAR_25;

 FUNC_0(VAR_11, 0x0);
 if (VAR_20->family != VAR_1)
  FUNC_0(VAR_10, 0x0);


 FUNC_0(VAR_9, 0);


 FUNC_0(VAR_8, 0);

 FUNC_0(VAR_18, ((VAR_20->wb.gpu_addr + VAR_15) >> 8) & 0xFFFFFFFF);



 VAR_21 = &VAR_20->ring[VAR_13];
 VAR_23 = FUNC_3(VAR_21->ring_size / 8);
 VAR_22 = (FUNC_3(VAR_12/8) << 8) | VAR_23;



 FUNC_0(VAR_4, VAR_22);


 FUNC_0(VAR_4, VAR_22 | VAR_17);
 VAR_21->wptr = 0;
 FUNC_0(VAR_7, VAR_21->wptr);


 FUNC_0(VAR_5, (VAR_20->wb.gpu_addr + VAR_14) & 0xFFFFFFFC);
 FUNC_0(VAR_6, FUNC_6(VAR_20->wb.gpu_addr + VAR_14) & 0xFF);


 FUNC_0(VAR_19, 0);

 if (!VAR_20->wb.enabled)
  VAR_22 |= VAR_16;

 FUNC_2(1);
 FUNC_0(VAR_4, VAR_22);

 VAR_24 = VAR_21->gpu_addr >> 8;
 FUNC_0(VAR_2, VAR_24);
 FUNC_0(VAR_3, FUNC_6(VAR_24));


 FUNC_1(VAR_20);
 VAR_20->ring[VAR_13].ready = 1;
 VAR_25 = FUNC_4(VAR_20, VAR_13, &VAR_20->ring[VAR_13]);
 if (VAR_25) {
  VAR_20->ring[VAR_13].ready = 0;
  return VAR_25;
 }

 if (VAR_20->asic->copy.copy_ring_index == VAR_13)
  FUNC_5(VAR_20, VAR_20->mc.real_vram_size);

 return 0;
}
