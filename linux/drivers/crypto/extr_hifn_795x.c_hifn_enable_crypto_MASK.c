
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hifn_device {TYPE_1__* pdev; int name; } ;
struct TYPE_5__ {scalar_t__ pci_vendor; scalar_t__ pci_prod; char* card_id; } ;
struct TYPE_4__ {scalar_t__ vendor; scalar_t__ device; int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int,char) ;
 int FUNC_4 (struct hifn_device*,int ) ;
 int FUNC_5 (struct hifn_device*,int ,int) ;
 int FUNC_6 (int) ;
 TYPE_2__* VAR_8 ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct hifn_device *VAR_9)
{
 u32 VAR_10, VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {
  if (VAR_8[VAR_13].pci_vendor == VAR_9->pdev->vendor &&
    VAR_8[VAR_13].pci_prod == VAR_9->pdev->device) {
   VAR_12 = VAR_8[VAR_13].card_id;
   break;
  }
 }

 if (!VAR_12) {
  FUNC_2(&VAR_9->pdev->dev, "Unknown card!\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_9, VAR_1);

 FUNC_5(VAR_9, VAR_1,
   VAR_7 | VAR_6 |
   VAR_4 | VAR_5);
 FUNC_6(1);
 VAR_11 = FUNC_4(VAR_9, VAR_2);
 FUNC_6(1);
 FUNC_5(VAR_9, VAR_3, 0);
 FUNC_6(1);

 for (VAR_13 = 0; VAR_13 < 12; ++VAR_13) {
  VAR_11 = FUNC_3(VAR_11, VAR_12[VAR_13] + 0x101);
  FUNC_5(VAR_9, VAR_3, VAR_11);

  FUNC_6(1);
 }
 FUNC_5(VAR_9, VAR_1, VAR_10);

 FUNC_1(&VAR_9->pdev->dev, "%s %s.\n", VAR_9->name, FUNC_7(VAR_9->pdev));

 return 0;
}
