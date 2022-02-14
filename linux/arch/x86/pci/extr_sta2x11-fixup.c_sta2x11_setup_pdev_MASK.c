
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta2x11_instance {int dummy; } ;
struct TYPE_3__ {int is_sta2x11; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 struct sta2x11_instance* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 struct sta2x11_instance *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2)
  return;
 FUNC_0(VAR_1, VAR_0 - 1);
 FUNC_1(VAR_1, VAR_0 - 1);
 VAR_1->dev.archdata.is_sta2x11 = 1;


 FUNC_2(VAR_1);
}
