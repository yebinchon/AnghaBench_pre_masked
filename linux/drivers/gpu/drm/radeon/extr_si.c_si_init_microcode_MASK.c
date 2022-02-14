
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_device {int family; int new_fw; TYPE_2__* smc_fw; TYPE_2__* mc_fw; TYPE_2__* rlc_fw; TYPE_2__* ce_fw; TYPE_2__* me_fw; TYPE_2__* pfp_fw; int dev; TYPE_1__* pdev; } ;
typedef int fw_name ;
struct TYPE_6__ {size_t size; } ;
struct TYPE_5__ {int revision; int device; } ;


 size_t FUNC_0 (int ,int) ;
 int FUNC_1 () ;





 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__**,char*,int ) ;
 int FUNC_9 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_10(struct radeon_device *VAR_16)
{
 const char *VAR_17;
 const char *VAR_18;
 size_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 size_t VAR_24, VAR_25;
 char VAR_26[30];
 int VAR_27;
 int VAR_28 = 0;
 bool VAR_29 = 0;
 bool VAR_30 = 0;
 bool VAR_31 = 0;

 FUNC_2("\n");

 switch (VAR_16->family) {
 case 129:
  VAR_17 = "TAHITI";
  VAR_18 = "tahiti";
  VAR_19 = VAR_9 * 4;
  VAR_20 = VAR_10 * 4;
  VAR_21 = VAR_7 * 4;
  VAR_22 = VAR_11 * 4;
  VAR_23 = VAR_8 * 4;
  VAR_25 = VAR_12 * 4;
  VAR_24 = FUNC_0(VAR_13, 4);
  break;
 case 130:
  VAR_17 = "PITCAIRN";
  if ((VAR_16->pdev->revision == 0x81) &&
      ((VAR_16->pdev->device == 0x6810) ||
       (VAR_16->pdev->device == 0x6811)))
   VAR_29 = 1;
  VAR_18 = "pitcairn";
  VAR_19 = VAR_9 * 4;
  VAR_20 = VAR_10 * 4;
  VAR_21 = VAR_7 * 4;
  VAR_22 = VAR_11 * 4;
  VAR_23 = VAR_8 * 4;
  VAR_25 = VAR_5 * 4;
  VAR_24 = FUNC_0(VAR_6, 4);
  break;
 case 128:
  VAR_17 = "VERDE";
  if (((VAR_16->pdev->device == 0x6820) &&
       ((VAR_16->pdev->revision == 0x81) ||
        (VAR_16->pdev->revision == 0x83))) ||
      ((VAR_16->pdev->device == 0x6821) &&
       ((VAR_16->pdev->revision == 0x83) ||
        (VAR_16->pdev->revision == 0x87))) ||
      ((VAR_16->pdev->revision == 0x87) &&
       ((VAR_16->pdev->device == 0x6823) ||
        (VAR_16->pdev->device == 0x682b))))
   VAR_29 = 1;
  VAR_18 = "verde";
  VAR_19 = VAR_9 * 4;
  VAR_20 = VAR_10 * 4;
  VAR_21 = VAR_7 * 4;
  VAR_22 = VAR_11 * 4;
  VAR_23 = VAR_8 * 4;
  VAR_25 = VAR_14 * 4;
  VAR_24 = FUNC_0(VAR_15, 4);
  break;
 case 131:
  VAR_17 = "OLAND";
  if (((VAR_16->pdev->revision == 0x81) &&
       ((VAR_16->pdev->device == 0x6600) ||
        (VAR_16->pdev->device == 0x6604) ||
        (VAR_16->pdev->device == 0x6605) ||
        (VAR_16->pdev->device == 0x6610))) ||
      ((VAR_16->pdev->revision == 0x83) &&
       (VAR_16->pdev->device == 0x6610)))
   VAR_29 = 1;
  VAR_18 = "oland";
  VAR_19 = VAR_9 * 4;
  VAR_20 = VAR_10 * 4;
  VAR_21 = VAR_7 * 4;
  VAR_22 = VAR_11 * 4;
  VAR_23 = VAR_25 = VAR_3 * 4;
  VAR_24 = FUNC_0(VAR_4, 4);
  break;
 case 132:
  VAR_17 = "HAINAN";
  if (((VAR_16->pdev->revision == 0x81) &&
       (VAR_16->pdev->device == 0x6660)) ||
      ((VAR_16->pdev->revision == 0x83) &&
       ((VAR_16->pdev->device == 0x6660) ||
        (VAR_16->pdev->device == 0x6663) ||
        (VAR_16->pdev->device == 0x6665) ||
        (VAR_16->pdev->device == 0x6667))))
   VAR_29 = 1;
  else if ((VAR_16->pdev->revision == 0xc3) &&
    (VAR_16->pdev->device == 0x6665))
   VAR_31 = 1;
  VAR_18 = "hainan";
  VAR_19 = VAR_9 * 4;
  VAR_20 = VAR_10 * 4;
  VAR_21 = VAR_7 * 4;
  VAR_22 = VAR_11 * 4;
  VAR_23 = VAR_25 = VAR_3 * 4;
  VAR_24 = FUNC_0(VAR_1, 4);
  break;
 default: FUNC_1();
 }


 if (((FUNC_4(VAR_2) & 0xff000000) >> 24) == 0x58)
  VAR_30 = 1;

 FUNC_3("Loading %s Microcode\n", VAR_18);

 FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_pfp.bin", VAR_18);
 VAR_27 = FUNC_8(&VAR_16->pfp_fw, VAR_26, VAR_16->dev);
 if (VAR_27) {
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_pfp.bin", VAR_17);
  VAR_27 = FUNC_8(&VAR_16->pfp_fw, VAR_26, VAR_16->dev);
  if (VAR_27)
   goto out;
  if (VAR_16->pfp_fw->size != VAR_19) {
   FUNC_5("si_cp: Bogus length %zu in firmware \"%s\"\n",
          VAR_16->pfp_fw->size, VAR_26);
   VAR_27 = -VAR_0;
   goto out;
  }
 } else {
  VAR_27 = FUNC_6(VAR_16->pfp_fw);
  if (VAR_27) {
   FUNC_5("si_cp: validation failed for firmware \"%s\"\n",
          VAR_26);
   goto out;
  } else {
   VAR_28++;
  }
 }

 FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_me.bin", VAR_18);
 VAR_27 = FUNC_8(&VAR_16->me_fw, VAR_26, VAR_16->dev);
 if (VAR_27) {
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_me.bin", VAR_17);
  VAR_27 = FUNC_8(&VAR_16->me_fw, VAR_26, VAR_16->dev);
  if (VAR_27)
   goto out;
  if (VAR_16->me_fw->size != VAR_20) {
   FUNC_5("si_cp: Bogus length %zu in firmware \"%s\"\n",
          VAR_16->me_fw->size, VAR_26);
   VAR_27 = -VAR_0;
  }
 } else {
  VAR_27 = FUNC_6(VAR_16->me_fw);
  if (VAR_27) {
   FUNC_5("si_cp: validation failed for firmware \"%s\"\n",
          VAR_26);
   goto out;
  } else {
   VAR_28++;
  }
 }

 FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_ce.bin", VAR_18);
 VAR_27 = FUNC_8(&VAR_16->ce_fw, VAR_26, VAR_16->dev);
 if (VAR_27) {
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_ce.bin", VAR_17);
  VAR_27 = FUNC_8(&VAR_16->ce_fw, VAR_26, VAR_16->dev);
  if (VAR_27)
   goto out;
  if (VAR_16->ce_fw->size != VAR_21) {
   FUNC_5("si_cp: Bogus length %zu in firmware \"%s\"\n",
          VAR_16->ce_fw->size, VAR_26);
   VAR_27 = -VAR_0;
  }
 } else {
  VAR_27 = FUNC_6(VAR_16->ce_fw);
  if (VAR_27) {
   FUNC_5("si_cp: validation failed for firmware \"%s\"\n",
          VAR_26);
   goto out;
  } else {
   VAR_28++;
  }
 }

 FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_rlc.bin", VAR_18);
 VAR_27 = FUNC_8(&VAR_16->rlc_fw, VAR_26, VAR_16->dev);
 if (VAR_27) {
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_rlc.bin", VAR_17);
  VAR_27 = FUNC_8(&VAR_16->rlc_fw, VAR_26, VAR_16->dev);
  if (VAR_27)
   goto out;
  if (VAR_16->rlc_fw->size != VAR_22) {
   FUNC_5("si_rlc: Bogus length %zu in firmware \"%s\"\n",
          VAR_16->rlc_fw->size, VAR_26);
   VAR_27 = -VAR_0;
  }
 } else {
  VAR_27 = FUNC_6(VAR_16->rlc_fw);
  if (VAR_27) {
   FUNC_5("si_cp: validation failed for firmware \"%s\"\n",
          VAR_26);
   goto out;
  } else {
   VAR_28++;
  }
 }

 if (VAR_30)
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/si58_mc.bin");
 else
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_mc.bin", VAR_18);
 VAR_27 = FUNC_8(&VAR_16->mc_fw, VAR_26, VAR_16->dev);
 if (VAR_27) {
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_mc2.bin", VAR_17);
  VAR_27 = FUNC_8(&VAR_16->mc_fw, VAR_26, VAR_16->dev);
  if (VAR_27) {
   FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_mc.bin", VAR_17);
   VAR_27 = FUNC_8(&VAR_16->mc_fw, VAR_26, VAR_16->dev);
   if (VAR_27)
    goto out;
  }
  if ((VAR_16->mc_fw->size != VAR_23) &&
      (VAR_16->mc_fw->size != VAR_25)) {
   FUNC_5("si_mc: Bogus length %zu in firmware \"%s\"\n",
          VAR_16->mc_fw->size, VAR_26);
   VAR_27 = -VAR_0;
  }
  FUNC_3("%s: %zu bytes\n", VAR_26, VAR_16->mc_fw->size);
 } else {
  VAR_27 = FUNC_6(VAR_16->mc_fw);
  if (VAR_27) {
   FUNC_5("si_cp: validation failed for firmware \"%s\"\n",
          VAR_26);
   goto out;
  } else {
   VAR_28++;
  }
 }

 if (VAR_31)
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/banks_k_2_smc.bin");
 else if (VAR_29)
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_k_smc.bin", VAR_18);
 else
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_smc.bin", VAR_18);
 VAR_27 = FUNC_8(&VAR_16->smc_fw, VAR_26, VAR_16->dev);
 if (VAR_27) {
  FUNC_9(VAR_26, sizeof(VAR_26), "radeon/%s_smc.bin", VAR_17);
  VAR_27 = FUNC_8(&VAR_16->smc_fw, VAR_26, VAR_16->dev);
  if (VAR_27) {
   FUNC_5("smc: error loading firmware \"%s\"\n", VAR_26);
   FUNC_7(VAR_16->smc_fw);
   VAR_16->smc_fw = ((void*)0);
   VAR_27 = 0;
  } else if (VAR_16->smc_fw->size != VAR_24) {
   FUNC_5("si_smc: Bogus length %zu in firmware \"%s\"\n",
          VAR_16->smc_fw->size, VAR_26);
   VAR_27 = -VAR_0;
  }
 } else {
  VAR_27 = FUNC_6(VAR_16->smc_fw);
  if (VAR_27) {
   FUNC_5("si_cp: validation failed for firmware \"%s\"\n",
          VAR_26);
   goto out;
  } else {
   VAR_28++;
  }
 }

 if (VAR_28 == 0) {
  VAR_16->new_fw = 0;
 } else if (VAR_28 < 6) {
  FUNC_5("si_fw: mixing new and old firmware!\n");
  VAR_27 = -VAR_0;
 } else {
  VAR_16->new_fw = 1;
 }
out:
 if (VAR_27) {
  if (VAR_27 != -VAR_0)
   FUNC_5("si_cp: Failed to load firmware \"%s\"\n",
          VAR_26);
  FUNC_7(VAR_16->pfp_fw);
  VAR_16->pfp_fw = ((void*)0);
  FUNC_7(VAR_16->me_fw);
  VAR_16->me_fw = ((void*)0);
  FUNC_7(VAR_16->ce_fw);
  VAR_16->ce_fw = ((void*)0);
  FUNC_7(VAR_16->rlc_fw);
  VAR_16->rlc_fw = ((void*)0);
  FUNC_7(VAR_16->mc_fw);
  VAR_16->mc_fw = ((void*)0);
  FUNC_7(VAR_16->smc_fw);
  VAR_16->smc_fw = ((void*)0);
 }
 return VAR_27;
}
