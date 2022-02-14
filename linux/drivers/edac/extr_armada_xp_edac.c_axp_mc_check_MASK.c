
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mem_ctl_info {int ctl_name; int pdev; struct axp_mc_drvdata* pvt_info; } ;
struct axp_mc_drvdata {char* msg; scalar_t__ base; } ;


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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (struct axp_mc_drvdata*,int,int,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct mem_ctl_info*,int,int,int,int,int,int,int,int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_24)
{
 struct axp_mc_drvdata *VAR_25 = VAR_24->pvt_info;
 uint32_t VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 uint32_t VAR_31, VAR_32, VAR_33, VAR_34;
 uint32_t VAR_35, VAR_36, VAR_37, VAR_38;
 uint8_t VAR_39, VAR_40;
 char *VAR_41 = VAR_25->msg;

 VAR_26 = FUNC_3(VAR_25->base + VAR_19);
 VAR_27 = FUNC_3(VAR_25->base + VAR_20);
 VAR_28 = FUNC_3(VAR_25->base + VAR_22);
 VAR_29 = FUNC_3(VAR_25->base + VAR_12);
 VAR_30 = FUNC_3(VAR_25->base + VAR_10);
 VAR_31 = FUNC_3(VAR_25->base + VAR_23);
 VAR_32 = FUNC_3(VAR_25->base + VAR_21);
 VAR_33 = FUNC_3(VAR_25->base + VAR_16);
 VAR_34 = FUNC_3(VAR_25->base + VAR_17);


 FUNC_5(~(VAR_15 | VAR_18),
        VAR_25->base + VAR_16);
 FUNC_5(~(VAR_15 | VAR_18),
        VAR_25->base + VAR_17);


 if (VAR_31)
  FUNC_5(0, VAR_25->base + VAR_23);
 if (VAR_32)
  FUNC_5(0, VAR_25->base + VAR_21);

 if (!VAR_31 && !VAR_32)
  return;

 if (!(VAR_30 & VAR_11)) {
  if (VAR_31)
   VAR_31--;
  else
   FUNC_1(VAR_24->pdev, "inconsistent SBE count detected");
 } else {
  if (VAR_32)
   VAR_32--;
  else
   FUNC_1(VAR_24->pdev, "inconsistent DBE count detected");
 }


 if (VAR_31)
  FUNC_2(VAR_0, VAR_24,
         VAR_31,
         0, 0, 0,
         -1, -1, -1,
         VAR_24->ctl_name,
         "details unavailable (multiple errors)");
 if (VAR_32)
  FUNC_2(VAR_1, VAR_24,
         VAR_31,
         0, 0, 0,
         -1, -1, -1,
         VAR_24->ctl_name,
         "details unavailable (multiple errors)");


 VAR_40 = (VAR_30 & VAR_8) >> VAR_9;
 VAR_37 = (VAR_30 & VAR_4) >> VAR_5;
 VAR_35 = (VAR_29 & VAR_13) >> VAR_14;
 VAR_36 = (VAR_30 & VAR_6) >> VAR_7;
 VAR_39 = (VAR_28 ^ VAR_29) & 0xff;
 VAR_38 = FUNC_0(VAR_25, VAR_40, VAR_37, VAR_35,
           VAR_36);
 VAR_41 += FUNC_4(VAR_41, "row=0x%04x ", VAR_35);
 VAR_41 += FUNC_4(VAR_41, "bank=0x%x ", VAR_37);
 VAR_41 += FUNC_4(VAR_41, "col=0x%04x ", VAR_36);
 VAR_41 += FUNC_4(VAR_41, "cs=%d", VAR_40);

 if (!(VAR_30 & VAR_11)) {
  FUNC_2(VAR_0, VAR_24,
         1,
         VAR_38 >> VAR_3,
         VAR_38 & ~VAR_2,
         VAR_39,
         VAR_40, -1, -1,
         VAR_24->ctl_name, VAR_25->msg);
 } else {
  FUNC_2(VAR_1, VAR_24,
         1,
         VAR_38 >> VAR_3,
         VAR_38 & ~VAR_2,
         VAR_39,
         VAR_40, -1, -1,
         VAR_24->ctl_name, VAR_25->msg);
 }
}
