
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fw; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gmc; int dev; } ;
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
 case 133:
  VAR_1 = "bonaire";
  break;
 case 132:
  VAR_1 = "hawaii";
  break;
 case 128:
  VAR_1 = "topaz";
  break;
 case 130:
 case 131:
 case 129:
  return 0;
 default: FUNC_0();
 }

 FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_mc.bin", VAR_1);

 VAR_3 = FUNC_5(&VAR_0->gmc.fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gmc.fw);

out:
 if (VAR_3) {
  FUNC_3("cik_mc: Failed to load firmware \"%s\"\n", VAR_2);
  FUNC_4(VAR_0->gmc.fw);
  VAR_0->gmc.fw = ((void*)0);
 }
 return VAR_3;
}
