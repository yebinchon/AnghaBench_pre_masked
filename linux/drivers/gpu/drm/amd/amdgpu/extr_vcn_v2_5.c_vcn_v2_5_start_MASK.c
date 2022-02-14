
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int ring_size; int gpu_addr; int wptr; } ;
struct TYPE_8__ {int num_vcn_inst; int harvest_config; TYPE_3__* inst; } ;
struct TYPE_5__ {int gb_addr_config; } ;
struct TYPE_6__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_4__ vcn; TYPE_2__ gfx; } ;
struct TYPE_7__ {struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
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
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int ,int) ;
 int VAR_33 ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
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
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_14(struct amdgpu_device *VAR_62)
{
 struct amdgpu_ring *VAR_63;
 uint32_t VAR_64, VAR_65;
 int VAR_66, VAR_67, VAR_68, VAR_69;

 for (VAR_66 = 0; VAR_66 < VAR_62->vcn.num_vcn_inst; ++VAR_66) {
  if (VAR_62->vcn.harvest_config & (1 << VAR_66))
   continue;

  FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_45), 0,
   ~VAR_25);


  VAR_65 = FUNC_2(VAR_5, VAR_66, VAR_60) | VAR_28;
  FUNC_5(VAR_5, VAR_66, VAR_60, VAR_65);
 }


 FUNC_12(VAR_62);

 for (VAR_66 = 0; VAR_66 < VAR_62->vcn.num_vcn_inst; ++VAR_66) {
  if (VAR_62->vcn.harvest_config & (1 << VAR_66))
   continue;

  FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_61),
   VAR_31, ~VAR_31);


  FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_40), 0,
   ~VAR_11);


  VAR_65 = FUNC_2(VAR_5, VAR_66, VAR_35);
  VAR_65 &= ~0xff;
  FUNC_5(VAR_5, VAR_66, VAR_35, VAR_65 | 0x8|
   VAR_10 |
   VAR_8 |
   VAR_7 |
   VAR_9);


  VAR_65 = FUNC_2(VAR_5, VAR_66, VAR_41);
  VAR_65 &= ~VAR_12;
  VAR_65 |= 0x2 << VAR_13;
  FUNC_5(VAR_32, VAR_66, VAR_41, VAR_65);


  FUNC_5(VAR_5, VAR_66, VAR_43,
   ((0x1 << VAR_14) |
   (0x2 << VAR_15) |
   (0x3 << VAR_16) |
   (0x4 << VAR_17)));


  FUNC_5(VAR_5, VAR_66, VAR_44,
   ((0x1 << VAR_18) |
   (0x2 << VAR_19) |
   (0x3 << VAR_20) |
   (0x4 << VAR_21)));


  FUNC_5(VAR_5, VAR_66, VAR_42,
   ((0x0 << VAR_22) |
   (0x1 << VAR_23) |
   (0x2 << VAR_24)));
 }

 FUNC_13(VAR_62);

 for (VAR_66 = 0; VAR_66 < VAR_62->vcn.num_vcn_inst; ++VAR_66) {
  if (VAR_62->vcn.harvest_config & (1 << VAR_66))
   continue;

  FUNC_5(VAR_5, VAR_66, VAR_34,
   VAR_62->gfx.config.gb_addr_config);
  FUNC_5(VAR_5, VAR_66, VAR_34,
   VAR_62->gfx.config.gb_addr_config);


  FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_36), 0,
   ~VAR_6);


  FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_49), 0,
   ~VAR_27);

  FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_61), 0,
   ~VAR_30);

  for (VAR_68 = 0; VAR_68 < 10; ++VAR_68) {
   uint32_t VAR_70;

   for (VAR_67 = 0; VAR_67 < 100; ++VAR_67) {
    VAR_70 = FUNC_2(VAR_5, VAR_66, VAR_60);
    if (VAR_70 & 2)
     break;
    if (VAR_33 == 1)
     FUNC_9(500);
    else
     FUNC_8(10);
   }
   VAR_69 = 0;
   if (VAR_70 & 2)
    break;

   FUNC_0("VCN decode not responding, trying to reset the VCPU!!!\n");
   FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_61),
    VAR_30,
    ~VAR_30);
   FUNC_8(10);
   FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_61), 0,
    ~VAR_30);

   FUNC_8(10);
   VAR_69 = -1;
  }

  if (VAR_69) {
   FUNC_0("VCN decode not responding, giving up!!!\n");
   return VAR_69;
  }


  FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_40),
   VAR_11,
   ~VAR_11);


  FUNC_4(FUNC_3(VAR_5, VAR_66, VAR_60), 0,
   ~(2 << VAR_29));

  FUNC_5(VAR_5, VAR_66, VAR_39, 0);

  VAR_63 = &VAR_62->vcn.inst[VAR_66].ring_dec;

  VAR_64 = FUNC_10(VAR_63->ring_size);
  VAR_65 = FUNC_1(0, VAR_26, VAR_1, VAR_64);
  VAR_65 = FUNC_1(VAR_65, VAR_26, VAR_0, 1);
  VAR_65 = FUNC_1(VAR_65, VAR_26, VAR_2, 1);
  VAR_65 = FUNC_1(VAR_65, VAR_26, VAR_3, 1);
  VAR_65 = FUNC_1(VAR_65, VAR_26, VAR_4, 1);
  FUNC_5(VAR_5, VAR_66, VAR_46, VAR_65);


  FUNC_5(VAR_5, VAR_66, VAR_38,
   FUNC_7(VAR_63->gpu_addr));
  FUNC_5(VAR_5, VAR_66, VAR_37,
   FUNC_11(VAR_63->gpu_addr));


  FUNC_5(VAR_5, VAR_66, VAR_47, 0);

  VAR_63->wptr = FUNC_2(VAR_5, VAR_66, VAR_47);
  FUNC_5(VAR_5, VAR_66, VAR_48,
    FUNC_7(VAR_63->wptr));
  VAR_63 = &VAR_62->vcn.inst[VAR_66].ring_enc[0];
  FUNC_5(VAR_5, VAR_66, VAR_54, FUNC_7(VAR_63->wptr));
  FUNC_5(VAR_5, VAR_66, VAR_58, FUNC_7(VAR_63->wptr));
  FUNC_5(VAR_5, VAR_66, VAR_52, VAR_63->gpu_addr);
  FUNC_5(VAR_5, VAR_66, VAR_50, FUNC_11(VAR_63->gpu_addr));
  FUNC_5(VAR_5, VAR_66, VAR_56, VAR_63->ring_size / 4);

  VAR_63 = &VAR_62->vcn.inst[VAR_66].ring_enc[1];
  FUNC_5(VAR_5, VAR_66, VAR_55, FUNC_7(VAR_63->wptr));
  FUNC_5(VAR_5, VAR_66, VAR_59, FUNC_7(VAR_63->wptr));
  FUNC_5(VAR_5, VAR_66, VAR_53, VAR_63->gpu_addr);
  FUNC_5(VAR_5, VAR_66, VAR_51, FUNC_11(VAR_63->gpu_addr));
  FUNC_5(VAR_5, VAR_66, VAR_57, VAR_63->ring_size / 4);
 }
 VAR_69 = FUNC_6(VAR_62);

 return VAR_69;
}
