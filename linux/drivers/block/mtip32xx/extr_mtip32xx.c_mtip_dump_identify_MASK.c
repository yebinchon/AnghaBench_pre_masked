
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mtip_port {int* identify; TYPE_2__* dd; int identify_valid; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned short*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct mtip_port *VAR_2)
{
 sector_t VAR_3;
 unsigned short VAR_4;
 char VAR_5[42];

 if (!VAR_2->identify_valid)
  return;

 FUNC_3(VAR_5, (char *)(VAR_2->identify+10), 21);
 FUNC_0(&VAR_2->dd->pdev->dev,
  "Serial No.: %s\n", VAR_5);

 FUNC_3(VAR_5, (char *)(VAR_2->identify+23), 9);
 FUNC_0(&VAR_2->dd->pdev->dev,
  "Firmware Ver.: %s\n", VAR_5);

 FUNC_3(VAR_5, (char *)(VAR_2->identify+27), 41);
 FUNC_0(&VAR_2->dd->pdev->dev, "Model: %s\n", VAR_5);

 FUNC_0(&VAR_2->dd->pdev->dev, "Security: %04x %s\n",
  VAR_2->identify[128],
  VAR_2->identify[128] & 0x4 ? "(LOCKED)" : "");

 if (FUNC_1(VAR_2->dd, &VAR_3))
  FUNC_0(&VAR_2->dd->pdev->dev,
   "Capacity: %llu sectors (%llu MB)\n",
    (u64)VAR_3,
    ((u64)VAR_3) * VAR_0 >> 20);

 FUNC_2(VAR_2->dd->pdev, VAR_1, &VAR_4);
 switch (VAR_4 & 0xFF) {
 case 0x1:
  FUNC_3(VAR_5, "A0", 3);
  break;
 case 0x3:
  FUNC_3(VAR_5, "A2", 3);
  break;
 default:
  FUNC_3(VAR_5, "?", 2);
  break;
 }
 FUNC_0(&VAR_2->dd->pdev->dev,
  "Card Type: %s\n", VAR_5);
}
