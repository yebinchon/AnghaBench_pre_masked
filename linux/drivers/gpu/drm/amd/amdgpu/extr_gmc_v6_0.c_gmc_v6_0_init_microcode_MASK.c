
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char*,int ) ;
 int FUNC_7 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_1)
{
 const char *VAR_2;
 char VAR_3[30];
 int VAR_4;
 bool VAR_5 = 0;

 FUNC_1("\n");

 switch (VAR_1->asic_type) {
 case 129:
  VAR_2 = "tahiti";
  break;
 case 130:
  VAR_2 = "pitcairn";
  break;
 case 128:
  VAR_2 = "verde";
  break;
 case 131:
  VAR_2 = "oland";
  break;
 case 132:
  VAR_2 = "hainan";
  break;
 default: FUNC_0();
 }


 if (((FUNC_2(VAR_0) & 0xff000000) >> 24) == 0x58)
  VAR_5 = 1;

 if (VAR_5)
  FUNC_7(VAR_3, sizeof(VAR_3), "amdgpu/si58_mc.bin");
 else
  FUNC_7(VAR_3, sizeof(VAR_3), "amdgpu/%s_mc.bin", VAR_2);
 VAR_4 = FUNC_6(&VAR_1->gmc.fw, VAR_3, VAR_1->dev);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_3(VAR_1->gmc.fw);

out:
 if (VAR_4) {
  FUNC_4(VAR_1->dev,
         "si_mc: Failed to load firmware \"%s\"\n",
         VAR_3);
  FUNC_5(VAR_1->gmc.fw);
  VAR_1->gmc.fw = ((void*)0);
 }
 return VAR_4;
}
