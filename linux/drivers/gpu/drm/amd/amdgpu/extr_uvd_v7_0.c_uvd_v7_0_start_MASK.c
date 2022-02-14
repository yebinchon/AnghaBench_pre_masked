
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int ring_size; int gpu_addr; int wptr; } ;
struct TYPE_3__ {int num_uvd_inst; int harvest_config; TYPE_2__* inst; } ;
struct amdgpu_device {TYPE_1__ uvd; } ;
struct TYPE_4__ {struct amdgpu_ring* ring_enc; struct amdgpu_ring ring; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int ,int) ;
 void* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
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
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
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
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_62)
{
 struct amdgpu_ring *VAR_63;
 uint32_t VAR_64, VAR_65;
 uint32_t VAR_66;
 uint32_t VAR_67;
 int VAR_68, VAR_69, VAR_70, VAR_71;

 for (VAR_70 = 0; VAR_70 < VAR_62->uvd.num_uvd_inst; ++VAR_70) {
  if (VAR_62->uvd.harvest_config & (1 << VAR_70))
   continue;

  FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_43), 0,
    ~VAR_16);
 }


 VAR_66 = 0;
 VAR_67 = 0;

 FUNC_10(VAR_62);

 for (VAR_70 = 0; VAR_70 < VAR_62->uvd.num_uvd_inst; ++VAR_70) {
  if (VAR_62->uvd.harvest_config & (1 << VAR_70))
   continue;
  VAR_63 = &VAR_62->uvd.inst[VAR_70].ring;

  FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_29), 0,
    ~VAR_7);


  FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_35), 0,
    ~VAR_15);


  FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_31),
    VAR_8,
    ~VAR_8);
  FUNC_7(1);


  FUNC_5(VAR_6, VAR_70, VAR_59,
   VAR_22 |
   VAR_26 |
   VAR_21 |
   VAR_24 |
   VAR_19 |
   VAR_20 |
   VAR_25 |
   VAR_23);
  FUNC_7(5);


  FUNC_5(VAR_6, VAR_70, VAR_30,
   (0x40 << VAR_13) |
   VAR_12 |
   VAR_9 |
   VAR_11 |
   VAR_10 |
   0x00100000L);






  FUNC_5(VAR_6, VAR_70, VAR_34, VAR_66);
  FUNC_5(VAR_6, VAR_70, VAR_42, VAR_67);

  FUNC_5(VAR_6, VAR_70, VAR_38, 0x40c2040);
  FUNC_5(VAR_6, VAR_70, VAR_39, 0x0);
  FUNC_5(VAR_6, VAR_70, VAR_40, 0x40c2040);
  FUNC_5(VAR_6, VAR_70, VAR_41, 0x0);
  FUNC_5(VAR_6, VAR_70, VAR_36, 0);
  FUNC_5(VAR_6, VAR_70, VAR_37, 0x88);


  FUNC_5(VAR_6, VAR_70, VAR_59,
    VAR_26);
  FUNC_7(5);


  FUNC_5(VAR_6, VAR_70, VAR_61,
    VAR_28);


  FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_31), 0,
    ~VAR_8);


  FUNC_5(VAR_6, VAR_70, VAR_59, 0);
  FUNC_7(10);

  for (VAR_68 = 0; VAR_68 < 10; ++VAR_68) {
   uint32_t VAR_72;

   for (VAR_69 = 0; VAR_69 < 100; ++VAR_69) {
    VAR_72 = FUNC_2(VAR_6, VAR_70, VAR_60);
    if (VAR_72 & 2)
     break;
    FUNC_7(10);
   }
   VAR_71 = 0;
   if (VAR_72 & 2)
    break;

   FUNC_0("UVD(%d) not responding, trying to reset the VCPU!!!\n", VAR_70);
   FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_59),
     VAR_26,
     ~VAR_26);
   FUNC_7(10);
   FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_59), 0,
     ~VAR_26);
   FUNC_7(10);
   VAR_71 = -1;
  }

  if (VAR_71) {
   FUNC_0("UVD(%d) not responding, giving up!!!\n", VAR_70);
   return VAR_71;
  }

  FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_35),
   (VAR_15|VAR_14),
   ~(VAR_15|VAR_14));


  FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_60), 0,
    ~(2 << VAR_27));


  VAR_64 = FUNC_8(VAR_63->ring_size);
  VAR_65 = FUNC_1(0, VAR_17, VAR_1, VAR_64);
  VAR_65 = FUNC_1(VAR_65, VAR_17, VAR_0, 1);
  VAR_65 = FUNC_1(VAR_65, VAR_17, VAR_2, 1);
  VAR_65 = FUNC_1(VAR_65, VAR_17, VAR_5, 0);
  VAR_65 = FUNC_1(VAR_65, VAR_17, VAR_3, 1);
  VAR_65 = FUNC_1(VAR_65, VAR_17, VAR_4, 1);
  FUNC_5(VAR_6, VAR_70, VAR_44, VAR_65);


  FUNC_5(VAR_6, VAR_70, VAR_48, 0);


  FUNC_5(VAR_6, VAR_70, VAR_46,
    (FUNC_9(VAR_63->gpu_addr) >> 2));


  FUNC_5(VAR_6, VAR_70, VAR_33,
    FUNC_6(VAR_63->gpu_addr));
  FUNC_5(VAR_6, VAR_70, VAR_32,
    FUNC_9(VAR_63->gpu_addr));


  FUNC_5(VAR_6, VAR_70, VAR_45, 0);

  VAR_63->wptr = FUNC_2(VAR_6, VAR_70, VAR_45);
  FUNC_5(VAR_6, VAR_70, VAR_47,
    FUNC_6(VAR_63->wptr));

  FUNC_4(FUNC_3(VAR_6, VAR_70, VAR_44), 0,
    ~VAR_18);

  VAR_63 = &VAR_62->uvd.inst[VAR_70].ring_enc[0];
  FUNC_5(VAR_6, VAR_70, VAR_53, FUNC_6(VAR_63->wptr));
  FUNC_5(VAR_6, VAR_70, VAR_57, FUNC_6(VAR_63->wptr));
  FUNC_5(VAR_6, VAR_70, VAR_51, VAR_63->gpu_addr);
  FUNC_5(VAR_6, VAR_70, VAR_49, FUNC_9(VAR_63->gpu_addr));
  FUNC_5(VAR_6, VAR_70, VAR_55, VAR_63->ring_size / 4);

  VAR_63 = &VAR_62->uvd.inst[VAR_70].ring_enc[1];
  FUNC_5(VAR_6, VAR_70, VAR_54, FUNC_6(VAR_63->wptr));
  FUNC_5(VAR_6, VAR_70, VAR_58, FUNC_6(VAR_63->wptr));
  FUNC_5(VAR_6, VAR_70, VAR_52, VAR_63->gpu_addr);
  FUNC_5(VAR_6, VAR_70, VAR_50, FUNC_9(VAR_63->gpu_addr));
  FUNC_5(VAR_6, VAR_70, VAR_56, VAR_63->ring_size / 4);
 }
 return 0;
}
