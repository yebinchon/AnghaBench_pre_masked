
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_gpu {TYPE_2__* dev; int * rb; TYPE_1__* funcs; } ;
struct adreno_gpu {int gmem; TYPE_3__* info; } ;
struct TYPE_6__ {int quirks; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int (* flush ) (struct msm_gpu*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
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
 int FUNC_5 (struct msm_gpu*) ;
 int FUNC_6 (struct msm_gpu*,int ) ;
 int FUNC_7 (struct msm_gpu*) ;
 int FUNC_8 (struct msm_gpu*) ;
 int FUNC_9 (struct msm_gpu*) ;
 int FUNC_10 (struct msm_gpu*) ;
 int FUNC_11 (struct msm_gpu*,int) ;
 int FUNC_12 (struct msm_gpu*) ;
 int FUNC_13 (struct msm_gpu*) ;
 int FUNC_14 (struct msm_gpu*) ;
 scalar_t__ FUNC_15 (struct adreno_gpu*) ;
 scalar_t__ FUNC_16 (struct adreno_gpu*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (struct msm_gpu*,int,int,int) ;
 int FUNC_19 (struct msm_gpu*,int,int) ;
 int FUNC_20 (struct msm_gpu*,int,int ,int) ;
 int FUNC_21 (struct msm_gpu*,int ) ;
 int FUNC_22 (struct msm_gpu*,int ) ;
 struct adreno_gpu* FUNC_23 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_24(struct msm_gpu *VAR_66)
{
 struct adreno_gpu *VAR_67 = FUNC_23(VAR_66);
 int VAR_68;

 FUNC_19(VAR_66, VAR_61, 0x00000003);

 if (FUNC_16(VAR_67))
  FUNC_19(VAR_66, VAR_60, 0x00000009);


 FUNC_19(VAR_66, VAR_36, 0xFFFFFFFF);


 FUNC_19(VAR_66, VAR_22, 0x00000001);

 if (VAR_67->info->quirks & VAR_1) {





  FUNC_19(VAR_66, VAR_26,
   0xF0000000);
  FUNC_19(VAR_66, VAR_27,
   0xFFFFFFFF);
  FUNC_19(VAR_66, VAR_28,
   0xFFFFFFFF);
  FUNC_19(VAR_66, VAR_29,
   0xFFFFFFFF);
  FUNC_19(VAR_66, VAR_30,
   0xFFFFFFFF);
  FUNC_19(VAR_66, VAR_31,
   0xFFFFFFFF);
  FUNC_19(VAR_66, VAR_32,
   0xFFFFFFFF);
  FUNC_19(VAR_66, VAR_33,
   0xFFFFFFFF);
 }


 FUNC_19(VAR_66, VAR_25,
  (1 << 30) | 0xFFFF);


 FUNC_19(VAR_66, VAR_35, 0x01);


 FUNC_19(VAR_66, VAR_12, VAR_7);


 FUNC_19(VAR_66, VAR_37, 6);


 FUNC_19(VAR_66, VAR_50, 0x02);


 FUNC_19(VAR_66, VAR_57, 0xFFFF0000);
 FUNC_19(VAR_66, VAR_56, 0x0001FFFF);
 FUNC_19(VAR_66, VAR_59, 0xFFFF0000);
 FUNC_19(VAR_66, VAR_58, 0x0001FFFF);


 FUNC_19(VAR_66, VAR_55, 0x00100000);
 FUNC_19(VAR_66, VAR_54, 0x00000000);
 FUNC_19(VAR_66, VAR_53,
  0x00100000 + VAR_67->gmem - 1);
 FUNC_19(VAR_66, VAR_52, 0x00000000);

 FUNC_19(VAR_66, VAR_10, 0x40);
 if (FUNC_15(VAR_67))
  FUNC_19(VAR_66, VAR_11, 0x40);
 if (FUNC_16(VAR_67))
  FUNC_19(VAR_66, VAR_11, 0x400);
 FUNC_19(VAR_66, VAR_16, 0x80000060);
 FUNC_19(VAR_66, VAR_15, 0x40201B16);

 FUNC_19(VAR_66, VAR_21, (0x400 << 11 | 0x300 << 22));

 if (VAR_67->info->quirks & VAR_3)
  FUNC_18(VAR_66, VAR_21, 0, (1 << 8));

 FUNC_19(VAR_66, VAR_21, 0xc0200100);


 FUNC_19(VAR_66, VAR_9, 0x02000000);


 FUNC_19(VAR_66, VAR_23, 0xA6FFFFFF);


 FUNC_11(VAR_66, 1);

 FUNC_19(VAR_66, VAR_24, 0x0000003F);


 FUNC_19(VAR_66, VAR_48, 2 << 7);
 FUNC_19(VAR_66, VAR_45, 2 << 1);
 if (FUNC_16(VAR_67))
  FUNC_19(VAR_66, VAR_51, 2);


 FUNC_19(VAR_66, VAR_14, 0x00000007);


 FUNC_19(VAR_66, FUNC_4(0), FUNC_0(0x04, 4));
 FUNC_19(VAR_66, FUNC_4(1), FUNC_0(0x08, 8));
 FUNC_19(VAR_66, FUNC_4(2), FUNC_0(0x10, 16));
 FUNC_19(VAR_66, FUNC_4(3), FUNC_0(0x20, 32));
 FUNC_19(VAR_66, FUNC_4(4), FUNC_0(0x40, 64));
 FUNC_19(VAR_66, FUNC_4(5), FUNC_0(0x80, 64));


 FUNC_19(VAR_66, FUNC_4(6),
  FUNC_0(VAR_42,
   16));
 FUNC_19(VAR_66, FUNC_4(7),
  FUNC_0(VAR_38, 2));


 FUNC_19(VAR_66, FUNC_4(8), FUNC_0(0x800, 64));
 FUNC_19(VAR_66, FUNC_4(9), FUNC_0(0x840, 8));
 FUNC_19(VAR_66, FUNC_4(10), FUNC_0(0x880, 32));
 FUNC_19(VAR_66, FUNC_4(11), FUNC_0(0xAA0, 1));


 FUNC_19(VAR_66, FUNC_4(12), FUNC_0(0xCC0, 1));
 FUNC_19(VAR_66, FUNC_4(13), FUNC_0(0xCF0, 2));


 FUNC_19(VAR_66, FUNC_4(14), FUNC_0(0xE68, 8));
 FUNC_19(VAR_66, FUNC_4(15), FUNC_0(0xE70, 4));


 FUNC_19(VAR_66, FUNC_4(16), FUNC_0(0xE80, 16));

 if (FUNC_15(VAR_67))
  FUNC_19(VAR_66, FUNC_4(17),
   FUNC_0(0x10000, 0x8000));

 FUNC_19(VAR_66, VAR_40, 0);





 FUNC_20(VAR_66, VAR_42,
  VAR_41, 0x00000000);
 FUNC_19(VAR_66, VAR_43, 0x00000000);


 FUNC_19(VAR_66, VAR_8, 0x1);
 FUNC_19(VAR_66, VAR_65, 0x1);
 FUNC_19(VAR_66, VAR_17, 0x1);
 FUNC_19(VAR_66, VAR_44, 0x1);
 FUNC_19(VAR_66, VAR_20, 0x1);
 FUNC_19(VAR_66, VAR_18, 0x1);
 FUNC_19(VAR_66, VAR_62, 0x1);
 FUNC_19(VAR_66, VAR_63, 0x1);
 FUNC_19(VAR_66, VAR_49, 0x1);
 FUNC_19(VAR_66, VAR_46, 0x1);
 FUNC_19(VAR_66, VAR_47, 0x1);
 FUNC_19(VAR_66, VAR_39, 0x1);






 if (VAR_67->info->quirks & VAR_2) {
  FUNC_18(VAR_66, VAR_64, 0, FUNC_1(23));
  FUNC_18(VAR_66, VAR_19, FUNC_1(18), 0);
 }

 VAR_68 = FUNC_14(VAR_66);
 if (VAR_68)
  return VAR_68;

 FUNC_9(VAR_66);

 FUNC_5(VAR_66);

 VAR_68 = FUNC_12(VAR_66);
 if (VAR_68)
  return VAR_68;


 FUNC_19(VAR_66, VAR_34, VAR_0);


 FUNC_19(VAR_66, VAR_13, 0);
 VAR_68 = FUNC_7(VAR_66);
 if (VAR_68)
  return VAR_68;

 VAR_68 = FUNC_8(VAR_66);
 if (VAR_68)
  return VAR_68;





 if (FUNC_15(VAR_67)) {
  FUNC_2(VAR_66->rb[0], VAR_4, 1);
  FUNC_3(VAR_66->rb[0], 0x0F);

  VAR_66->funcs->flush(VAR_66, VAR_66->rb[0]);
  if (!FUNC_6(VAR_66, VAR_66->rb[0]))
   return -VAR_6;
 }
 VAR_68 = FUNC_13(VAR_66);
 if (!VAR_68) {
  FUNC_2(VAR_66->rb[0], VAR_5, 1);
  FUNC_3(VAR_66->rb[0], 0x00000000);

  VAR_66->funcs->flush(VAR_66, VAR_66->rb[0]);
  if (!FUNC_6(VAR_66, VAR_66->rb[0]))
   return -VAR_6;
 } else {

  FUNC_17(VAR_66->dev->dev,
   "Zap shader not enabled - using SECVID_TRUST_CNTL instead\n");
  FUNC_19(VAR_66, VAR_38, 0x0);
 }


 FUNC_10(VAR_66);

 return 0;
}
