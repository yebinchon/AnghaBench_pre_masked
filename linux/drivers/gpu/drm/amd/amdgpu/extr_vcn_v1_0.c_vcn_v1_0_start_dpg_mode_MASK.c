
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int max_dw; void* wptr; void* gpu_addr; int ring_size; } ;
struct TYPE_8__ {TYPE_3__* inst; } ;
struct TYPE_5__ {int gb_addr_config; } ;
struct TYPE_6__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_4__ vcn; TYPE_2__ gfx; } ;
struct TYPE_7__ {struct amdgpu_ring ring_jpeg; struct amdgpu_ring ring_dec; } ;


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
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int,int,int) ;
 int VAR_35 ;
 int FUNC_6 (void*) ;
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
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*,int) ;
 int FUNC_11 (struct amdgpu_ring*,void*) ;
 int FUNC_12 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_device *VAR_61)
{
 struct amdgpu_ring *VAR_62 = &VAR_61->vcn.inst->ring_dec;
 uint32_t VAR_63, VAR_64;
 uint32_t VAR_65;


 VAR_65 = 0;

 FUNC_9(VAR_61);


 VAR_64 = FUNC_1(VAR_5, 0, VAR_49);
 VAR_64 |= VAR_28;
 VAR_64 |= VAR_27;
 FUNC_4(VAR_5, 0, VAR_49, VAR_64);


 FUNC_10(VAR_61, 0);


 VAR_64 = (0xFF << VAR_34);
 VAR_64 |= VAR_32;
 VAR_64 |= VAR_33;
 FUNC_5(VAR_5, 0, VAR_60, VAR_64, 0xFFFFFFFF, 0);


 FUNC_5(VAR_5, 0, VAR_44,
   0, VAR_14, 0);


 FUNC_5(VAR_5, 0, VAR_39,
  (8 << VAR_13) |
  VAR_12 |
  VAR_8 |
  VAR_11 |
  VAR_10 |
  VAR_7 |
  VAR_9 |
  0x00100000L, 0xFFFFFFFF, 0);





 FUNC_5(VAR_5, 0, VAR_43, VAR_65, 0xFFFFFFFF, 0);

 FUNC_5(VAR_5, 0, VAR_45,
  0x2 << VAR_15, 0xFFFFFFFF, 0);

 FUNC_5(VAR_5, 0, VAR_47,
  ((0x1 << VAR_16) |
   (0x2 << VAR_17) |
   (0x3 << VAR_18) |
   (0x4 << VAR_19)), 0xFFFFFFFF, 0);

 FUNC_5(VAR_5, 0, VAR_48,
  ((0x1 << VAR_20) |
   (0x2 << VAR_21) |
   (0x3 << VAR_22) |
   (0x4 << VAR_23)), 0xFFFFFFFF, 0);

 FUNC_5(VAR_5, 0, VAR_46,
  ((0x0 << VAR_24) |
   (0x1 << VAR_25) |
   (0x2 << VAR_26)), 0xFFFFFFFF, 0);

 FUNC_12(VAR_61);

 FUNC_5(VAR_5, 0, VAR_56, 0x10, 0xFFFFFFFF, 0);
 FUNC_5(VAR_5, 0, VAR_55, 0x3, 0xFFFFFFFF, 0);


 FUNC_5(VAR_5, 0, VAR_58, 0, 0xFFFFFFFF, 0);


 FUNC_5(VAR_5, 0, VAR_40,
  0x1F << VAR_6,
  0xFFFFFFFF, 0);


 FUNC_5(VAR_5, 0, VAR_44,
   VAR_14, VAR_14, 0);

 FUNC_10(VAR_61, 1);

 FUNC_5(VAR_5, 0, VAR_39,
  (8 << VAR_13) |
  VAR_12 |
  VAR_8 |
  VAR_11 |
  VAR_10 |
  VAR_7 |
  VAR_9 |
  0x00100000L, 0xFFFFFFFF, 1);

 VAR_64 = VAR_61->gfx.config.gb_addr_config;

 FUNC_5(VAR_5, 0, VAR_36, VAR_64, 0xFFFFFFFF, 1);
 FUNC_5(VAR_5, 0, VAR_37, VAR_64, 0xFFFFFFFF, 1);


 FUNC_5(VAR_5, 0, VAR_59,
         VAR_31, 0xFFFFFFFF, 1);


 VAR_63 = FUNC_7(VAR_62->ring_size);
 VAR_64 = FUNC_0(0, VAR_29, VAR_1, VAR_63);
 VAR_64 = FUNC_0(VAR_64, VAR_29, VAR_0, 1);
 VAR_64 = FUNC_0(VAR_64, VAR_29, VAR_2, 1);
 VAR_64 = FUNC_0(VAR_64, VAR_29, VAR_3, 1);
 VAR_64 = FUNC_0(VAR_64, VAR_29, VAR_4, 1);
 FUNC_4(VAR_5, 0, VAR_50, VAR_64);


 FUNC_4(VAR_5, 0, VAR_54, 0);


 FUNC_4(VAR_5, 0, VAR_52,
        (FUNC_8(VAR_62->gpu_addr) >> 2));


 FUNC_4(VAR_5, 0, VAR_42,
        FUNC_6(VAR_62->gpu_addr));
 FUNC_4(VAR_5, 0, VAR_41,
        FUNC_8(VAR_62->gpu_addr));


 FUNC_4(VAR_5, 0, VAR_51, 0);

 FUNC_4(VAR_5, 0, VAR_57, 0);

 VAR_62->wptr = FUNC_1(VAR_5, 0, VAR_51);
 FUNC_4(VAR_5, 0, VAR_53,
        FUNC_6(VAR_62->wptr));

 FUNC_3(FUNC_2(VAR_5, 0, VAR_50), 0,
   ~VAR_30);


 VAR_62 = &VAR_61->vcn.inst->ring_jpeg;
 VAR_62->wptr = FUNC_1(VAR_5, 0, VAR_38);


 FUNC_11(VAR_62,
  (VAR_62->wptr + VAR_62->max_dw * VAR_35));

 return 0;
}
