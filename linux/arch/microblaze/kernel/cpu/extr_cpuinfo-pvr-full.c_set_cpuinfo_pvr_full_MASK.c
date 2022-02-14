
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct pvr_s {int dummy; } ;
struct device_node {int dummy; } ;
struct cpuinfo {void* use_instr; void* use_mult; void* use_fpu; int use_exc; int icache_line_length; int dcache_line_length; void* dcache_wb; int ver_code; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
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
 int FUNC_1 (struct pvr_s) ;
 void* FUNC_2 (struct pvr_s) ;
 int FUNC_3 (struct pvr_s) ;
 int FUNC_4 (struct pvr_s) ;
 int FUNC_5 (struct pvr_s) ;
 int FUNC_6 (struct pvr_s) ;
 int FUNC_7 (struct pvr_s) ;
 int FUNC_8 (struct pvr_s) ;
 int FUNC_9 (struct pvr_s) ;
 int FUNC_10 (struct pvr_s) ;
 int FUNC_11 (struct pvr_s) ;
 int FUNC_12 (struct pvr_s) ;
 int FUNC_13 (struct pvr_s) ;
 int FUNC_14 (struct pvr_s) ;
 int FUNC_15 (struct pvr_s) ;
 int FUNC_16 (struct pvr_s) ;
 int FUNC_17 (struct pvr_s) ;
 int FUNC_18 (struct pvr_s) ;
 int FUNC_19 (struct pvr_s) ;
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
 int FUNC_20 (char*) ;
 int VAR_38 ;
 int FUNC_21 (struct pvr_s*) ;
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
 int FUNC_22 (char*) ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;

void FUNC_23(struct cpuinfo *VAR_62, struct device_node *VAR_63)
{
 struct pvr_s VAR_64;
 u32 VAR_65;
 FUNC_21(&VAR_64);

 FUNC_0(VAR_61, VAR_30);
 if (!VAR_62->ver_code) {
  FUNC_22("ERROR: MB has broken PVR regs -> use DTS setting\n");
  return;
 }

 VAR_65 = FUNC_12(VAR_64) | FUNC_17(VAR_64) |
  FUNC_19(VAR_64) | FUNC_13(VAR_64);
 if (VAR_62->use_instr != VAR_65)
  FUNC_20("BARREL, MSR, PCMP or DIV");
 VAR_62->use_instr = VAR_65;

 VAR_65 = FUNC_16(VAR_64) | FUNC_18(VAR_64);
 if (VAR_62->use_mult != VAR_65)
  FUNC_20("HW_MUL");
 VAR_62->use_mult = VAR_65;

 VAR_65 = FUNC_14(VAR_64) | FUNC_15(VAR_64);
 if (VAR_62->use_fpu != VAR_65)
  FUNC_20("HW_FPU");
 VAR_62->use_fpu = VAR_65;

 VAR_62->use_exc = FUNC_10(VAR_64) |
   FUNC_11(VAR_64) |
   FUNC_8(VAR_64) |
   FUNC_9(VAR_64) |
   FUNC_4(VAR_64) |
   FUNC_3(VAR_64) |
   FUNC_5(VAR_64) |
   FUNC_6(VAR_64);

 FUNC_0(VAR_53, VAR_25);
 FUNC_0(VAR_54, VAR_26);

 FUNC_0(VAR_47, VAR_29);
 FUNC_0(VAR_48, VAR_20);
 FUNC_0(VAR_37, VAR_10);

 FUNC_0(VAR_58, VAR_28);
 FUNC_0(VAR_43, VAR_12);
 FUNC_0(VAR_44, VAR_13);
 VAR_62->icache_line_length = FUNC_7(VAR_64) << 2;
 FUNC_0(VAR_42, VAR_15);
 FUNC_0(VAR_40, VAR_14);
 FUNC_0(VAR_41, VAR_16);

 FUNC_0(VAR_55, VAR_27);
 FUNC_0(VAR_35, VAR_1);
 FUNC_0(VAR_36, VAR_2);
 VAR_62->dcache_line_length = FUNC_1(VAR_64) << 2;
 FUNC_0(VAR_34, VAR_4);
 FUNC_0(VAR_32, VAR_3);
 FUNC_0(VAR_33, VAR_5);

 VAR_65 = FUNC_2(VAR_64);
 if (VAR_62->dcache_wb != VAR_65)
  FUNC_20("DCACHE WB");
 VAR_62->dcache_wb = VAR_65;

 FUNC_0(VAR_57, VAR_8);
 FUNC_0(VAR_60, VAR_19);
 FUNC_0(VAR_56, VAR_7);
 FUNC_0(VAR_59, VAR_18);
 FUNC_0(VAR_49, VAR_11);

 FUNC_0(VAR_45, VAR_17);
 FUNC_0(VAR_46, VAR_9);

 FUNC_0(VAR_31, VAR_0);

 FUNC_0(VAR_39, VAR_6);
 FUNC_0(VAR_50, VAR_21);
 FUNC_0(VAR_51, VAR_22);
 FUNC_0(VAR_52, VAR_23);

 FUNC_0(VAR_38, VAR_24);
}
