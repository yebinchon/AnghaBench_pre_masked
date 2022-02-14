
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_ring {int align_mask; int gpu_addr; int wptr; int ready; scalar_t__ rptr_save_reg; } ;
struct TYPE_4__ {int real_vram_size; } ;
struct TYPE_3__ {int gpu_addr; scalar_t__ enabled; } ;
struct radeon_device {TYPE_2__ mc; struct radeon_ring* ring; int pdev; TYPE_1__ wb; int me_fw; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned long) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,unsigned int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 scalar_t__ FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ring*,unsigned int,int,int ) ;
 int FUNC_11 (struct radeon_device*,size_t,struct radeon_ring*) ;
 scalar_t__ FUNC_12 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_13 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_14 (struct radeon_device*,scalar_t__*) ;
 int FUNC_15 (struct radeon_device*,int ) ;
 int FUNC_16 (int) ;

int FUNC_17(struct radeon_device *VAR_23, unsigned VAR_24)
{
 struct radeon_ring *VAR_25 = &VAR_23->ring[VAR_17];
 unsigned VAR_26;
 unsigned VAR_27;
 unsigned VAR_28;
 unsigned VAR_29;
 unsigned VAR_30;
 unsigned VAR_31;
 unsigned VAR_32;
 uint32_t VAR_33;
 int VAR_34;

 if (FUNC_9(VAR_23)) {
  FUNC_0("Failed to register debugfs file for CP !\n");
 }
 if (!VAR_23->me_fw) {
  VAR_34 = FUNC_7(VAR_23);
  if (VAR_34) {
   FUNC_0("Failed to load firmware!\n");
   return VAR_34;
  }
 }


 VAR_26 = FUNC_5(VAR_24 / 8);
 VAR_24 = (1 << (VAR_26 + 1)) * 4;
 FUNC_8(VAR_23);
 VAR_34 = FUNC_10(VAR_23, VAR_25, VAR_24, VAR_18,
        VAR_3);
 if (VAR_34) {
  return VAR_34;
 }


 VAR_27 = 9;

 VAR_28 = 1;
 VAR_25->align_mask = 16 - 1;

 VAR_29 = 64;



 VAR_30 = 0;
 VAR_31 = 80;
 VAR_32 = 16;

 FUNC_4(0x718, VAR_29 | (VAR_30 << 28));
 VAR_33 = (FUNC_2(VAR_14, VAR_26) |
        FUNC_2(VAR_13, VAR_27) |
        FUNC_2(VAR_12, VAR_28));



 FUNC_4(VAR_5, VAR_33 | VAR_15);


 FUNC_1("radeon: ring at 0x%016lX\n", (unsigned long)VAR_25->gpu_addr);
 FUNC_4(VAR_4, VAR_25->gpu_addr);

 FUNC_4(VAR_5, VAR_33 | VAR_16 | VAR_15);
 FUNC_4(VAR_6, 0);
 VAR_25->wptr = 0;
 FUNC_4(VAR_7, VAR_25->wptr);


 FUNC_4(VAR_20,
  FUNC_3((VAR_23->wb.gpu_addr + VAR_18) >> 2));
 FUNC_4(VAR_22, VAR_23->wb.gpu_addr + VAR_19);

 if (VAR_23->wb.enabled)
  FUNC_4(VAR_21, 0xff);
 else {
  VAR_33 |= VAR_15;
  FUNC_4(VAR_21, 0);
 }

 FUNC_4(VAR_5, VAR_33);
 FUNC_16(10);

 FUNC_4(VAR_2,
        FUNC_2(VAR_11, VAR_31) |
        FUNC_2(VAR_10, VAR_32));
 FUNC_4(VAR_8, 0);
 FUNC_4(VAR_2, 0x00004D4D);
 FUNC_4(VAR_1, VAR_9);


 FUNC_6(VAR_23->pdev);

 FUNC_11(VAR_23, VAR_17, &VAR_23->ring[VAR_17]);
 VAR_34 = FUNC_13(VAR_23, VAR_17, VAR_25);
 if (VAR_34) {
  FUNC_0("radeon: cp isn't working (%d).\n", VAR_34);
  return VAR_34;
 }
 VAR_25->ready = 1;
 FUNC_15(VAR_23, VAR_23->mc.real_vram_size);

 if (!VAR_25->rptr_save_reg
     && FUNC_12(VAR_23, VAR_25)) {
  VAR_34 = FUNC_14(VAR_23, &VAR_25->rptr_save_reg);
  if (VAR_34) {
   FUNC_0("failed to get scratch reg for rptr save (%d).\n", VAR_34);
   VAR_25->rptr_save_reg = 0;
  }
 }
 return 0;
}
