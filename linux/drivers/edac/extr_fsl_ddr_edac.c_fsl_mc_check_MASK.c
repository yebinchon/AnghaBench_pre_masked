
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mem_ctl_info {int nr_csrows; int ctl_name; struct csrow_info** csrows; struct fsl_mc_pdata* pvt_info; } ;
struct fsl_mc_pdata {scalar_t__ mc_vbase; } ;
struct csrow_info {int first_page; int last_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,struct mem_ctl_info*,int,int,int,int,int,int ,int,int ,char*) ;
 int FUNC_3 (struct mem_ctl_info*,int ,char*,...) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int,int*,int*) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_15)
{
 struct fsl_mc_pdata *VAR_16 = VAR_15->pvt_info;
 struct csrow_info *VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u64 VAR_21;
 u32 VAR_22;
 int VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 int VAR_26;
 int VAR_27;

 VAR_19 = FUNC_0(VAR_16->mc_vbase + VAR_9);
 if (!VAR_19)
  return;

 FUNC_3(VAR_15, VAR_12, "Err Detect Register: %#8.8x\n",
        VAR_19);


 if (!(VAR_19 & (VAR_1 | VAR_0))) {
  FUNC_1(VAR_16->mc_vbase + VAR_9, VAR_19);
  return;
 }

 VAR_20 = FUNC_0(VAR_16->mc_vbase + VAR_6);


 VAR_18 = (FUNC_0(VAR_16->mc_vbase + VAR_8) &
       VAR_2) ? 32 : 64;
 if (VAR_18 == 64)
  VAR_20 &= 0xff;
 else
  VAR_20 &= 0xffff;

 VAR_21 = FUNC_4(
  FUNC_0(VAR_16->mc_vbase + VAR_7),
  FUNC_0(VAR_16->mc_vbase + VAR_3));
 VAR_22 = VAR_21 >> VAR_14;

 for (VAR_23 = 0; VAR_23 < VAR_15->nr_csrows; VAR_23++) {
  VAR_17 = VAR_15->csrows[VAR_23];
  if ((VAR_22 >= VAR_17->first_page) && (VAR_22 <= VAR_17->last_page))
   break;
 }

 VAR_24 = FUNC_0(VAR_16->mc_vbase + VAR_4);
 VAR_25 = FUNC_0(VAR_16->mc_vbase + VAR_5);





 if ((VAR_19 & VAR_1) && (VAR_18 == 64)) {
  FUNC_5(VAR_24, VAR_25, VAR_20,
    &VAR_26, &VAR_27);

  if (VAR_26 != -1)
   FUNC_3(VAR_15, VAR_12,
    "Faulty Data bit: %d\n", VAR_26);
  if (VAR_27 != -1)
   FUNC_3(VAR_15, VAR_12,
    "Faulty ECC bit: %d\n", VAR_27);

  FUNC_3(VAR_15, VAR_12,
   "Expected Data / ECC:\t%#8.8x_%08x / %#2.2x\n",
   VAR_24 ^ (1 << (VAR_26 - 32)),
   VAR_25 ^ (1 << VAR_26),
   VAR_20 ^ (1 << VAR_27));
 }

 FUNC_3(VAR_15, VAR_12,
   "Captured Data / ECC:\t%#8.8x_%08x / %#2.2x\n",
   VAR_24, VAR_25, VAR_20);
 FUNC_3(VAR_15, VAR_12, "Err addr: %#8.8llx\n", VAR_21);
 FUNC_3(VAR_15, VAR_12, "PFN: %#8.8x\n", VAR_22);


 if (VAR_23 == VAR_15->nr_csrows)
  FUNC_3(VAR_15, VAR_12, "PFN out of range!\n");

 if (VAR_19 & VAR_1)
  FUNC_2(VAR_10, VAR_15, 1,
         VAR_22, VAR_21 & ~VAR_13, VAR_20,
         VAR_23, 0, -1,
         VAR_15->ctl_name, "");

 if (VAR_19 & VAR_0)
  FUNC_2(VAR_11, VAR_15, 1,
         VAR_22, VAR_21 & ~VAR_13, VAR_20,
         VAR_23, 0, -1,
         VAR_15->ctl_name, "");

 FUNC_1(VAR_16->mc_vbase + VAR_9, VAR_19);
}
