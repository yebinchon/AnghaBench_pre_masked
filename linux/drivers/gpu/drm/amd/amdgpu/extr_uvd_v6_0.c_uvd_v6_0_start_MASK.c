
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int ring_size; int gpu_addr; int wptr; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {struct amdgpu_ring* ring_enc; struct amdgpu_ring ring; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int ,int) ;
 void* FUNC_2 (int ) ;
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
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
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
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_65)
{
 struct amdgpu_ring *VAR_66 = &VAR_65->uvd.inst->ring;
 uint32_t VAR_67, VAR_68;
 uint32_t VAR_69;
 uint32_t VAR_70;
 int VAR_71, VAR_72, VAR_73;


 FUNC_5(VAR_46, 0, ~VAR_19);


 VAR_69 = 0;
 VAR_70 = 0;

 FUNC_11(VAR_65);


 FUNC_4(VAR_16, VAR_32, 0);


 FUNC_4(VAR_9, VAR_8, 1);
 FUNC_7(1);


 FUNC_3(VAR_62,
  VAR_25 |
  VAR_29 |
  VAR_24 |
  VAR_27 |
  VAR_22 |
  VAR_23 |
  VAR_28 |
  VAR_26);
 FUNC_7(5);


 FUNC_4(VAR_7, VAR_6, 0);
 FUNC_7(5);


 FUNC_3(VAR_34,
  (0x40 << VAR_15) |
  VAR_14 |
  VAR_10 |
  VAR_13 |
  VAR_12 |
  VAR_11);






 FUNC_3(VAR_37, VAR_69);
 FUNC_3(VAR_45, VAR_70);

 FUNC_3(VAR_41, 0x40c2040);
 FUNC_3(VAR_42, 0x0);
 FUNC_3(VAR_43, 0x40c2040);
 FUNC_3(VAR_44, 0x0);
 FUNC_3(VAR_39, 0);
 FUNC_3(VAR_40, 0x88);


 FUNC_3(VAR_62, VAR_29);
 FUNC_7(5);


 FUNC_3(VAR_64, VAR_31);


 FUNC_4(VAR_9, VAR_8, 0);


 FUNC_3(VAR_62, 0);
 FUNC_7(10);

 for (VAR_71 = 0; VAR_71 < 10; ++VAR_71) {
  uint32_t VAR_74;

  for (VAR_72 = 0; VAR_72 < 100; ++VAR_72) {
   VAR_74 = FUNC_2(VAR_63);
   if (VAR_74 & 2)
    break;
   FUNC_7(10);
  }
  VAR_73 = 0;
  if (VAR_74 & 2)
   break;

  FUNC_0("UVD not responding, trying to reset the VCPU!!!\n");
  FUNC_4(VAR_21, VAR_33, 1);
  FUNC_7(10);
  FUNC_4(VAR_21, VAR_33, 0);
  FUNC_7(10);
  VAR_73 = -1;
 }

 if (VAR_73) {
  FUNC_0("UVD not responding, giving up!!!\n");
  return VAR_73;
 }

 FUNC_5(VAR_38,
  (VAR_18|VAR_17),
  ~(VAR_18|VAR_17));


 FUNC_5(VAR_63, 0, ~(2 << VAR_30));


 VAR_67 = FUNC_8(VAR_66->ring_size);
 VAR_68 = FUNC_1(0, VAR_20, VAR_1, VAR_67);
 VAR_68 = FUNC_1(VAR_68, VAR_20, VAR_0, 1);
 VAR_68 = FUNC_1(VAR_68, VAR_20, VAR_2, 1);
 VAR_68 = FUNC_1(VAR_68, VAR_20, VAR_5, 0);
 VAR_68 = FUNC_1(VAR_68, VAR_20, VAR_3, 1);
 VAR_68 = FUNC_1(VAR_68, VAR_20, VAR_4, 1);
 FUNC_3(VAR_47, VAR_68);


 FUNC_3(VAR_51, 0);


 FUNC_3(VAR_49, (FUNC_9(VAR_66->gpu_addr) >> 2));


 FUNC_3(VAR_36,
   FUNC_6(VAR_66->gpu_addr));
 FUNC_3(VAR_35,
   FUNC_9(VAR_66->gpu_addr));


 FUNC_3(VAR_48, 0);

 VAR_66->wptr = FUNC_2(VAR_48);
 FUNC_3(VAR_50, FUNC_6(VAR_66->wptr));

 FUNC_4(VAR_20, VAR_2, 0);

 if (FUNC_10(VAR_65)) {
  VAR_66 = &VAR_65->uvd.inst->ring_enc[0];
  FUNC_3(VAR_56, FUNC_6(VAR_66->wptr));
  FUNC_3(VAR_60, FUNC_6(VAR_66->wptr));
  FUNC_3(VAR_54, VAR_66->gpu_addr);
  FUNC_3(VAR_52, FUNC_9(VAR_66->gpu_addr));
  FUNC_3(VAR_58, VAR_66->ring_size / 4);

  VAR_66 = &VAR_65->uvd.inst->ring_enc[1];
  FUNC_3(VAR_57, FUNC_6(VAR_66->wptr));
  FUNC_3(VAR_61, FUNC_6(VAR_66->wptr));
  FUNC_3(VAR_55, VAR_66->gpu_addr);
  FUNC_3(VAR_53, FUNC_9(VAR_66->gpu_addr));
  FUNC_3(VAR_59, VAR_66->ring_size / 4);
 }

 return 0;
}
