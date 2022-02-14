
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ide_host {scalar_t__ host_priv; } ;
struct TYPE_4__ {int rqsize; int * hwif_data; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (TYPE_1__*) ;
 struct ide_host* FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_2(VAR_0->dev);
 struct ide_host *VAR_2 = FUNC_1(VAR_1);

 VAR_0->hwif_data = ((void*)0);


 VAR_0->rqsize = 15;

 if (VAR_2->host_priv)
  FUNC_0(VAR_0);
}
