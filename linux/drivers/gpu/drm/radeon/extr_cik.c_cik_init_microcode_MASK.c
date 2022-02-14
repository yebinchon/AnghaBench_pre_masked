
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_device {int family; int flags; int new_fw; TYPE_2__* smc_fw; TYPE_2__* mc_fw; TYPE_2__* sdma_fw; TYPE_2__* rlc_fw; TYPE_2__* mec2_fw; TYPE_2__* mec_fw; TYPE_2__* ce_fw; TYPE_2__* me_fw; TYPE_2__* pfp_fw; int dev; TYPE_1__* pdev; } ;
typedef int fw_name ;
struct TYPE_6__ {size_t size; } ;
struct TYPE_5__ {int revision; int device; } ;


 size_t FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__**,char*,int ) ;
 int FUNC_8 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_17)
{
 const char *VAR_18;
 const char *VAR_19;
 size_t VAR_20, VAR_21, VAR_22,
  VAR_23, VAR_24, VAR_25 = 0,
  VAR_26, VAR_27 = 0, VAR_28 = 0;
 char VAR_29[30];
 int VAR_30 = 0;
 int VAR_31;
 int VAR_32;
 bool VAR_33 = 0;

 FUNC_2("\n");

 switch (VAR_17->family) {
 case 132:
  VAR_18 = "BONAIRE";
  if ((VAR_17->pdev->revision == 0x80) ||
      (VAR_17->pdev->revision == 0x81) ||
      (VAR_17->pdev->device == 0x665f))
   VAR_33 = 1;
  VAR_19 = "bonaire";
  VAR_20 = VAR_7 * 4;
  VAR_21 = VAR_6 * 4;
  VAR_22 = VAR_4 * 4;
  VAR_23 = VAR_5 * 4;
  VAR_24 = VAR_2 * 4;
  VAR_25 = VAR_1 * 4;
  VAR_28 = VAR_0 * 4;
  VAR_26 = VAR_8 * 4;
  VAR_27 = FUNC_0(VAR_3, 4);
  VAR_32 = 8;
  break;
 case 131:
  VAR_18 = "HAWAII";
  if (VAR_17->pdev->revision == 0x80)
   VAR_33 = 1;
  VAR_19 = "hawaii";
  VAR_20 = VAR_7 * 4;
  VAR_21 = VAR_6 * 4;
  VAR_22 = VAR_4 * 4;
  VAR_23 = VAR_5 * 4;
  VAR_24 = VAR_2 * 4;
  VAR_25 = VAR_11 * 4;
  VAR_28 = VAR_10 * 4;
  VAR_26 = VAR_8 * 4;
  VAR_27 = FUNC_0(VAR_12, 4);
  VAR_32 = 8;
  break;
 case 129:
  VAR_18 = "KAVERI";
  VAR_19 = "kaveri";
  VAR_20 = VAR_7 * 4;
  VAR_21 = VAR_6 * 4;
  VAR_22 = VAR_4 * 4;
  VAR_23 = VAR_5 * 4;
  VAR_24 = VAR_14 * 4;
  VAR_26 = VAR_8 * 4;
  VAR_32 = 7;
  break;
 case 130:
  VAR_18 = "KABINI";
  VAR_19 = "kabini";
  VAR_20 = VAR_7 * 4;
  VAR_21 = VAR_6 * 4;
  VAR_22 = VAR_4 * 4;
  VAR_23 = VAR_5 * 4;
  VAR_24 = VAR_13 * 4;
  VAR_26 = VAR_8 * 4;
  VAR_32 = 6;
  break;
 case 128:
  VAR_18 = "MULLINS";
  VAR_19 = "mullins";
  VAR_20 = VAR_7 * 4;
  VAR_21 = VAR_6 * 4;
  VAR_22 = VAR_4 * 4;
  VAR_23 = VAR_5 * 4;
  VAR_24 = VAR_15 * 4;
  VAR_26 = VAR_8 * 4;
  VAR_32 = 6;
  break;
 default: FUNC_1();
 }

 FUNC_3("Loading %s Microcode\n", VAR_19);

 FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_pfp.bin", VAR_19);
 VAR_31 = FUNC_7(&VAR_17->pfp_fw, VAR_29, VAR_17->dev);
 if (VAR_31) {
  FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_pfp.bin", VAR_18);
  VAR_31 = FUNC_7(&VAR_17->pfp_fw, VAR_29, VAR_17->dev);
  if (VAR_31)
   goto out;
  if (VAR_17->pfp_fw->size != VAR_20) {
   FUNC_4("cik_cp: Bogus length %zu in firmware \"%s\"\n",
          VAR_17->pfp_fw->size, VAR_29);
   VAR_31 = -VAR_9;
   goto out;
  }
 } else {
  VAR_31 = FUNC_5(VAR_17->pfp_fw);
  if (VAR_31) {
   FUNC_4("cik_fw: validation failed for firmware \"%s\"\n",
          VAR_29);
   goto out;
  } else {
   VAR_30++;
  }
 }

 FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_me.bin", VAR_19);
 VAR_31 = FUNC_7(&VAR_17->me_fw, VAR_29, VAR_17->dev);
 if (VAR_31) {
  FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_me.bin", VAR_18);
  VAR_31 = FUNC_7(&VAR_17->me_fw, VAR_29, VAR_17->dev);
  if (VAR_31)
   goto out;
  if (VAR_17->me_fw->size != VAR_21) {
   FUNC_4("cik_cp: Bogus length %zu in firmware \"%s\"\n",
          VAR_17->me_fw->size, VAR_29);
   VAR_31 = -VAR_9;
  }
 } else {
  VAR_31 = FUNC_5(VAR_17->me_fw);
  if (VAR_31) {
   FUNC_4("cik_fw: validation failed for firmware \"%s\"\n",
          VAR_29);
   goto out;
  } else {
   VAR_30++;
  }
 }

 FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_ce.bin", VAR_19);
 VAR_31 = FUNC_7(&VAR_17->ce_fw, VAR_29, VAR_17->dev);
 if (VAR_31) {
  FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_ce.bin", VAR_18);
  VAR_31 = FUNC_7(&VAR_17->ce_fw, VAR_29, VAR_17->dev);
  if (VAR_31)
   goto out;
  if (VAR_17->ce_fw->size != VAR_22) {
   FUNC_4("cik_cp: Bogus length %zu in firmware \"%s\"\n",
          VAR_17->ce_fw->size, VAR_29);
   VAR_31 = -VAR_9;
  }
 } else {
  VAR_31 = FUNC_5(VAR_17->ce_fw);
  if (VAR_31) {
   FUNC_4("cik_fw: validation failed for firmware \"%s\"\n",
          VAR_29);
   goto out;
  } else {
   VAR_30++;
  }
 }

 FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_mec.bin", VAR_19);
 VAR_31 = FUNC_7(&VAR_17->mec_fw, VAR_29, VAR_17->dev);
 if (VAR_31) {
  FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_mec.bin", VAR_18);
  VAR_31 = FUNC_7(&VAR_17->mec_fw, VAR_29, VAR_17->dev);
  if (VAR_31)
   goto out;
  if (VAR_17->mec_fw->size != VAR_23) {
   FUNC_4("cik_cp: Bogus length %zu in firmware \"%s\"\n",
          VAR_17->mec_fw->size, VAR_29);
   VAR_31 = -VAR_9;
  }
 } else {
  VAR_31 = FUNC_5(VAR_17->mec_fw);
  if (VAR_31) {
   FUNC_4("cik_fw: validation failed for firmware \"%s\"\n",
          VAR_29);
   goto out;
  } else {
   VAR_30++;
  }
 }

 if (VAR_17->family == 129) {
  FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_mec2.bin", VAR_19);
  VAR_31 = FUNC_7(&VAR_17->mec2_fw, VAR_29, VAR_17->dev);
  if (VAR_31) {
   goto out;
  } else {
   VAR_31 = FUNC_5(VAR_17->mec2_fw);
   if (VAR_31) {
    goto out;
   } else {
    VAR_30++;
   }
  }
 }

 FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_rlc.bin", VAR_19);
 VAR_31 = FUNC_7(&VAR_17->rlc_fw, VAR_29, VAR_17->dev);
 if (VAR_31) {
  FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_rlc.bin", VAR_18);
  VAR_31 = FUNC_7(&VAR_17->rlc_fw, VAR_29, VAR_17->dev);
  if (VAR_31)
   goto out;
  if (VAR_17->rlc_fw->size != VAR_24) {
   FUNC_4("cik_rlc: Bogus length %zu in firmware \"%s\"\n",
          VAR_17->rlc_fw->size, VAR_29);
   VAR_31 = -VAR_9;
  }
 } else {
  VAR_31 = FUNC_5(VAR_17->rlc_fw);
  if (VAR_31) {
   FUNC_4("cik_fw: validation failed for firmware \"%s\"\n",
          VAR_29);
   goto out;
  } else {
   VAR_30++;
  }
 }

 FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_sdma.bin", VAR_19);
 VAR_31 = FUNC_7(&VAR_17->sdma_fw, VAR_29, VAR_17->dev);
 if (VAR_31) {
  FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_sdma.bin", VAR_18);
  VAR_31 = FUNC_7(&VAR_17->sdma_fw, VAR_29, VAR_17->dev);
  if (VAR_31)
   goto out;
  if (VAR_17->sdma_fw->size != VAR_26) {
   FUNC_4("cik_sdma: Bogus length %zu in firmware \"%s\"\n",
          VAR_17->sdma_fw->size, VAR_29);
   VAR_31 = -VAR_9;
  }
 } else {
  VAR_31 = FUNC_5(VAR_17->sdma_fw);
  if (VAR_31) {
   FUNC_4("cik_fw: validation failed for firmware \"%s\"\n",
          VAR_29);
   goto out;
  } else {
   VAR_30++;
  }
 }


 if (!(VAR_17->flags & VAR_16)) {
  FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_mc.bin", VAR_19);
  VAR_31 = FUNC_7(&VAR_17->mc_fw, VAR_29, VAR_17->dev);
  if (VAR_31) {
   FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_mc2.bin", VAR_18);
   VAR_31 = FUNC_7(&VAR_17->mc_fw, VAR_29, VAR_17->dev);
   if (VAR_31) {
    FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_mc.bin", VAR_18);
    VAR_31 = FUNC_7(&VAR_17->mc_fw, VAR_29, VAR_17->dev);
    if (VAR_31)
     goto out;
   }
   if ((VAR_17->mc_fw->size != VAR_25) &&
       (VAR_17->mc_fw->size != VAR_28)){
    FUNC_4("cik_mc: Bogus length %zu in firmware \"%s\"\n",
           VAR_17->mc_fw->size, VAR_29);
    VAR_31 = -VAR_9;
   }
   FUNC_3("%s: %zu bytes\n", VAR_29, VAR_17->mc_fw->size);
  } else {
   VAR_31 = FUNC_5(VAR_17->mc_fw);
   if (VAR_31) {
    FUNC_4("cik_fw: validation failed for firmware \"%s\"\n",
           VAR_29);
    goto out;
   } else {
    VAR_30++;
   }
  }

  if (VAR_33)
   FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_k_smc.bin", VAR_19);
  else
   FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_smc.bin", VAR_19);
  VAR_31 = FUNC_7(&VAR_17->smc_fw, VAR_29, VAR_17->dev);
  if (VAR_31) {
   FUNC_8(VAR_29, sizeof(VAR_29), "radeon/%s_smc.bin", VAR_18);
   VAR_31 = FUNC_7(&VAR_17->smc_fw, VAR_29, VAR_17->dev);
   if (VAR_31) {
    FUNC_4("smc: error loading firmware \"%s\"\n",
           VAR_29);
    FUNC_6(VAR_17->smc_fw);
    VAR_17->smc_fw = ((void*)0);
    VAR_31 = 0;
   } else if (VAR_17->smc_fw->size != VAR_27) {
    FUNC_4("cik_smc: Bogus length %zu in firmware \"%s\"\n",
           VAR_17->smc_fw->size, VAR_29);
    VAR_31 = -VAR_9;
   }
  } else {
   VAR_31 = FUNC_5(VAR_17->smc_fw);
   if (VAR_31) {
    FUNC_4("cik_fw: validation failed for firmware \"%s\"\n",
           VAR_29);
    goto out;
   } else {
    VAR_30++;
   }
  }
 }

 if (VAR_30 == 0) {
  VAR_17->new_fw = 0;
 } else if (VAR_30 < VAR_32) {
  FUNC_4("ci_fw: mixing new and old firmware!\n");
  VAR_31 = -VAR_9;
 } else {
  VAR_17->new_fw = 1;
 }

out:
 if (VAR_31) {
  if (VAR_31 != -VAR_9)
   FUNC_4("cik_cp: Failed to load firmware \"%s\"\n",
          VAR_29);
  FUNC_6(VAR_17->pfp_fw);
  VAR_17->pfp_fw = ((void*)0);
  FUNC_6(VAR_17->me_fw);
  VAR_17->me_fw = ((void*)0);
  FUNC_6(VAR_17->ce_fw);
  VAR_17->ce_fw = ((void*)0);
  FUNC_6(VAR_17->mec_fw);
  VAR_17->mec_fw = ((void*)0);
  FUNC_6(VAR_17->mec2_fw);
  VAR_17->mec2_fw = ((void*)0);
  FUNC_6(VAR_17->rlc_fw);
  VAR_17->rlc_fw = ((void*)0);
  FUNC_6(VAR_17->sdma_fw);
  VAR_17->sdma_fw = ((void*)0);
  FUNC_6(VAR_17->mc_fw);
  VAR_17->mc_fw = ((void*)0);
  FUNC_6(VAR_17->smc_fw);
  VAR_17->smc_fw = ((void*)0);
 }
 return VAR_31;
}
