
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * fw; } ;
struct amdgpu_device {int asic_type; TYPE_2__ gmc; int dev; TYPE_1__* pdev; } ;
typedef int fw_name ;
struct TYPE_3__ {int device; int revision; } ;


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
 case 129:
  VAR_1 = "tonga";
  break;
 case 132:
  if (((VAR_0->pdev->device == 0x67ef) &&
       ((VAR_0->pdev->revision == 0xe0) ||
        (VAR_0->pdev->revision == 0xe5))) ||
      ((VAR_0->pdev->device == 0x67ff) &&
       ((VAR_0->pdev->revision == 0xcf) ||
        (VAR_0->pdev->revision == 0xef) ||
        (VAR_0->pdev->revision == 0xff))))
   VAR_1 = "polaris11_k";
  else if ((VAR_0->pdev->device == 0x67ef) &&
    (VAR_0->pdev->revision == 0xe2))
   VAR_1 = "polaris11_k";
  else
   VAR_1 = "polaris11";
  break;
 case 133:
  if ((VAR_0->pdev->device == 0x67df) &&
      ((VAR_0->pdev->revision == 0xe1) ||
       (VAR_0->pdev->revision == 0xf7)))
   VAR_1 = "polaris10_k";
  else
   VAR_1 = "polaris10";
  break;
 case 131:
  if (((VAR_0->pdev->device == 0x6987) &&
       ((VAR_0->pdev->revision == 0xc0) ||
        (VAR_0->pdev->revision == 0xc3))) ||
      ((VAR_0->pdev->device == 0x6981) &&
       ((VAR_0->pdev->revision == 0x00) ||
        (VAR_0->pdev->revision == 0x01) ||
        (VAR_0->pdev->revision == 0x10))))
   VAR_1 = "polaris12_k";
  else
   VAR_1 = "polaris12";
  break;
 case 134:
 case 135:
 case 130:
 case 128:
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
  FUNC_3("mc: Failed to load firmware \"%s\"\n", VAR_2);
  FUNC_4(VAR_0->gmc.fw);
  VAR_0->gmc.fw = ((void*)0);
 }
 return VAR_3;
}
