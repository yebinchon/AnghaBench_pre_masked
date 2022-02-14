
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct pata_macio_priv {int * dev; struct pci_dev* pdev; int node; } ;
struct device_node {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct pata_macio_priv* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 (struct pata_macio_priv*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct device_node* FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_5,
     const struct pci_device_id *VAR_6)
{
 struct pata_macio_priv *VAR_7;
 struct device_node *VAR_8;
 resource_size_t VAR_9;


 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(&VAR_5->dev,
   "Cannot find OF device node for controller\n");
  return -VAR_1;
 }


 if (FUNC_7(VAR_5)) {
  FUNC_0(&VAR_5->dev,
   "Cannot enable controller PCI device\n");
  return -VAR_3;
 }


 VAR_7 = FUNC_1(&VAR_5->dev,
       sizeof(struct pata_macio_priv), VAR_4);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->node = FUNC_2(VAR_8);
 VAR_7->pdev = VAR_5;
 VAR_7->dev = &VAR_5->dev;


 if (FUNC_5(VAR_5, "pata-macio")) {
  FUNC_0(&VAR_5->dev,
   "Cannot obtain PCI resources\n");
  return -VAR_0;
 }


 VAR_9 = FUNC_6(VAR_5, 0);
 if (FUNC_3(VAR_7,
       VAR_9 + 0x2000,
       VAR_9 + 0x1000,
       VAR_9,
       VAR_5->irq))
  return -VAR_3;

 return 0;
}
