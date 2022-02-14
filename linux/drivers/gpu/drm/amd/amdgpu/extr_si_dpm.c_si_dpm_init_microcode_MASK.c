
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * fw; } ;
struct amdgpu_device {int asic_type; TYPE_2__ pm; int dev; TYPE_1__* pdev; } ;
typedef int fw_name ;
struct TYPE_3__ {int revision; int device; } ;


 int FUNC_0 () ;





 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int *) ;
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
  VAR_1 = "tahiti";
  break;
 case 130:
  if ((VAR_0->pdev->revision == 0x81) &&
      ((VAR_0->pdev->device == 0x6810) ||
      (VAR_0->pdev->device == 0x6811)))
   VAR_1 = "pitcairn_k";
  else
   VAR_1 = "pitcairn";
  break;
 case 128:
  if (((VAR_0->pdev->device == 0x6820) &&
   ((VAR_0->pdev->revision == 0x81) ||
   (VAR_0->pdev->revision == 0x83))) ||
      ((VAR_0->pdev->device == 0x6821) &&
   ((VAR_0->pdev->revision == 0x83) ||
   (VAR_0->pdev->revision == 0x87))) ||
      ((VAR_0->pdev->revision == 0x87) &&
   ((VAR_0->pdev->device == 0x6823) ||
   (VAR_0->pdev->device == 0x682b))))
   VAR_1 = "verde_k";
  else
   VAR_1 = "verde";
  break;
 case 131:
  if (((VAR_0->pdev->revision == 0x81) &&
   ((VAR_0->pdev->device == 0x6600) ||
   (VAR_0->pdev->device == 0x6604) ||
   (VAR_0->pdev->device == 0x6605) ||
   (VAR_0->pdev->device == 0x6610))) ||
      ((VAR_0->pdev->revision == 0x83) &&
   (VAR_0->pdev->device == 0x6610)))
   VAR_1 = "oland_k";
  else
   VAR_1 = "oland";
  break;
 case 132:
  if (((VAR_0->pdev->revision == 0x81) &&
   (VAR_0->pdev->device == 0x6660)) ||
      ((VAR_0->pdev->revision == 0x83) &&
   ((VAR_0->pdev->device == 0x6660) ||
   (VAR_0->pdev->device == 0x6663) ||
   (VAR_0->pdev->device == 0x6665) ||
    (VAR_0->pdev->device == 0x6667))))
   VAR_1 = "hainan_k";
  else if ((VAR_0->pdev->revision == 0xc3) &&
    (VAR_0->pdev->device == 0x6665))
   VAR_1 = "banks_k_2";
  else
   VAR_1 = "hainan";
  break;
 default: FUNC_0();
 }

 FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_smc.bin", VAR_1);
 VAR_3 = FUNC_5(&VAR_0->pm.fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_3(VAR_0->pm.fw);

out:
 if (VAR_3) {
  FUNC_2("si_smc: Failed to load firmware. err = %d\"%s\"\n",
     VAR_3, VAR_2);
  FUNC_4(VAR_0->pm.fw);
  VAR_0->pm.fw = ((void*)0);
 }
 return VAR_3;

}
