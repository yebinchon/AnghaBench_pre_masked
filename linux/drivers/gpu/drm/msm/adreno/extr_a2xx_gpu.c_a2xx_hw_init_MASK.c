
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_gpu {int name; TYPE_1__* aspace; } ;
struct adreno_gpu {int gmem; TYPE_2__** fw; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int size; scalar_t__ data; } ;
struct TYPE_3__ {int mmu; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_13 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_14 (int) ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
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
 int FUNC_15 (char*,int) ;
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
 scalar_t__ FUNC_16 (struct msm_gpu*) ;
 int FUNC_17 (struct msm_gpu*) ;
 int FUNC_18 (struct adreno_gpu*) ;
 scalar_t__ FUNC_19 (struct adreno_gpu*) ;
 int FUNC_20 (struct msm_gpu*,int ,int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ,int*,int*) ;
 struct adreno_gpu* FUNC_23 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_24(struct msm_gpu *VAR_61)
{
 struct adreno_gpu *VAR_62 = FUNC_23(VAR_61);
 dma_addr_t VAR_63, VAR_64;
 uint32_t *VAR_65, VAR_66;
 int VAR_67, VAR_68;

 FUNC_22(VAR_61->aspace->mmu, &VAR_63, &VAR_64);

 FUNC_15("%s", VAR_61->name);


 FUNC_20(VAR_61, VAR_55, VAR_27);

 FUNC_20(VAR_61, VAR_45, 0xfffffffe);
 FUNC_20(VAR_61, VAR_46, 0xffffffff);


 FUNC_20(VAR_61, VAR_47, 0xffffffff);
 FUNC_21(30);
 FUNC_20(VAR_61, VAR_47, 0x00000000);

 if (FUNC_19(VAR_62))
  FUNC_20(VAR_61, VAR_49, 0x18000000);


 FUNC_20(VAR_61, VAR_42, 0x00004442);


 FUNC_20(VAR_61, VAR_37, 0x00000000);
 FUNC_20(VAR_61, VAR_38, 0xfffff000);

 FUNC_20(VAR_61, VAR_35, VAR_13 |
  FUNC_10(VAR_28) |
  FUNC_8(VAR_28) |
  FUNC_3(VAR_28) |
  FUNC_4(VAR_28) |
  FUNC_5(VAR_28) |
  FUNC_6(VAR_28) |
  FUNC_7(VAR_28) |
  FUNC_12(VAR_28) |
  FUNC_13(VAR_28) |
  FUNC_11(VAR_28) |
  FUNC_9(VAR_28));


 FUNC_20(VAR_61, VAR_41, VAR_60 |
  FUNC_14(0xfff));

 FUNC_20(VAR_61, VAR_39, VAR_63);
 FUNC_20(VAR_61, VAR_40, VAR_64);

 FUNC_20(VAR_61, VAR_36,
  VAR_14 |
  VAR_15);

 FUNC_20(VAR_61, VAR_32,
  FUNC_2(16) |
  VAR_2 |
  VAR_3 |
  FUNC_1(1) |
  VAR_8 |
  VAR_6 |
  VAR_1 |
  FUNC_0(8) |
  VAR_0 |
  VAR_9 |
  VAR_7 |
  VAR_5 |
  VAR_4);
 if (!FUNC_18(VAR_62))
  FUNC_20(VAR_61, VAR_33, 0x00032f07);

 FUNC_20(VAR_61, VAR_52, 0x00000000);
 FUNC_20(VAR_61, VAR_51, 0x00000000);

 FUNC_20(VAR_61, VAR_45, 0);
 FUNC_20(VAR_61, VAR_46, 0);


 FUNC_20(VAR_61, VAR_43, 0x00080000);

 FUNC_20(VAR_61, VAR_44,
  VAR_16);
 FUNC_20(VAR_61, VAR_54,
  VAR_26 |
  VAR_22 |
  VAR_23 |
  VAR_25 |
  VAR_21 |
  VAR_20 |
  VAR_24);
 FUNC_20(VAR_61, VAR_50, 0);
 FUNC_20(VAR_61, VAR_34,
  VAR_10 |
  VAR_11 |
  VAR_12);

 for (VAR_67 = 3; VAR_67 <= 5; VAR_67++)
  if ((VAR_59 << VAR_67) == VAR_62->gmem)
   break;
 FUNC_20(VAR_61, VAR_48, VAR_67);

 VAR_68 = FUNC_17(VAR_61);
 if (VAR_68)
  return VAR_68;
 VAR_65 = (uint32_t *)(VAR_62->fw[VAR_18]->data);
 VAR_66 = VAR_62->fw[VAR_18]->size / 4;
 FUNC_15("loading PM4 ucode version: %x", VAR_65[1]);

 FUNC_20(VAR_61, VAR_53,
   VAR_19);
 FUNC_20(VAR_61, VAR_57, 0);
 for (VAR_67 = 1; VAR_67 < VAR_66; VAR_67++)
  FUNC_20(VAR_61, VAR_56, VAR_65[VAR_67]);


 VAR_65 = (uint32_t *)(VAR_62->fw[VAR_17]->data);
 VAR_66 = VAR_62->fw[VAR_17]->size / 4;
 FUNC_15("loading PFP ucode version: %x", VAR_65[5]);

 FUNC_20(VAR_61, VAR_30, 0);
 for (VAR_67 = 1; VAR_67 < VAR_66; VAR_67++)
  FUNC_20(VAR_61, VAR_31, VAR_65[VAR_67]);

 FUNC_20(VAR_61, VAR_58, 0x000C0804);


 FUNC_20(VAR_61, VAR_55, 0);

 return FUNC_16(VAR_61) ? 0 : -VAR_29;
}
