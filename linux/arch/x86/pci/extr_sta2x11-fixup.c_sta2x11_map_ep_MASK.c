
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta2x11_mapping {scalar_t__ amba_base; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (struct pci_dev*) ;
 struct sta2x11_mapping* FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_4)
{
 struct sta2x11_mapping *VAR_5 = FUNC_8(VAR_4);
 int VAR_6;

 if (!VAR_5)
  return;
 FUNC_5(VAR_4, FUNC_0(0), &VAR_5->amba_base);


 FUNC_6(VAR_4, FUNC_3(0), 0);
 FUNC_6(VAR_4, FUNC_2(0), 0);
 FUNC_6(VAR_4, FUNC_1(0), VAR_2 |
          VAR_1 | VAR_0);


 for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++)
  FUNC_6(VAR_4, FUNC_1(VAR_6), 0);

 FUNC_4(&VAR_4->dev,
   "sta2x11: Map EP %i: AMBA address %#8x-%#8x\n",
   FUNC_7(VAR_4), VAR_5->amba_base,
   VAR_5->amba_base + VAR_2 - 1);
}
