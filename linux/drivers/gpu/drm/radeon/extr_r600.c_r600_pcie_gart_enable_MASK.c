
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int table_addr; int ready; int * robj; } ;
struct TYPE_5__ {int gtt_start; int gtt_end; int gtt_size; } ;
struct TYPE_4__ {int addr; } ;
struct radeon_device {TYPE_3__ gart; TYPE_2__ mc; TYPE_1__ dummy_page; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned int,unsigned long long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_6 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_36)
{
 u32 VAR_37;
 int VAR_38, VAR_39;

 if (VAR_36->gart.robj == ((void*)0)) {
  FUNC_8(VAR_36->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_0;
 }
 VAR_38 = FUNC_10(VAR_36);
 if (VAR_38)
  return VAR_38;


 FUNC_7(VAR_33, VAR_5 | VAR_6 |
    VAR_7 |
    FUNC_5(7));
 FUNC_7(VAR_34, 0);
 FUNC_7(VAR_35, FUNC_0(0) | FUNC_1(1));

 VAR_37 = VAR_4 | VAR_2 |
  VAR_27 |
  FUNC_4(5) | FUNC_3(5) |
  VAR_9;
 FUNC_7(VAR_14, VAR_37);
 FUNC_7(VAR_20, VAR_37);
 FUNC_7(VAR_11, VAR_37 | VAR_3);
 FUNC_7(VAR_17, VAR_37);
 FUNC_7(VAR_22, VAR_37);
 FUNC_7(VAR_24, VAR_37);
 FUNC_7(VAR_23, VAR_37);
 FUNC_7(VAR_25, VAR_37);
 FUNC_7(VAR_10, VAR_37);
 FUNC_7(VAR_16, VAR_37);
 FUNC_7(VAR_12, VAR_37);
 FUNC_7(VAR_18, VAR_37);
 FUNC_7(VAR_15, VAR_37);
 FUNC_7(VAR_21, VAR_37);
 FUNC_7(VAR_13, VAR_37 | VAR_8);
 FUNC_7(VAR_19, VAR_37 | VAR_8);
 FUNC_7(VAR_31, VAR_36->mc.gtt_start >> 12);
 FUNC_7(VAR_30, VAR_36->mc.gtt_end >> 12);
 FUNC_7(VAR_29, VAR_36->gart.table_addr >> 12);
 FUNC_7(VAR_28, VAR_1 | FUNC_6(0) |
    VAR_26);
 FUNC_7(VAR_32,
   (u32)(VAR_36->dummy_page.addr >> 12));
 for (VAR_39 = 1; VAR_39 < 7; VAR_39++)
  FUNC_7(VAR_28 + (VAR_39 * 4), 0);

 FUNC_9(VAR_36);
 FUNC_2("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_36->mc.gtt_size >> 20),
   (unsigned long long)VAR_36->gart.table_addr);
 VAR_36->gart.ready = 1;
 return 0;
}
