
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int ring_size; int gpu_addr; int wptr; int max_dw; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct TYPE_3__ {struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
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
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int VAR_36 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
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
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_ring*,int) ;
 int FUNC_13 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_14(struct amdgpu_device *VAR_75)
{
 struct amdgpu_ring *VAR_76 = &VAR_75->vcn.inst->ring_dec;
 uint32_t VAR_77, VAR_78;
 uint32_t VAR_79;
 int VAR_80, VAR_81, VAR_82;


 VAR_79 = 0;

 FUNC_10(VAR_75);

 VAR_78 = FUNC_2(VAR_5, 0, VAR_72) | VAR_33;
 FUNC_5(VAR_5, 0, VAR_72, VAR_78);


 FUNC_11(VAR_75);


 FUNC_4(FUNC_3(VAR_5, 0, VAR_48), 0,
   ~VAR_13);


 VAR_78 = FUNC_2(VAR_5, 0, VAR_40);
 FUNC_5(VAR_5, 0, VAR_40, VAR_78 |
  VAR_12 |
  VAR_10 |
  VAR_9 |
  VAR_11);





 FUNC_5(VAR_5, 0, VAR_47, VAR_79);

 VAR_78 = FUNC_2(VAR_5, 0, VAR_49);
 VAR_78 &= ~VAR_14;
 VAR_78 |= 0x2 << VAR_15;
 FUNC_5(VAR_5, 0, VAR_49, VAR_78);

 FUNC_5(VAR_5, 0, VAR_51,
  ((0x1 << VAR_16) |
  (0x2 << VAR_17) |
  (0x3 << VAR_18) |
  (0x4 << VAR_19)));

 FUNC_5(VAR_5, 0, VAR_52,
  ((0x1 << VAR_20) |
  (0x2 << VAR_21) |
  (0x3 << VAR_22) |
  (0x4 << VAR_23)));

 FUNC_5(VAR_5, 0, VAR_50,
  ((0x0 << VAR_24) |
  (0x1 << VAR_25) |
  (0x2 << VAR_26)));

 FUNC_13(VAR_75);

 FUNC_5(VAR_5, 0, VAR_69, 0x10);
 FUNC_5(VAR_5, 0, VAR_58,
  FUNC_2(VAR_5, 0, VAR_58) | 0x3);


 FUNC_5(VAR_5, 0, VAR_74, VAR_35);


 FUNC_4(FUNC_3(VAR_5, 0, VAR_71), 0,
   ~VAR_31);


 FUNC_4(FUNC_3(VAR_5, 0, VAR_41), 0,
   ~VAR_8);

 VAR_78 = FUNC_2(VAR_5, 0, VAR_71);
 VAR_78 &= ~VAR_29;
 VAR_78 &= ~VAR_30;
 FUNC_5(VAR_5, 0, VAR_71, VAR_78);

 for (VAR_80 = 0; VAR_80 < 10; ++VAR_80) {
  uint32_t VAR_83;

  for (VAR_81 = 0; VAR_81 < 100; ++VAR_81) {
   VAR_83 = FUNC_2(VAR_5, 0, VAR_72);
   if (VAR_83 & VAR_32)
    break;
   FUNC_7(10);
  }
  VAR_82 = 0;
  if (VAR_83 & VAR_32)
   break;

  FUNC_0("VCN decode not responding, trying to reset the VCPU!!!\n");
  FUNC_4(FUNC_3(VAR_5, 0, VAR_71),
    VAR_31,
    ~VAR_31);
  FUNC_7(10);
  FUNC_4(FUNC_3(VAR_5, 0, VAR_71), 0,
    ~VAR_31);
  FUNC_7(10);
  VAR_82 = -1;
 }

 if (VAR_82) {
  FUNC_0("VCN decode not responding, giving up!!!\n");
  return VAR_82;
 }

 FUNC_4(FUNC_3(VAR_5, 0, VAR_48),
  VAR_13, ~VAR_13);


 FUNC_4(FUNC_3(VAR_5, 0, VAR_73),
  VAR_34,
  ~VAR_34);


 VAR_78 = FUNC_2(VAR_5, 0, VAR_72) & ~VAR_33;
 FUNC_5(VAR_5, 0, VAR_72, VAR_78);


 VAR_77 = FUNC_8(VAR_76->ring_size);
 VAR_78 = FUNC_1(0, VAR_27, VAR_1, VAR_77);
 VAR_78 = FUNC_1(VAR_78, VAR_27, VAR_0, 1);
 VAR_78 = FUNC_1(VAR_78, VAR_27, VAR_2, 1);
 VAR_78 = FUNC_1(VAR_78, VAR_27, VAR_3, 1);
 VAR_78 = FUNC_1(VAR_78, VAR_27, VAR_4, 1);
 FUNC_5(VAR_5, 0, VAR_53, VAR_78);


 FUNC_5(VAR_5, 0, VAR_57, 0);


 FUNC_5(VAR_5, 0, VAR_55,
   (FUNC_9(VAR_76->gpu_addr) >> 2));


 FUNC_5(VAR_5, 0, VAR_46,
   FUNC_6(VAR_76->gpu_addr));
 FUNC_5(VAR_5, 0, VAR_45,
   FUNC_9(VAR_76->gpu_addr));


 FUNC_5(VAR_5, 0, VAR_54, 0);

 FUNC_5(VAR_5, 0, VAR_70, 0);

 VAR_76->wptr = FUNC_2(VAR_5, 0, VAR_54);
 FUNC_5(VAR_5, 0, VAR_56,
   FUNC_6(VAR_76->wptr));

 FUNC_4(FUNC_3(VAR_5, 0, VAR_53), 0,
   ~VAR_28);

 VAR_76 = &VAR_75->vcn.inst->ring_enc[0];
 FUNC_5(VAR_5, 0, VAR_63, FUNC_6(VAR_76->wptr));
 FUNC_5(VAR_5, 0, VAR_67, FUNC_6(VAR_76->wptr));
 FUNC_5(VAR_5, 0, VAR_61, VAR_76->gpu_addr);
 FUNC_5(VAR_5, 0, VAR_59, FUNC_9(VAR_76->gpu_addr));
 FUNC_5(VAR_5, 0, VAR_65, VAR_76->ring_size / 4);

 VAR_76 = &VAR_75->vcn.inst->ring_enc[1];
 FUNC_5(VAR_5, 0, VAR_64, FUNC_6(VAR_76->wptr));
 FUNC_5(VAR_5, 0, VAR_68, FUNC_6(VAR_76->wptr));
 FUNC_5(VAR_5, 0, VAR_62, VAR_76->gpu_addr);
 FUNC_5(VAR_5, 0, VAR_60, FUNC_9(VAR_76->gpu_addr));
 FUNC_5(VAR_5, 0, VAR_66, VAR_76->ring_size / 4);

 VAR_76 = &VAR_75->vcn.inst->ring_jpeg;
 FUNC_5(VAR_5, 0, VAR_44, 0);
 FUNC_5(VAR_5, 0, VAR_37, VAR_6 |
   VAR_7);
 FUNC_5(VAR_5, 0, VAR_43, FUNC_6(VAR_76->gpu_addr));
 FUNC_5(VAR_5, 0, VAR_42, FUNC_9(VAR_76->gpu_addr));
 FUNC_5(VAR_5, 0, VAR_38, 0);
 FUNC_5(VAR_5, 0, VAR_39, 0);
 FUNC_5(VAR_5, 0, VAR_37, VAR_7);


 VAR_76->wptr = FUNC_2(VAR_5, 0, VAR_39);


 FUNC_12(VAR_76,
  (VAR_76->wptr + VAR_76->max_dw * VAR_36));

 return 0;
}
