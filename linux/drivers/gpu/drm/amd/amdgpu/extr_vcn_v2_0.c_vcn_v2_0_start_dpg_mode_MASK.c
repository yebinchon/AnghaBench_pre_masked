
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {void* wptr; void* gpu_addr; int ring_size; } ;
struct TYPE_4__ {int* dpg_sram_curr_addr; scalar_t__ dpg_sram_cpu_addr; int dpg_sram_gpu_addr; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct TYPE_3__ {struct amdgpu_ring ring_dec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int) ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int,int ,int) ;
 int FUNC_5 (void*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct amdgpu_device*,int ,int ,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct amdgpu_device*,int ,int) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_53, bool VAR_54)
{
 struct amdgpu_ring *VAR_55 = &VAR_53->vcn.inst->ring_dec;
 uint32_t VAR_56, VAR_57;

 FUNC_10(VAR_53);


 VAR_57 = FUNC_1(VAR_5, 0, VAR_42);
 VAR_57 |= VAR_28;
 VAR_57 |= VAR_27;
 FUNC_3(VAR_5, 0, VAR_42, VAR_57);

 if (VAR_54)
  VAR_53->vcn.dpg_sram_curr_addr = (uint32_t*)VAR_53->vcn.dpg_sram_cpu_addr;


 FUNC_9(VAR_53, 0, VAR_54);


 VAR_57 = (0xFF << VAR_32);
 VAR_57 |= VAR_30;
 VAR_57 |= VAR_31;
 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_52), VAR_57, 0, VAR_54);


 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_37), 0, 0, VAR_54);


 VAR_57 = (VAR_12 |
  VAR_10 |
  VAR_7 |
  VAR_9 |
  VAR_8 |
  VAR_11 |
  (8 << VAR_13) |
  0x00100000L);
 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_33), VAR_57, 0, VAR_54);

 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_38),
  0x2 << VAR_15, 0, VAR_54);

 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_40),
  ((0x1 << VAR_16) |
   (0x2 << VAR_17) |
   (0x3 << VAR_18) |
   (0x4 << VAR_19)), 0, VAR_54);

 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_41),
  ((0x1 << VAR_20) |
   (0x2 << VAR_21) |
   (0x3 << VAR_22) |
   (0x4 << VAR_23)), 0, VAR_54);

 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_39),
  ((0x0 << VAR_24) |
   (0x1 << VAR_25) |
   (0x2 << VAR_26)), 0, VAR_54);

 FUNC_11(VAR_53, VAR_54);

 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_49), 0x10, 0, VAR_54);
 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_48), 0x3, 0, VAR_54);


 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_51), 0, 0, VAR_54);


 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_34),
  0x1F << VAR_6, 0, VAR_54);


 FUNC_4(FUNC_2(
  VAR_5, 0, VAR_37),
  VAR_14, 0, VAR_54);

 if (VAR_54)
  FUNC_7(VAR_53, 0, VAR_53->vcn.dpg_sram_gpu_addr,
        (uint32_t)((uintptr_t)VAR_53->vcn.dpg_sram_curr_addr -
            (uintptr_t)VAR_53->vcn.dpg_sram_cpu_addr));


 VAR_56 = FUNC_6(VAR_55->ring_size);
 VAR_57 = FUNC_0(0, VAR_29, VAR_1, VAR_56);
 VAR_57 = FUNC_0(VAR_57, VAR_29, VAR_0, 1);
 VAR_57 = FUNC_0(VAR_57, VAR_29, VAR_2, 1);
 VAR_57 = FUNC_0(VAR_57, VAR_29, VAR_3, 1);
 VAR_57 = FUNC_0(VAR_57, VAR_29, VAR_4, 1);
 FUNC_3(VAR_5, 0, VAR_43, VAR_57);


 FUNC_3(VAR_5, 0, VAR_47, 0);


 FUNC_3(VAR_5, 0, VAR_45,
  (FUNC_8(VAR_55->gpu_addr) >> 2));


 FUNC_3(VAR_5, 0, VAR_36,
  FUNC_5(VAR_55->gpu_addr));
 FUNC_3(VAR_5, 0, VAR_35,
  FUNC_8(VAR_55->gpu_addr));


 FUNC_3(VAR_5, 0, VAR_44, 0);

 FUNC_3(VAR_5, 0, VAR_50, 0);

 VAR_55->wptr = FUNC_1(VAR_5, 0, VAR_44);
 FUNC_3(VAR_5, 0, VAR_46,
  FUNC_5(VAR_55->wptr));

 return 0;
}
