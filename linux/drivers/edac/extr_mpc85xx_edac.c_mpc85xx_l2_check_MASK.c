
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpc85xx_l2_pdata {scalar_t__ l2_vbase; } ;
struct edac_device_ctl_info {int ctl_name; struct mpc85xx_l2_pdata* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_1 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(struct edac_device_ctl_info *VAR_9)
{
 struct mpc85xx_l2_pdata *VAR_10 = VAR_9->pvt_info;
 u32 VAR_11;

 VAR_11 = FUNC_2(VAR_10->l2_vbase + VAR_8);

 if (!(VAR_11 & VAR_1))
  return;

 FUNC_4("ECC Error in CPU L2 cache\n");
 FUNC_4("L2 Error Detect Register: 0x%08x\n", VAR_11);
 FUNC_4("L2 Error Capture Data High Register: 0x%08x\n",
        FUNC_2(VAR_10->l2_vbase + VAR_3));
 FUNC_4("L2 Error Capture Data Lo Register: 0x%08x\n",
        FUNC_2(VAR_10->l2_vbase + VAR_4));
 FUNC_4("L2 Error Syndrome Register: 0x%08x\n",
        FUNC_2(VAR_10->l2_vbase + VAR_5));
 FUNC_4("L2 Error Attributes Capture Register: 0x%08x\n",
        FUNC_2(VAR_10->l2_vbase + VAR_7));
 FUNC_4("L2 Error Address Capture Register: 0x%08x\n",
        FUNC_2(VAR_10->l2_vbase + VAR_6));


 FUNC_3(VAR_10->l2_vbase + VAR_8, VAR_11);

 if (VAR_11 & VAR_0)
  FUNC_0(VAR_9, 0, 0, VAR_9->ctl_name);

 if (VAR_11 & VAR_2)
  FUNC_1(VAR_9, 0, 0, VAR_9->ctl_name);
}
