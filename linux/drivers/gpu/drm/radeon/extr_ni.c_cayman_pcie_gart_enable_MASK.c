
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
struct radeon_device {TYPE_4__ gart; TYPE_3__ mc; TYPE_2__ dummy_page; TYPE_1__ vm_manager; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned int,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
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
 int FUNC_4 (int) ;
 int VAR_14 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
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
 int FUNC_7 (int,int) ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct radeon_device*) ;
 scalar_t__ VAR_39 ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_40)
{
 int VAR_41, VAR_42;

 if (VAR_40->gart.robj == ((void*)0)) {
  FUNC_9(VAR_40->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_2;
 }
 VAR_42 = FUNC_10(VAR_40);
 if (VAR_42)
  return VAR_42;

 FUNC_7(VAR_14,
        (0xA << 7) |
        VAR_6 |
        VAR_5 |
        VAR_21 |
        VAR_3 |
        VAR_22);

 FUNC_7(VAR_34, VAR_7 |
        VAR_8 |
        VAR_10 |
        VAR_9 |
        FUNC_3(7) |
        FUNC_1(1));
 FUNC_7(VAR_35, VAR_11 | VAR_12);
 FUNC_7(VAR_36, VAR_13 |
        FUNC_0(6) |
        FUNC_4(6));

 FUNC_7(VAR_29, VAR_40->mc.gtt_start >> 12);
 FUNC_7(VAR_28, VAR_40->mc.gtt_end >> 12);
 FUNC_7(VAR_27, VAR_40->gart.table_addr >> 12);
 FUNC_7(VAR_30,
   (u32)(VAR_40->dummy_page.addr >> 12));
 FUNC_7(VAR_26, 0);
 FUNC_7(VAR_25, VAR_4 | FUNC_6(0) |
    VAR_17);

 FUNC_7(0x15D4, 0);
 FUNC_7(0x15D8, 0);
 FUNC_7(0x15DC, 0);






 for (VAR_41 = 1; VAR_41 < 8; VAR_41++) {
  FUNC_7(VAR_29 + (VAR_41 << 2), 0);
  FUNC_7(VAR_28 + (VAR_41 << 2),
   VAR_40->vm_manager.max_pfn - 1);
  FUNC_7(VAR_27 + (VAR_41 << 2),
         VAR_40->vm_manager.saved_table_addr[VAR_41]);
 }


 FUNC_7(VAR_33,
        (u32)(VAR_40->dummy_page.addr >> 12));
 FUNC_7(VAR_32, 4);
 FUNC_7(VAR_31, VAR_4 | FUNC_6(1) |
    FUNC_5(VAR_39 - 9) |
    VAR_18 |
    VAR_17 |
    VAR_1 |
    VAR_0 |
    VAR_16 |
    VAR_15 |
    VAR_24 |
    VAR_23 |
    VAR_20 |
    VAR_19 |
    VAR_38 |
    VAR_37);

 FUNC_8(VAR_40);
 FUNC_2("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_40->mc.gtt_size >> 20),
   (unsigned long long)VAR_40->gart.table_addr);
 VAR_40->gart.ready = 1;
 return 0;
}
