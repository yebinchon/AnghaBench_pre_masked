
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qib_devdata {int pcidev; int pcibar1; int pcibar0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct qib_devdata*,char*,int) ;

void FUNC_5(struct qib_devdata *VAR_5, u16 VAR_6, u8 VAR_7, u8 VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5->pcidev, VAR_0,
       VAR_5->pcibar0);
 if (VAR_9)
  FUNC_4(VAR_5, "rewrite of BAR0 failed: %d\n", VAR_9);
 VAR_9 = FUNC_2(VAR_5->pcidev, VAR_1,
       VAR_5->pcibar1);
 if (VAR_9)
  FUNC_4(VAR_5, "rewrite of BAR1 failed: %d\n", VAR_9);

 FUNC_3(VAR_5->pcidev, VAR_3, VAR_6);
 FUNC_1(VAR_5->pcidev, VAR_4, VAR_7);
 FUNC_1(VAR_5->pcidev, VAR_2, VAR_8);
 VAR_9 = FUNC_0(VAR_5->pcidev);
 if (VAR_9)
  FUNC_4(VAR_5,
   "pci_enable_device failed after reset: %d\n", VAR_9);
}
