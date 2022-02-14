
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int table_addr; int ready; int * robj; } ;
struct TYPE_7__ {int gtt_start; int gtt_end; int gtt_size; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int max_pfn; int* saved_table_addr; } ;
struct radeon_device {scalar_t__ family; TYPE_4__ gart; TYPE_3__ mc; int srbm_mutex; TYPE_2__ dummy_page; TYPE_1__ vm_manager; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned int,unsigned long long) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
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
 int FUNC_4 (int) ;
 int VAR_17 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (int) ;
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
 int FUNC_8 (int,int) ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int ,int ,int ,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct radeon_device*) ;
 scalar_t__ VAR_54 ;

__attribute__((used)) static int FUNC_15(struct radeon_device *VAR_55)
{
 int VAR_56, VAR_57;

 if (VAR_55->gart.robj == ((void*)0)) {
  FUNC_11(VAR_55->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_5;
 }
 VAR_56 = FUNC_14(VAR_55);
 if (VAR_56)
  return VAR_56;

 FUNC_8(VAR_17,
        (0xA << 7) |
        VAR_9 |
        VAR_8 |
        VAR_33 |
        VAR_6 |
        VAR_34);

 FUNC_8(VAR_49, VAR_10 |
        VAR_11 |
        VAR_13 |
        VAR_12 |
        FUNC_3(7) |
        FUNC_1(1));
 FUNC_8(VAR_50, VAR_14 | VAR_15);
 FUNC_8(VAR_51, VAR_16 |
        FUNC_0(4) |
        FUNC_4(4));

 FUNC_8(VAR_41, VAR_55->mc.gtt_start >> 12);
 FUNC_8(VAR_40, VAR_55->mc.gtt_end >> 12);
 FUNC_8(VAR_39, VAR_55->gart.table_addr >> 12);
 FUNC_8(VAR_42,
   (u32)(VAR_55->dummy_page.addr >> 12));
 FUNC_8(VAR_38, 0);
 FUNC_8(VAR_37, (VAR_7 | FUNC_6(0) |
      VAR_20));

 FUNC_8(0x15D4, 0);
 FUNC_8(0x15D8, 0);
 FUNC_8(0x15DC, 0);



 FUNC_8(VAR_46, 0);
 FUNC_8(VAR_45, VAR_55->vm_manager.max_pfn - 1);
 for (VAR_57 = 1; VAR_57 < 16; VAR_57++) {
  if (VAR_57 < 8)
   FUNC_8(VAR_39 + (VAR_57 << 2),
          VAR_55->vm_manager.saved_table_addr[VAR_57]);
  else
   FUNC_8(VAR_48 + ((VAR_57 - 8) << 2),
          VAR_55->vm_manager.saved_table_addr[VAR_57]);
 }


 FUNC_8(VAR_47,
        (u32)(VAR_55->dummy_page.addr >> 12));
 FUNC_8(VAR_44, 4);
 FUNC_8(VAR_43, VAR_7 | FUNC_6(1) |
    FUNC_5(VAR_54 - 9) |
    VAR_21 |
    VAR_20 |
    VAR_4 |
    VAR_3 |
    VAR_19 |
    VAR_18 |
    VAR_36 |
    VAR_35 |
    VAR_23 |
    VAR_22 |
    VAR_53 |
    VAR_52);

 if (VAR_55->family == VAR_1) {
  u32 VAR_58 = FUNC_7(VAR_2);
  VAR_58 &= ~VAR_0;
  FUNC_8(VAR_2, VAR_58);
 }



 FUNC_12(&VAR_55->srbm_mutex);
 for (VAR_57 = 0; VAR_57 < 16; VAR_57++) {
  FUNC_10(VAR_55, 0, 0, 0, VAR_57);

  FUNC_8(VAR_31, VAR_32);
  FUNC_8(VAR_28, 1);
  FUNC_8(VAR_29, 0);
  FUNC_8(VAR_30, 0);

  FUNC_8(VAR_25 + VAR_26, 0);
  FUNC_8(VAR_24 + VAR_26, 0);
  FUNC_8(VAR_25 + VAR_27, 0);
  FUNC_8(VAR_24 + VAR_27, 0);

 }
 FUNC_10(VAR_55, 0, 0, 0, 0);
 FUNC_13(&VAR_55->srbm_mutex);

 FUNC_9(VAR_55);
 FUNC_2("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_55->mc.gtt_size >> 20),
   (unsigned long long)VAR_55->gart.table_addr);
 VAR_55->gart.ready = 1;
 return 0;
}
