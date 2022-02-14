
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {int ctl_name; struct cpc925_mc_pdata* pvt_info; } ;
struct cpc925_mc_pdata {scalar_t__ vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mem_ctl_info*,int) ;
 int FUNC_2 (struct mem_ctl_info*,int,unsigned long*,unsigned long*,int*) ;
 int FUNC_3 (struct mem_ctl_info*,int ,char*,...) ;
 int FUNC_4 (int ,struct mem_ctl_info*,int,unsigned long,unsigned long,int,int,int,int,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_18)
{
 struct cpc925_mc_pdata *VAR_19 = VAR_18->pvt_info;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u16 VAR_23;
 unsigned long VAR_24 = 0, VAR_25 = 0;
 int VAR_26 = 0, VAR_27 = 0;


 VAR_20 = FUNC_0(VAR_19->vbase + VAR_7);
 if ((VAR_20 & VAR_1) == 0)
  return;

 VAR_22 = FUNC_0(VAR_19->vbase + VAR_12);
 VAR_23 = VAR_22 | (VAR_5 | VAR_6);

 VAR_21 = FUNC_0(VAR_19->vbase + VAR_11);


 FUNC_2(VAR_18, VAR_21, &VAR_24, &VAR_25, &VAR_26);

 if (VAR_20 & VAR_0) {
  FUNC_3(VAR_18, VAR_4, "DRAM CECC Fault\n");
  VAR_27 = FUNC_1(VAR_18, VAR_23);
  FUNC_4(VAR_2, VAR_18, 1,
         VAR_24, VAR_25, VAR_23,
         VAR_26, VAR_27, -1,
         VAR_18->ctl_name, "");
 }

 if (VAR_20 & VAR_17) {
  FUNC_3(VAR_18, VAR_4, "DRAM UECC Fault\n");
  FUNC_4(VAR_3, VAR_18, 1,
         VAR_24, VAR_25, 0,
         VAR_26, -1, -1,
         VAR_18->ctl_name, "");
 }

 FUNC_3(VAR_18, VAR_4, "Dump registers:\n");
 FUNC_3(VAR_18, VAR_4, "APIMASK		0x%08x\n",
  FUNC_0(VAR_19->vbase + VAR_8));
 FUNC_3(VAR_18, VAR_4, "APIEXCP		0x%08x\n",
  VAR_20);
 FUNC_3(VAR_18, VAR_4, "Mem Scrub Ctrl	0x%08x\n",
  FUNC_0(VAR_19->vbase + VAR_13));
 FUNC_3(VAR_18, VAR_4, "Mem Scrub Rge Start	0x%08x\n",
  FUNC_0(VAR_19->vbase + VAR_16));
 FUNC_3(VAR_18, VAR_4, "Mem Scrub Rge End	0x%08x\n",
  FUNC_0(VAR_19->vbase + VAR_15));
 FUNC_3(VAR_18, VAR_4, "Mem Scrub Pattern	0x%08x\n",
  FUNC_0(VAR_19->vbase + VAR_14));
 FUNC_3(VAR_18, VAR_4, "Mem Chk Ctrl		0x%08x\n",
  FUNC_0(VAR_19->vbase + VAR_9));
 FUNC_3(VAR_18, VAR_4, "Mem Chk Rge End	0x%08x\n",
  FUNC_0(VAR_19->vbase + VAR_10));
 FUNC_3(VAR_18, VAR_4, "Mem Err Address	0x%08x\n",
  VAR_22);
 FUNC_3(VAR_18, VAR_4, "Mem Err Syndrome	0x%08x\n",
  VAR_23);
}
