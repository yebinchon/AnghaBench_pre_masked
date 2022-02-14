
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int family; int flags; TYPE_1__* mc_fw; TYPE_1__* rlc_fw; TYPE_1__* me_fw; TYPE_1__* pfp_fw; TYPE_1__* smc_fw; int dev; } ;
typedef int fw_name ;
struct TYPE_3__ {size_t size; } ;


 size_t FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__**,char*,int ) ;
 int FUNC_7 (char*,int,char*,char const*) ;

int FUNC_8(struct radeon_device *VAR_15)
{
 const char *VAR_16;
 const char *VAR_17;
 size_t VAR_18, VAR_19, VAR_20, VAR_21;
 size_t VAR_22 = 0;
 char VAR_23[30];
 int VAR_24;

 FUNC_2("\n");

 switch (VAR_15->family) {
 case 131:
  VAR_16 = "BARTS";
  VAR_17 = "BTC";
  VAR_18 = VAR_10 * 4;
  VAR_19 = VAR_11 * 4;
  VAR_20 = VAR_12 * 4;
  VAR_21 = VAR_2 * 4;
  VAR_22 = FUNC_0(VAR_1, 4);
  break;
 case 128:
  VAR_16 = "TURKS";
  VAR_17 = "BTC";
  VAR_18 = VAR_10 * 4;
  VAR_19 = VAR_11 * 4;
  VAR_20 = VAR_12 * 4;
  VAR_21 = VAR_2 * 4;
  VAR_22 = FUNC_0(VAR_14, 4);
  break;
 case 130:
  VAR_16 = "CAICOS";
  VAR_17 = "BTC";
  VAR_18 = VAR_10 * 4;
  VAR_19 = VAR_11 * 4;
  VAR_20 = VAR_12 * 4;
  VAR_21 = VAR_2 * 4;
  VAR_22 = FUNC_0(VAR_3, 4);
  break;
 case 129:
  VAR_16 = "CAYMAN";
  VAR_17 = "CAYMAN";
  VAR_18 = VAR_5 * 4;
  VAR_19 = VAR_6 * 4;
  VAR_20 = VAR_7 * 4;
  VAR_21 = VAR_4 * 4;
  VAR_22 = FUNC_0(VAR_8, 4);
  break;
 case 132:
  VAR_16 = "ARUBA";
  VAR_17 = "ARUBA";

  VAR_18 = VAR_5 * 4;
  VAR_19 = VAR_6 * 4;
  VAR_20 = VAR_0 * 4;
  VAR_21 = 0;
  break;
 default: FUNC_1();
 }

 FUNC_3("Loading %s Microcode\n", VAR_16);

 FUNC_7(VAR_23, sizeof(VAR_23), "radeon/%s_pfp.bin", VAR_16);
 VAR_24 = FUNC_6(&VAR_15->pfp_fw, VAR_23, VAR_15->dev);
 if (VAR_24)
  goto out;
 if (VAR_15->pfp_fw->size != VAR_18) {
  FUNC_4("ni_cp: Bogus length %zu in firmware \"%s\"\n",
         VAR_15->pfp_fw->size, VAR_23);
  VAR_24 = -VAR_9;
  goto out;
 }

 FUNC_7(VAR_23, sizeof(VAR_23), "radeon/%s_me.bin", VAR_16);
 VAR_24 = FUNC_6(&VAR_15->me_fw, VAR_23, VAR_15->dev);
 if (VAR_24)
  goto out;
 if (VAR_15->me_fw->size != VAR_19) {
  FUNC_4("ni_cp: Bogus length %zu in firmware \"%s\"\n",
         VAR_15->me_fw->size, VAR_23);
  VAR_24 = -VAR_9;
 }

 FUNC_7(VAR_23, sizeof(VAR_23), "radeon/%s_rlc.bin", VAR_17);
 VAR_24 = FUNC_6(&VAR_15->rlc_fw, VAR_23, VAR_15->dev);
 if (VAR_24)
  goto out;
 if (VAR_15->rlc_fw->size != VAR_20) {
  FUNC_4("ni_rlc: Bogus length %zu in firmware \"%s\"\n",
         VAR_15->rlc_fw->size, VAR_23);
  VAR_24 = -VAR_9;
 }


 if (!(VAR_15->flags & VAR_13)) {
  FUNC_7(VAR_23, sizeof(VAR_23), "radeon/%s_mc.bin", VAR_16);
  VAR_24 = FUNC_6(&VAR_15->mc_fw, VAR_23, VAR_15->dev);
  if (VAR_24)
   goto out;
  if (VAR_15->mc_fw->size != VAR_21) {
   FUNC_4("ni_mc: Bogus length %zu in firmware \"%s\"\n",
          VAR_15->mc_fw->size, VAR_23);
   VAR_24 = -VAR_9;
  }
 }

 if ((VAR_15->family >= 131) && (VAR_15->family <= 129)) {
  FUNC_7(VAR_23, sizeof(VAR_23), "radeon/%s_smc.bin", VAR_16);
  VAR_24 = FUNC_6(&VAR_15->smc_fw, VAR_23, VAR_15->dev);
  if (VAR_24) {
   FUNC_4("smc: error loading firmware \"%s\"\n", VAR_23);
   FUNC_5(VAR_15->smc_fw);
   VAR_15->smc_fw = ((void*)0);
   VAR_24 = 0;
  } else if (VAR_15->smc_fw->size != VAR_22) {
   FUNC_4("ni_mc: Bogus length %zu in firmware \"%s\"\n",
          VAR_15->mc_fw->size, VAR_23);
   VAR_24 = -VAR_9;
  }
 }

out:
 if (VAR_24) {
  if (VAR_24 != -VAR_9)
   FUNC_4("ni_cp: Failed to load firmware \"%s\"\n",
          VAR_23);
  FUNC_5(VAR_15->pfp_fw);
  VAR_15->pfp_fw = ((void*)0);
  FUNC_5(VAR_15->me_fw);
  VAR_15->me_fw = ((void*)0);
  FUNC_5(VAR_15->rlc_fw);
  VAR_15->rlc_fw = ((void*)0);
  FUNC_5(VAR_15->mc_fw);
  VAR_15->mc_fw = ((void*)0);
 }
 return VAR_24;
}
