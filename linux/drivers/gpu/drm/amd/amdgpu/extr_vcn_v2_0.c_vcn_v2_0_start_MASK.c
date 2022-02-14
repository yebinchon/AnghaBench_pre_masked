
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int ring_size; int gpu_addr; int wptr; } ;
struct TYPE_6__ {TYPE_2__* inst; int indirect_sram; } ;
struct TYPE_4__ {scalar_t__ dpm_enabled; } ;
struct amdgpu_device {int pg_flags; TYPE_3__ vcn; TYPE_1__ pm; } ;
struct TYPE_5__ {struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
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
 int VAR_33 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
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
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*) ;
 int FUNC_15 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_16(struct amdgpu_device *VAR_61)
{
 struct amdgpu_ring *VAR_62 = &VAR_61->vcn.inst->ring_dec;
 uint32_t VAR_63, VAR_64;
 uint32_t VAR_65;
 int VAR_66, VAR_67, VAR_68;

 if (VAR_61->pm.dpm_enabled)
  FUNC_6(VAR_61, 1);

 if (VAR_61->pg_flags & VAR_0) {
  VAR_68 = FUNC_15(VAR_61, VAR_61->vcn.indirect_sram);
  if (VAR_68)
   return VAR_68;
  goto jpeg;
 }

 FUNC_13(VAR_61);


 VAR_64 = FUNC_2(VAR_6, 0, VAR_59) | VAR_30;
 FUNC_5(VAR_6, 0, VAR_59, VAR_64);


 FUNC_12(VAR_61);


 FUNC_4(FUNC_3(VAR_6, 0, VAR_60),
  VAR_32, ~VAR_32);


 FUNC_4(FUNC_3(VAR_6, 0, VAR_40), 0,
  ~VAR_12);


 VAR_64 = FUNC_2(VAR_6, 0, VAR_34);
 FUNC_5(VAR_6, 0, VAR_34, VAR_64 |
  VAR_11 |
  VAR_9 |
  VAR_8 |
  VAR_10);


 VAR_64 = FUNC_2(VAR_6, 0, VAR_41);
 VAR_64 &= ~VAR_13;
 VAR_64 |= 0x2 << VAR_14;
 FUNC_5(VAR_33, 0, VAR_41, VAR_64);


 FUNC_5(VAR_6, 0, VAR_43,
  ((0x1 << VAR_15) |
  (0x2 << VAR_16) |
  (0x3 << VAR_17) |
  (0x4 << VAR_18)));


 FUNC_5(VAR_6, 0, VAR_44,
  ((0x1 << VAR_19) |
  (0x2 << VAR_20) |
  (0x3 << VAR_21) |
  (0x4 << VAR_22)));


 FUNC_5(VAR_6, 0, VAR_42,
  ((0x0 << VAR_23) |
  (0x1 << VAR_24) |
  (0x2 << VAR_25)));

 FUNC_14(VAR_61);


 FUNC_4(FUNC_3(VAR_6, 0, VAR_58), 0,
  ~VAR_29);


 FUNC_4(FUNC_3(VAR_6, 0, VAR_35), 0,
  ~VAR_7);

 VAR_64 = FUNC_2(VAR_33, 0, VAR_58);
 VAR_64 &= ~VAR_27;
 VAR_64 &= ~VAR_28;
 FUNC_5(VAR_33, 0, VAR_58, VAR_64);


 VAR_65 = 0;




 FUNC_5(VAR_6, 0, VAR_39, VAR_65);

 for (VAR_66 = 0; VAR_66 < 10; ++VAR_66) {
  uint32_t VAR_69;

  for (VAR_67 = 0; VAR_67 < 100; ++VAR_67) {
   VAR_69 = FUNC_2(VAR_6, 0, VAR_59);
   if (VAR_69 & 2)
    break;
   FUNC_9(10);
  }
  VAR_68 = 0;
  if (VAR_69 & 2)
   break;

  FUNC_0("VCN decode not responding, trying to reset the VCPU!!!\n");
  FUNC_4(FUNC_3(VAR_6, 0, VAR_58),
   VAR_29,
   ~VAR_29);
  FUNC_9(10);
  FUNC_4(FUNC_3(VAR_6, 0, VAR_58), 0,
   ~VAR_29);
  FUNC_9(10);
  VAR_68 = -1;
 }

 if (VAR_68) {
  FUNC_0("VCN decode not responding, giving up!!!\n");
  return VAR_68;
 }


 FUNC_4(FUNC_3(VAR_6, 0, VAR_40),
  VAR_12,
  ~VAR_12);


 FUNC_4(FUNC_3(VAR_6, 0, VAR_59), 0,
  ~(2 << VAR_31));

 FUNC_5(VAR_6, 0, VAR_38, 0);


 VAR_63 = FUNC_10(VAR_62->ring_size);
 VAR_64 = FUNC_1(0, VAR_26, VAR_2, VAR_63);
 VAR_64 = FUNC_1(VAR_64, VAR_26, VAR_1, 1);
 VAR_64 = FUNC_1(VAR_64, VAR_26, VAR_3, 1);
 VAR_64 = FUNC_1(VAR_64, VAR_26, VAR_4, 1);
 VAR_64 = FUNC_1(VAR_64, VAR_26, VAR_5, 1);
 FUNC_5(VAR_6, 0, VAR_45, VAR_64);


 FUNC_5(VAR_6, 0, VAR_37,
  FUNC_8(VAR_62->gpu_addr));
 FUNC_5(VAR_6, 0, VAR_36,
  FUNC_11(VAR_62->gpu_addr));


 FUNC_5(VAR_6, 0, VAR_46, 0);

 VAR_62->wptr = FUNC_2(VAR_6, 0, VAR_46);
 FUNC_5(VAR_6, 0, VAR_47,
   FUNC_8(VAR_62->wptr));

 VAR_62 = &VAR_61->vcn.inst->ring_enc[0];
 FUNC_5(VAR_6, 0, VAR_52, FUNC_8(VAR_62->wptr));
 FUNC_5(VAR_6, 0, VAR_56, FUNC_8(VAR_62->wptr));
 FUNC_5(VAR_6, 0, VAR_50, VAR_62->gpu_addr);
 FUNC_5(VAR_6, 0, VAR_48, FUNC_11(VAR_62->gpu_addr));
 FUNC_5(VAR_6, 0, VAR_54, VAR_62->ring_size / 4);

 VAR_62 = &VAR_61->vcn.inst->ring_enc[1];
 FUNC_5(VAR_6, 0, VAR_53, FUNC_8(VAR_62->wptr));
 FUNC_5(VAR_6, 0, VAR_57, FUNC_8(VAR_62->wptr));
 FUNC_5(VAR_6, 0, VAR_51, VAR_62->gpu_addr);
 FUNC_5(VAR_6, 0, VAR_49, FUNC_11(VAR_62->gpu_addr));
 FUNC_5(VAR_6, 0, VAR_55, VAR_62->ring_size / 4);

jpeg:
 VAR_68 = FUNC_7(VAR_61);

 return VAR_68;
}
