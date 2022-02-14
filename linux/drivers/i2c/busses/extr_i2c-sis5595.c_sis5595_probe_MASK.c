
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
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int,int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 int VAR_7;

 if (FUNC_4(VAR_5)) {
  FUNC_0(&VAR_5->dev, "SIS5595 not detected, module not inserted.\n");
  return -VAR_0;
 }


 VAR_2.dev.parent = &VAR_5->dev;

 FUNC_5(VAR_2.name, sizeof(VAR_2.name),
   "SMBus SIS5595 adapter at %04x", VAR_3 + VAR_1);
 VAR_7 = FUNC_1(&VAR_2);
 if (VAR_7) {
  FUNC_3(VAR_3 + VAR_1, 2);
  return VAR_7;
 }





 VAR_4 = FUNC_2(VAR_5);
 return -VAR_0;
}
