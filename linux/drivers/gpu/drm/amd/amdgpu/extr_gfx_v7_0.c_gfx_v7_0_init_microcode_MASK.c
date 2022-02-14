
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rlc_fw; int * mec2_fw; int * mec_fw; int * ce_fw; int * me_fw; int * pfp_fw; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gfx; int dev; } ;
typedef int fw_name ;


 int FUNC_0 () ;





 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*,int ) ;
 int FUNC_6 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_0)
{
 const char *VAR_1;
 char VAR_2[30];
 int VAR_3;

 FUNC_1("\n");

 switch (VAR_0->asic_type) {
 case 132:
  VAR_1 = "bonaire";
  break;
 case 131:
  VAR_1 = "hawaii";
  break;
 case 129:
  VAR_1 = "kaveri";
  break;
 case 130:
  VAR_1 = "kabini";
  break;
 case 128:
  VAR_1 = "mullins";
  break;
 default: FUNC_0();
 }

 FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_pfp.bin", VAR_1);
 VAR_3 = FUNC_5(&VAR_0->gfx.pfp_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.pfp_fw);
 if (VAR_3)
  goto out;

 FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_me.bin", VAR_1);
 VAR_3 = FUNC_5(&VAR_0->gfx.me_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.me_fw);
 if (VAR_3)
  goto out;

 FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_ce.bin", VAR_1);
 VAR_3 = FUNC_5(&VAR_0->gfx.ce_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.ce_fw);
 if (VAR_3)
  goto out;

 FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_mec.bin", VAR_1);
 VAR_3 = FUNC_5(&VAR_0->gfx.mec_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.mec_fw);
 if (VAR_3)
  goto out;

 if (VAR_0->asic_type == 129) {
  FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_mec2.bin", VAR_1);
  VAR_3 = FUNC_5(&VAR_0->gfx.mec2_fw, VAR_2, VAR_0->dev);
  if (VAR_3)
   goto out;
  VAR_3 = FUNC_2(VAR_0->gfx.mec2_fw);
  if (VAR_3)
   goto out;
 }

 FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_rlc.bin", VAR_1);
 VAR_3 = FUNC_5(&VAR_0->gfx.rlc_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.rlc_fw);

out:
 if (VAR_3) {
  FUNC_3("gfx7: Failed to load firmware \"%s\"\n", VAR_2);
  FUNC_4(VAR_0->gfx.pfp_fw);
  VAR_0->gfx.pfp_fw = ((void*)0);
  FUNC_4(VAR_0->gfx.me_fw);
  VAR_0->gfx.me_fw = ((void*)0);
  FUNC_4(VAR_0->gfx.ce_fw);
  VAR_0->gfx.ce_fw = ((void*)0);
  FUNC_4(VAR_0->gfx.mec_fw);
  VAR_0->gfx.mec_fw = ((void*)0);
  FUNC_4(VAR_0->gfx.mec2_fw);
  VAR_0->gfx.mec2_fw = ((void*)0);
  FUNC_4(VAR_0->gfx.rlc_fw);
  VAR_0->gfx.rlc_fw = ((void*)0);
 }
 return VAR_3;
}
