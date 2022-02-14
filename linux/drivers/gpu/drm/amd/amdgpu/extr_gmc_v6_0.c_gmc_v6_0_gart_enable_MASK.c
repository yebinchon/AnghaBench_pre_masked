
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef unsigned long u32 ;
struct TYPE_6__ {int ready; int * bo; } ;
struct TYPE_5__ {int gart_start; int gart_end; int gart_size; } ;
struct TYPE_4__ {unsigned long fragment_size; int max_pfn; int block_size; } ;
struct amdgpu_device {int dummy_page_addr; TYPE_3__ gart; TYPE_2__ gmc; int dev; TYPE_1__ vm_manager; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ VAR_24 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,unsigned int,unsigned long long) ;
 int FUNC_5 (struct amdgpu_device*,int ,int ,int ) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
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

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_41)
{
 uint64_t VAR_42;
 int VAR_43, VAR_44;
 u32 VAR_45;

 if (VAR_41->gart.bo == ((void*)0)) {
  FUNC_3(VAR_41->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_1;
 }
 VAR_43 = FUNC_2(VAR_41);
 if (VAR_43)
  return VAR_43;

 VAR_42 = FUNC_1(VAR_41->gart.bo);


 FUNC_0(VAR_25,
        (0xA << 7) |
        VAR_4 |
        VAR_3 |
        VAR_5 |
        VAR_2 |
        (0UL << VAR_6));

 FUNC_0(VAR_38,
        VAR_20 |
        VAR_21 |
        VAR_23 |
        VAR_22 |
        (7UL << VAR_19) |
        (1UL << VAR_18));
 FUNC_0(VAR_39,
        VAR_13 |
        VAR_14);

 VAR_45 = VAR_41->vm_manager.fragment_size;
 FUNC_0(VAR_40,
        VAR_16 |
        (VAR_45 << VAR_15) |
        (VAR_45 << VAR_17));

 FUNC_0(VAR_30, VAR_41->gmc.gart_start >> 12);
 FUNC_0(VAR_29, VAR_41->gmc.gart_end >> 12);
 FUNC_0(VAR_28, VAR_42 >> 12);
 FUNC_0(VAR_31,
   (u32)(VAR_41->dummy_page_addr >> 12));
 FUNC_0(VAR_27, 0);
 FUNC_0(VAR_26,
        VAR_7 |
        (0UL << VAR_8) |
        VAR_9);

 FUNC_0(0x575, 0);
 FUNC_0(0x576, 0);
 FUNC_0(0x577, 0);



 FUNC_0(VAR_35, 0);
 FUNC_0(VAR_34, VAR_41->vm_manager.max_pfn - 1);




 for (VAR_44 = 1; VAR_44 < 16; VAR_44++) {
  if (VAR_44 < 8)
   FUNC_0(VAR_28 + VAR_44,
          VAR_42 >> 12);
  else
   FUNC_0(VAR_37 + VAR_44 - 8,
          VAR_42 >> 12);
 }


 FUNC_0(VAR_36,
        (u32)(VAR_41->dummy_page_addr >> 12));
 FUNC_0(VAR_33, 4);
 FUNC_0(VAR_32,
        VAR_10 |
        (1UL << VAR_12) |
        ((VAR_41->vm_manager.block_size - 9)
        << VAR_11));
 if (VAR_24 == VAR_0)
  FUNC_6(VAR_41, 0);
 else
  FUNC_6(VAR_41, 1);

 FUNC_5(VAR_41, 0, 0, 0);
 FUNC_4(VAR_41->dev, "PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_41->gmc.gart_size >> 20),
   (unsigned long long)VAR_42);
 VAR_41->gart.ready = 1;
 return 0;
}
