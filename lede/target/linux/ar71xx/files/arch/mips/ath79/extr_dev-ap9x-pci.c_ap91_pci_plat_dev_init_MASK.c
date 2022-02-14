
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * platform_data; } ;
struct pci_dev {TYPE_1__ dev; int devfn; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1)
{
 switch (FUNC_0(VAR_1->devfn)) {
 case 0:
  VAR_1->dev.platform_data = &VAR_0;
  break;
 }

 return 0;
}
