
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct TYPE_4__ {int ready; int * bo; } ;
struct TYPE_5__ {int gart_start; int gart_end; int gart_size; } ;
struct TYPE_6__ {int fragment_size; int max_pfn; int block_size; } ;
struct amdgpu_device {int dummy_page_addr; TYPE_1__ gart; TYPE_2__ gmc; TYPE_3__ vm_manager; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int,unsigned long long) ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
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
 int FUNC_3 (scalar_t__,int) ;
 int VAR_47 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct amdgpu_device*) ;
 scalar_t__ VAR_48 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct amdgpu_device*,int ,int ,int ) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 scalar_t__ VAR_66 ;
 scalar_t__ VAR_67 ;
 scalar_t__ VAR_68 ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_69)
{
 uint64_t VAR_70;
 int VAR_71, VAR_72;
 u32 VAR_73, VAR_74;

 if (VAR_69->gart.bo == ((void*)0)) {
  FUNC_6(VAR_69->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_5;
 }
 VAR_71 = FUNC_5(VAR_69);
 if (VAR_71)
  return VAR_71;

 VAR_70 = FUNC_4(VAR_69->gart.bo);


 VAR_73 = FUNC_2(VAR_49);
 VAR_73 = FUNC_1(VAR_73, VAR_20, VAR_10, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_20, VAR_9, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_20, VAR_26, 3);
 VAR_73 = FUNC_1(VAR_73, VAR_20, VAR_6, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_20, VAR_27, 0);
 FUNC_3(VAR_49, VAR_73);

 VAR_73 = FUNC_2(VAR_62);
 VAR_73 = FUNC_1(VAR_73, VAR_43, VAR_11, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_43, VAR_12, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_43, VAR_14, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_43, VAR_13, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_43, VAR_4, 7);
 VAR_73 = FUNC_1(VAR_73, VAR_43, VAR_2, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_43, VAR_8, 1);
 FUNC_3(VAR_62, VAR_73);
 VAR_73 = FUNC_2(VAR_63);
 VAR_73 = FUNC_1(VAR_73, VAR_44, VAR_16, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_44, VAR_17, 1);
 FUNC_3(VAR_63, VAR_73);

 VAR_74 = VAR_69->vm_manager.fragment_size;
 VAR_73 = FUNC_2(VAR_64);
 VAR_73 = FUNC_1(VAR_73, VAR_45, VAR_18, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_45, VAR_1, VAR_74);
 VAR_73 = FUNC_1(VAR_73, VAR_45, VAR_19, VAR_74);
 FUNC_3(VAR_64, VAR_73);

 VAR_73 = FUNC_2(VAR_65);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_29, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_30, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_31, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_32, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_33, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_34, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_35, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_36, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_37, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_38, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_39, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_46, VAR_40, 0);
 FUNC_3(VAR_65, VAR_73);

 FUNC_3(VAR_54, VAR_69->gmc.gart_start >> 12);
 FUNC_3(VAR_53, VAR_69->gmc.gart_end >> 12);
 FUNC_3(VAR_52, VAR_70 >> 12);
 FUNC_3(VAR_55,
   (u32)(VAR_69->dummy_page_addr >> 12));
 FUNC_3(VAR_51, 0);
 VAR_73 = FUNC_2(VAR_50);
 VAR_73 = FUNC_1(VAR_73, VAR_41, VAR_7, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_41, VAR_22, 0);
 VAR_73 = FUNC_1(VAR_73, VAR_41, VAR_24, 1);
 FUNC_3(VAR_50, VAR_73);

 FUNC_3(VAR_67, 0);
 FUNC_3(VAR_66, 0);
 FUNC_3(VAR_68, 0);






 FUNC_3(VAR_59, 0);
 FUNC_3(VAR_58, VAR_69->vm_manager.max_pfn - 1);
 for (VAR_72 = 1; VAR_72 < 16; VAR_72++) {
  if (VAR_72 < 8)
   FUNC_3(VAR_52 + VAR_72,
          VAR_70 >> 12);
  else
   FUNC_3(VAR_61 + VAR_72 - 8,
          VAR_70 >> 12);
 }


 FUNC_3(VAR_60,
        (u32)(VAR_69->dummy_page_addr >> 12));
 FUNC_3(VAR_57, 4);
 VAR_73 = FUNC_2(VAR_56);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_7, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_22, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_24, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_3, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_23, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_28, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_25, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_47, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_15, 1);
 VAR_73 = FUNC_1(VAR_73, VAR_42, VAR_21,
       VAR_69->vm_manager.block_size - 9);
 FUNC_3(VAR_56, VAR_73);
 if (VAR_48 == VAR_0)
  FUNC_8(VAR_69, 0);
 else
  FUNC_8(VAR_69, 1);

 FUNC_7(VAR_69, 0, 0, 0);
 FUNC_0("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_69->gmc.gart_size >> 20),
   (unsigned long long)VAR_70);
 VAR_69->gart.ready = 1;
 return 0;
}
