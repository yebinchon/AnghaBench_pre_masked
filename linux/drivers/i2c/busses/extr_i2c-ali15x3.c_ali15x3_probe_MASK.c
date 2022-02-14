
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_5__ {int name; TYPE_1__ dev; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 if (FUNC_0(VAR_3)) {
  FUNC_1(&VAR_3->dev,
   "ALI15X3 not detected, module not inserted.\n");
  return -VAR_0;
 }


 VAR_1.dev.parent = &VAR_3->dev;

 FUNC_3(VAR_1.name, sizeof(VAR_1.name),
  "SMBus ALI15X3 adapter at %04x", VAR_2);
 return FUNC_2(&VAR_1);
}
