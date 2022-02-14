
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* dev; int * rb; } ;
struct adreno_gpu {int gmem; } ;
struct a6xx_gpu {int gmu; int cur_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
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
 int FUNC_5 (struct msm_gpu*) ;
 int FUNC_6 (struct msm_gpu*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct msm_gpu*,int ) ;
 int FUNC_10 (struct msm_gpu*,int) ;
 int FUNC_11 (struct msm_gpu*) ;
 int FUNC_12 (struct msm_gpu*) ;
 int FUNC_13 (struct msm_gpu*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (struct msm_gpu*,int ,int) ;
 int FUNC_16 (struct msm_gpu*,int ,int ,int) ;
 struct a6xx_gpu* FUNC_17 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_18 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_19(struct msm_gpu *VAR_54)
{
 struct adreno_gpu *VAR_55 = FUNC_18(VAR_54);
 struct a6xx_gpu *VAR_56 = FUNC_17(VAR_55);
 int VAR_57;


 FUNC_8(&VAR_56->gmu, VAR_4);

 FUNC_15(VAR_54, VAR_24, 0);






 FUNC_16(VAR_54, VAR_26,
  VAR_25, 0x00000000);
 FUNC_15(VAR_54, VAR_27, 0x00000000);


 FUNC_15(VAR_54, VAR_6, 0x1);
 FUNC_15(VAR_54, VAR_53, 0x1);
 FUNC_15(VAR_54, VAR_14, 0x1);
 FUNC_15(VAR_54, VAR_29, 0x1);
 FUNC_15(VAR_54, VAR_16, 0x1);
 FUNC_15(VAR_54, VAR_15, 0x1);
 FUNC_15(VAR_54, VAR_51, 0x1);
 FUNC_15(VAR_54, VAR_52, 0x1);
 FUNC_15(VAR_54, VAR_35, 0x1);
 FUNC_15(VAR_54, VAR_31, 0x1);
 FUNC_15(VAR_54, VAR_33, 0x1);
 FUNC_15(VAR_54, VAR_23, 0x1);


 FUNC_10(VAR_54, 1);


 FUNC_15(VAR_54, VAR_50, 0x00000009);
 FUNC_15(VAR_54, VAR_28, 0x3);


 FUNC_15(VAR_54, VAR_21, 0xffffffff);


 FUNC_15(VAR_54, VAR_47, 0xffffffc0);
 FUNC_15(VAR_54, VAR_46, 0x0001ffff);
 FUNC_15(VAR_54, VAR_45, 0xfffff000);
 FUNC_15(VAR_54, VAR_44, 0x0001ffff);
 FUNC_15(VAR_54, VAR_49, 0xfffff000);
 FUNC_15(VAR_54, VAR_48, 0x0001ffff);


 FUNC_16(VAR_54, VAR_42,
  VAR_41, 0x00100000);

 FUNC_16(VAR_54, VAR_40,
  VAR_39,
  0x00100000 + VAR_55->gmem - 1);

 FUNC_15(VAR_54, VAR_38, 0x804);
 FUNC_15(VAR_54, VAR_36, 0x4);

 FUNC_15(VAR_54, VAR_12, 0x010000c0);
 FUNC_15(VAR_54, VAR_11, 0x8040362c);


 FUNC_15(VAR_54, VAR_8, 128);


 FUNC_15(VAR_54, VAR_17, (0x300 << 11));


 FUNC_15(VAR_54, VAR_7, 0x1);


 FUNC_15(VAR_54, VAR_20, 0x1);


 FUNC_15(VAR_54, VAR_9, VAR_5);

 FUNC_15(VAR_54, VAR_30, 2 << 1);
 FUNC_15(VAR_54, VAR_34, 2 << 1);
 FUNC_15(VAR_54, VAR_32, 2 << 1);
 FUNC_15(VAR_54, VAR_43, 2 << 21);


 FUNC_15(VAR_54, VAR_18,
  (1 << 30) | 0x1fffff);

 FUNC_15(VAR_54, VAR_37, 1);


 FUNC_15(VAR_54, VAR_10, 0x00000003);

 FUNC_15(VAR_54, FUNC_4(0),
  FUNC_0(0x600, 0x51));
 FUNC_15(VAR_54, FUNC_4(1), FUNC_1(0xae50, 0x2));
 FUNC_15(VAR_54, FUNC_4(2), FUNC_1(0x9624, 0x13));
 FUNC_15(VAR_54, FUNC_4(3), FUNC_1(0x8630, 0x8));
 FUNC_15(VAR_54, FUNC_4(4), FUNC_1(0x9e70, 0x1));
 FUNC_15(VAR_54, FUNC_4(5), FUNC_1(0x9e78, 0x187));
 FUNC_15(VAR_54, FUNC_4(6), FUNC_1(0xf000, 0x810));
 FUNC_15(VAR_54, FUNC_4(7),
  FUNC_0(0xfc00, 0x3));
 FUNC_15(VAR_54, FUNC_4(8), FUNC_1(0x50e, 0x0));
 FUNC_15(VAR_54, FUNC_4(9), FUNC_0(0x50f, 0x0));
 FUNC_15(VAR_54, FUNC_4(10), FUNC_1(0x510, 0x0));
 FUNC_15(VAR_54, FUNC_4(11),
  FUNC_0(0x0, 0x4f9));
 FUNC_15(VAR_54, FUNC_4(12),
  FUNC_0(0x501, 0xa));
 FUNC_15(VAR_54, FUNC_4(13),
  FUNC_0(0x511, 0x44));
 FUNC_15(VAR_54, FUNC_4(14), FUNC_1(0xe00, 0xe));
 FUNC_15(VAR_54, FUNC_4(15), FUNC_1(0x8e00, 0x0));
 FUNC_15(VAR_54, FUNC_4(16), FUNC_1(0x8e50, 0xf));
 FUNC_15(VAR_54, FUNC_4(17), FUNC_1(0xbe02, 0x0));
 FUNC_15(VAR_54, FUNC_4(18),
  FUNC_1(0xbe20, 0x11f3));
 FUNC_15(VAR_54, FUNC_4(19), FUNC_1(0x800, 0x82));
 FUNC_15(VAR_54, FUNC_4(20), FUNC_1(0x8a0, 0x8));
 FUNC_15(VAR_54, FUNC_4(21), FUNC_1(0x8ab, 0x19));
 FUNC_15(VAR_54, FUNC_4(22), FUNC_1(0x900, 0x4d));
 FUNC_15(VAR_54, FUNC_4(23), FUNC_1(0x98d, 0x76));
 FUNC_15(VAR_54, FUNC_4(24),
   FUNC_0(0x980, 0x4));
 FUNC_15(VAR_54, FUNC_4(25), FUNC_1(0xa630, 0x0));


 FUNC_15(VAR_54, VAR_19, VAR_0);

 VAR_57 = FUNC_13(VAR_54);
 if (VAR_57)
  goto out;

 VAR_57 = FUNC_11(VAR_54);
 if (VAR_57)
  goto out;


 VAR_56->cur_ring = VAR_54->rb[0];


 FUNC_15(VAR_54, VAR_13, 1);

 VAR_57 = FUNC_5(VAR_54);
 if (VAR_57)
  goto out;
 VAR_57 = FUNC_12(VAR_54);
 if (!VAR_57) {
  FUNC_2(VAR_54->rb[0], VAR_1, 1);
  FUNC_3(VAR_54->rb[0], 0x00000000);

  FUNC_6(VAR_54, VAR_54->rb[0]);
  if (!FUNC_9(VAR_54, VAR_54->rb[0]))
   return -VAR_2;
 } else {

  FUNC_14(VAR_54->dev->dev,
   "Zap shader not enabled - using SECVID_TRUST_CNTL instead\n");
  FUNC_15(VAR_54, VAR_22, 0x0);
  VAR_57 = 0;
 }

out:




 FUNC_7(&VAR_56->gmu, VAR_4);


 FUNC_7(&VAR_56->gmu, VAR_3);

 return VAR_57;
}
