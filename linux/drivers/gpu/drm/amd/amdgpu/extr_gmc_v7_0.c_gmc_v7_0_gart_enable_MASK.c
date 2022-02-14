
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct TYPE_6__ {int ready; int * bo; } ;
struct TYPE_5__ {int gart_start; int gart_end; int gart_size; } ;
struct TYPE_4__ {int fragment_size; int max_pfn; int block_size; } ;
struct amdgpu_device {int dummy_page_addr; scalar_t__ asic_type; TYPE_3__ gart; TYPE_2__ gmc; TYPE_1__ vm_manager; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int,unsigned long long) ;
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
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct amdgpu_device*) ;
 scalar_t__ VAR_31 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct amdgpu_device*,int ,int ,int ) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
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

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_49)
{
 uint64_t VAR_50;
 int VAR_51, VAR_52;
 u32 VAR_53, VAR_54;

 if (VAR_49->gart.bo == ((void*)0)) {
  FUNC_6(VAR_49->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_6;
 }
 VAR_51 = FUNC_5(VAR_49);
 if (VAR_51)
  return VAR_51;

 VAR_50 = FUNC_4(VAR_49->gart.bo);


 VAR_53 = FUNC_2(VAR_33);
 VAR_53 = FUNC_1(VAR_53, VAR_20, VAR_11, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_20, VAR_10, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_20, VAR_24, 3);
 VAR_53 = FUNC_1(VAR_53, VAR_20, VAR_7, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_20, VAR_25, 0);
 FUNC_3(VAR_33, VAR_53);

 VAR_53 = FUNC_2(VAR_46);
 VAR_53 = FUNC_1(VAR_53, VAR_28, VAR_12, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_28, VAR_13, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_28, VAR_15, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_28, VAR_14, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_28, VAR_5, 7);
 VAR_53 = FUNC_1(VAR_53, VAR_28, VAR_4, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_28, VAR_9, 1);
 FUNC_3(VAR_46, VAR_53);
 VAR_53 = FUNC_1(0, VAR_29, VAR_16, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_29, VAR_17, 1);
 FUNC_3(VAR_47, VAR_53);

 VAR_54 = VAR_49->vm_manager.fragment_size;
 VAR_53 = FUNC_2(VAR_48);
 VAR_53 = FUNC_1(VAR_53, VAR_30, VAR_18, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_30, VAR_1, VAR_54);
 VAR_53 = FUNC_1(VAR_53, VAR_30, VAR_19, VAR_54);
 FUNC_3(VAR_48, VAR_53);

 FUNC_3(VAR_38, VAR_49->gmc.gart_start >> 12);
 FUNC_3(VAR_37, VAR_49->gmc.gart_end >> 12);
 FUNC_3(VAR_36, VAR_50 >> 12);
 FUNC_3(VAR_39,
   (u32)(VAR_49->dummy_page_addr >> 12));
 FUNC_3(VAR_35, 0);
 VAR_53 = FUNC_2(VAR_34);
 VAR_53 = FUNC_1(VAR_53, VAR_26, VAR_8, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_26, VAR_22, 0);
 VAR_53 = FUNC_1(VAR_53, VAR_26, VAR_23, 1);
 FUNC_3(VAR_34, VAR_53);

 FUNC_3(0x575, 0);
 FUNC_3(0x576, 0);
 FUNC_3(0x577, 0);






 FUNC_3(VAR_43, 0);
 FUNC_3(VAR_42, VAR_49->vm_manager.max_pfn - 1);
 for (VAR_52 = 1; VAR_52 < 16; VAR_52++) {
  if (VAR_52 < 8)
   FUNC_3(VAR_36 + VAR_52,
          VAR_50 >> 12);
  else
   FUNC_3(VAR_45 + VAR_52 - 8,
          VAR_50 >> 12);
 }


 FUNC_3(VAR_44,
        (u32)(VAR_49->dummy_page_addr >> 12));
 FUNC_3(VAR_41, 4);
 VAR_53 = FUNC_2(VAR_40);
 VAR_53 = FUNC_1(VAR_53, VAR_27, VAR_8, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_27, VAR_22, 1);
 VAR_53 = FUNC_1(VAR_53, VAR_27, VAR_21,
       VAR_49->vm_manager.block_size - 9);
 FUNC_3(VAR_40, VAR_53);
 if (VAR_31 == VAR_0)
  FUNC_8(VAR_49, 0);
 else
  FUNC_8(VAR_49, 1);

 if (VAR_49->asic_type == VAR_3) {
  VAR_53 = FUNC_2(VAR_32);
  VAR_53 &= ~VAR_2;
  FUNC_3(VAR_32, VAR_53);
 }

 FUNC_7(VAR_49, 0, 0, 0);
 FUNC_0("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_49->gmc.gart_size >> 20),
   (unsigned long long)VAR_50);
 VAR_49->gart.ready = 1;
 return 0;
}
