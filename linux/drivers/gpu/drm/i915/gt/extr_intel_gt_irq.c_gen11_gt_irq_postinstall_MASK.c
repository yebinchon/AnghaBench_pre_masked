
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {int pm_ier; int pm_imr; struct intel_uncore* uncore; } ;


 int FUNC_0 (int const) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct intel_uncore*,int ,int const) ;

void FUNC_2(struct intel_gt *VAR_13)
{
 const u32 VAR_14 = VAR_12 | VAR_11;
 struct intel_uncore *VAR_15 = VAR_13->uncore;
 const u32 VAR_16 = VAR_14 << 16 | VAR_14;
 const u32 VAR_17 = VAR_14 << 16;

 FUNC_0(VAR_14 & 0xffff0000);


 FUNC_1(VAR_15, VAR_6, VAR_16);
 FUNC_1(VAR_15, VAR_9, VAR_16);


 FUNC_1(VAR_15, VAR_5, ~VAR_17);
 FUNC_1(VAR_15, VAR_0, ~VAR_17);
 FUNC_1(VAR_15, VAR_7, ~VAR_16);
 FUNC_1(VAR_15, VAR_8, ~VAR_16);
 FUNC_1(VAR_15, VAR_10, ~VAR_16);





 VAR_13->pm_ier = 0x0;
 VAR_13->pm_imr = ~VAR_13->pm_ier;
 FUNC_1(VAR_15, VAR_1, 0);
 FUNC_1(VAR_15, VAR_2, ~0);


 FUNC_1(VAR_15, VAR_3, 0);
 FUNC_1(VAR_15, VAR_4, ~0);
}
