
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct TYPE_2__ {int of_node; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct ce4100_devices {int * pdev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (struct ce4100_devices*) ;
 struct ce4100_devices* FUNC_6 (int,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,struct ce4100_devices*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_3,
  const struct pci_device_id *VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct ce4100_devices *VAR_7;

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5)
  return VAR_5;

 if (!VAR_3->dev.of_node) {
  FUNC_4(&VAR_3->dev, "Missing device tree node.\n");
  return -VAR_0;
 }
 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_5 = -VAR_1;
  goto err_mem;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7->pdev); VAR_6++) {
  VAR_7->pdev[VAR_6] = FUNC_3(VAR_3, VAR_6);
  if (FUNC_1(VAR_7->pdev[VAR_6])) {
   VAR_5 = FUNC_2(VAR_7->pdev[VAR_6]);
   while (--VAR_6 >= 0)
    FUNC_10(VAR_7->pdev[VAR_6]);
   goto err_dev_add;
  }
 }
 FUNC_9(VAR_3, VAR_7);
 return 0;

err_dev_add:
 FUNC_5(VAR_7);
err_mem:
 FUNC_7(VAR_3);
 return VAR_5;
}
