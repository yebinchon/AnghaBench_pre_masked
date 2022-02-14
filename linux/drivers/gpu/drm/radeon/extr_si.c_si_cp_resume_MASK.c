
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
struct radeon_device {TYPE_4__ mc; TYPE_3__* asic; struct radeon_ring* ring; TYPE_1__ wb; } ;
struct TYPE_6__ {size_t copy_ring_index; } ;
struct TYPE_7__ {TYPE_2__ copy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
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
 int VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_32)
{
 struct radeon_ring *VAR_33;
 u32 VAR_34;
 u32 VAR_35;
 int VAR_36;

 FUNC_6(VAR_32, 0);

 FUNC_0(VAR_21, 0x0);
 FUNC_0(VAR_20, 0x0);


 FUNC_0(VAR_19, 0);

 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_30, ((VAR_32->wb.gpu_addr + VAR_27) >> 8) & 0xFFFFFFFF);



 VAR_33 = &VAR_32->ring[VAR_23];
 VAR_35 = FUNC_2(VAR_33->ring_size / 8);
 VAR_34 = (FUNC_2(VAR_22/8) << 8) | VAR_35;



 FUNC_0(VAR_5, VAR_34);


 FUNC_0(VAR_5, VAR_34 | VAR_29);
 VAR_33->wptr = 0;
 FUNC_0(VAR_8, VAR_33->wptr);


 FUNC_0(VAR_6, (VAR_32->wb.gpu_addr + VAR_26) & 0xFFFFFFFC);
 FUNC_0(VAR_7, FUNC_7(VAR_32->wb.gpu_addr + VAR_26) & 0xFF);

 if (VAR_32->wb.enabled)
  FUNC_0(VAR_31, 0xff);
 else {
  VAR_34 |= VAR_28;
  FUNC_0(VAR_31, 0);
 }

 FUNC_1(1);
 FUNC_0(VAR_5, VAR_34);

 FUNC_0(VAR_4, VAR_33->gpu_addr >> 8);



 VAR_33 = &VAR_32->ring[VAR_1];
 VAR_35 = FUNC_2(VAR_33->ring_size / 8);
 VAR_34 = (FUNC_2(VAR_22/8) << 8) | VAR_35;



 FUNC_0(VAR_10, VAR_34);


 FUNC_0(VAR_10, VAR_34 | VAR_29);
 VAR_33->wptr = 0;
 FUNC_0(VAR_13, VAR_33->wptr);


 FUNC_0(VAR_11, (VAR_32->wb.gpu_addr + VAR_24) & 0xFFFFFFFC);
 FUNC_0(VAR_12, FUNC_7(VAR_32->wb.gpu_addr + VAR_24) & 0xFF);

 FUNC_1(1);
 FUNC_0(VAR_10, VAR_34);

 FUNC_0(VAR_9, VAR_33->gpu_addr >> 8);



 VAR_33 = &VAR_32->ring[VAR_2];
 VAR_35 = FUNC_2(VAR_33->ring_size / 8);
 VAR_34 = (FUNC_2(VAR_22/8) << 8) | VAR_35;



 FUNC_0(VAR_15, VAR_34);


 FUNC_0(VAR_15, VAR_34 | VAR_29);
 VAR_33->wptr = 0;
 FUNC_0(VAR_18, VAR_33->wptr);


 FUNC_0(VAR_16, (VAR_32->wb.gpu_addr + VAR_25) & 0xFFFFFFFC);
 FUNC_0(VAR_17, FUNC_7(VAR_32->wb.gpu_addr + VAR_25) & 0xFF);

 FUNC_1(1);
 FUNC_0(VAR_15, VAR_34);

 FUNC_0(VAR_14, VAR_33->gpu_addr >> 8);


 FUNC_5(VAR_32);
 VAR_32->ring[VAR_23].ready = 1;
 VAR_32->ring[VAR_1].ready = 1;
 VAR_32->ring[VAR_2].ready = 1;
 VAR_36 = FUNC_3(VAR_32, VAR_23, &VAR_32->ring[VAR_23]);
 if (VAR_36) {
  VAR_32->ring[VAR_23].ready = 0;
  VAR_32->ring[VAR_1].ready = 0;
  VAR_32->ring[VAR_2].ready = 0;
  return VAR_36;
 }
 VAR_36 = FUNC_3(VAR_32, VAR_1, &VAR_32->ring[VAR_1]);
 if (VAR_36) {
  VAR_32->ring[VAR_1].ready = 0;
 }
 VAR_36 = FUNC_3(VAR_32, VAR_2, &VAR_32->ring[VAR_2]);
 if (VAR_36) {
  VAR_32->ring[VAR_2].ready = 0;
 }

 FUNC_6(VAR_32, 1);

 if (VAR_32->asic->copy.copy_ring_index == VAR_23)
  FUNC_4(VAR_32, VAR_32->mc.real_vram_size);

 return 0;
}
