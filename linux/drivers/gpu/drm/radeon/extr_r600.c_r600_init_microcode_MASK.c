
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int family; TYPE_1__* smc_fw; TYPE_1__* rlc_fw; TYPE_1__* me_fw; TYPE_1__* pfp_fw; int dev; } ;
typedef int fw_name ;
struct TYPE_3__ {size_t size; } ;


 size_t FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
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
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__**,char*,int ) ;
 int FUNC_7 (char*,int,char*,char const*) ;

int FUNC_8(struct radeon_device *VAR_18)
{
 const char *VAR_19;
 const char *VAR_20;
 const char *VAR_21 = "RV770";
 size_t VAR_22, VAR_23, VAR_24, VAR_25 = 0;
 char VAR_26[30];
 int VAR_27;

 FUNC_2("\n");

 switch (VAR_18->family) {
 case 142:
  VAR_19 = "R600";
  VAR_20 = "R600";
  break;
 case 138:
  VAR_19 = "RV610";
  VAR_20 = "R600";
  break;
 case 136:
  VAR_19 = "RV630";
  VAR_20 = "R600";
  break;
 case 137:
  VAR_19 = "RV620";
  VAR_20 = "R600";
  break;
 case 135:
  VAR_19 = "RV635";
  VAR_20 = "R600";
  break;
 case 134:
  VAR_19 = "RV670";
  VAR_20 = "R600";
  break;
 case 140:
 case 139:
  VAR_19 = "RS780";
  VAR_20 = "R600";
  break;
 case 130:
  VAR_19 = "RV770";
  VAR_20 = "R700";
  VAR_21 = "RV770";
  VAR_25 = FUNC_0(VAR_17, 4);
  break;
 case 132:
  VAR_19 = "RV730";
  VAR_20 = "R700";
  VAR_21 = "RV730";
  VAR_25 = FUNC_0(VAR_15, 4);
  break;
 case 133:
  VAR_19 = "RV710";
  VAR_20 = "R700";
  VAR_21 = "RV710";
  VAR_25 = FUNC_0(VAR_14, 4);
  break;
 case 131:
  VAR_19 = "RV730";
  VAR_20 = "R700";
  VAR_21 = "RV740";
  VAR_25 = FUNC_0(VAR_16, 4);
  break;
 case 147:
  VAR_19 = "CEDAR";
  VAR_20 = "CEDAR";
  VAR_21 = "CEDAR";
  VAR_25 = FUNC_0(VAR_0, 4);
  break;
 case 141:
  VAR_19 = "REDWOOD";
  VAR_20 = "REDWOOD";
  VAR_21 = "REDWOOD";
  VAR_25 = FUNC_0(VAR_13, 4);
  break;
 case 144:
  VAR_19 = "JUNIPER";
  VAR_20 = "JUNIPER";
  VAR_21 = "JUNIPER";
  VAR_25 = FUNC_0(VAR_6, 4);
  break;
 case 146:
 case 145:
  VAR_19 = "CYPRESS";
  VAR_20 = "CYPRESS";
  VAR_21 = "CYPRESS";
  VAR_25 = FUNC_0(VAR_1, 4);
  break;
 case 143:
  VAR_19 = "PALM";
  VAR_20 = "SUMO";
  break;
 case 129:
  VAR_19 = "SUMO";
  VAR_20 = "SUMO";
  break;
 case 128:
  VAR_19 = "SUMO2";
  VAR_20 = "SUMO";
  break;
 default: FUNC_1();
 }

 if (VAR_18->family >= 147) {
  VAR_22 = VAR_3 * 4;
  VAR_23 = VAR_4 * 4;
  VAR_24 = VAR_5 * 4;
 } else if (VAR_18->family >= 130) {
  VAR_22 = VAR_10 * 4;
  VAR_23 = VAR_11 * 4;
  VAR_24 = VAR_12 * 4;
 } else {
  VAR_22 = VAR_7 * 4;
  VAR_23 = VAR_8 * 12;
  VAR_24 = VAR_9 * 4;
 }

 FUNC_3("Loading %s Microcode\n", VAR_19);

 FUNC_7(VAR_26, sizeof(VAR_26), "radeon/%s_pfp.bin", VAR_19);
 VAR_27 = FUNC_6(&VAR_18->pfp_fw, VAR_26, VAR_18->dev);
 if (VAR_27)
  goto out;
 if (VAR_18->pfp_fw->size != VAR_22) {
  FUNC_4("r600_cp: Bogus length %zu in firmware \"%s\"\n",
         VAR_18->pfp_fw->size, VAR_26);
  VAR_27 = -VAR_2;
  goto out;
 }

 FUNC_7(VAR_26, sizeof(VAR_26), "radeon/%s_me.bin", VAR_19);
 VAR_27 = FUNC_6(&VAR_18->me_fw, VAR_26, VAR_18->dev);
 if (VAR_27)
  goto out;
 if (VAR_18->me_fw->size != VAR_23) {
  FUNC_4("r600_cp: Bogus length %zu in firmware \"%s\"\n",
         VAR_18->me_fw->size, VAR_26);
  VAR_27 = -VAR_2;
 }

 FUNC_7(VAR_26, sizeof(VAR_26), "radeon/%s_rlc.bin", VAR_20);
 VAR_27 = FUNC_6(&VAR_18->rlc_fw, VAR_26, VAR_18->dev);
 if (VAR_27)
  goto out;
 if (VAR_18->rlc_fw->size != VAR_24) {
  FUNC_4("r600_rlc: Bogus length %zu in firmware \"%s\"\n",
         VAR_18->rlc_fw->size, VAR_26);
  VAR_27 = -VAR_2;
 }

 if ((VAR_18->family >= 130) && (VAR_18->family <= 145)) {
  FUNC_7(VAR_26, sizeof(VAR_26), "radeon/%s_smc.bin", VAR_21);
  VAR_27 = FUNC_6(&VAR_18->smc_fw, VAR_26, VAR_18->dev);
  if (VAR_27) {
   FUNC_4("smc: error loading firmware \"%s\"\n", VAR_26);
   FUNC_5(VAR_18->smc_fw);
   VAR_18->smc_fw = ((void*)0);
   VAR_27 = 0;
  } else if (VAR_18->smc_fw->size != VAR_25) {
   FUNC_4("smc: Bogus length %zu in firmware \"%s\"\n",
          VAR_18->smc_fw->size, VAR_26);
   VAR_27 = -VAR_2;
  }
 }

out:
 if (VAR_27) {
  if (VAR_27 != -VAR_2)
   FUNC_4("r600_cp: Failed to load firmware \"%s\"\n",
          VAR_26);
  FUNC_5(VAR_18->pfp_fw);
  VAR_18->pfp_fw = ((void*)0);
  FUNC_5(VAR_18->me_fw);
  VAR_18->me_fw = ((void*)0);
  FUNC_5(VAR_18->rlc_fw);
  VAR_18->rlc_fw = ((void*)0);
  FUNC_5(VAR_18->smc_fw);
  VAR_18->smc_fw = ((void*)0);
 }
 return VAR_27;
}
