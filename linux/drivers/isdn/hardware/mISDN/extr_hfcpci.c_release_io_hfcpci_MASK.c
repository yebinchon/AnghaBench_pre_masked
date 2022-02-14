
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pci_io; int dmahandle; int fifos; int timer; } ;
struct hfc_pci {TYPE_1__ hw; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct hfc_pci *VAR_1)
{

 FUNC_3(VAR_1->pdev, VAR_0, 0);
 FUNC_0(&VAR_1->hw.timer);
 FUNC_2(VAR_1->pdev, 0x8000, VAR_1->hw.fifos, VAR_1->hw.dmahandle);
 FUNC_1(VAR_1->hw.pci_io);
}
