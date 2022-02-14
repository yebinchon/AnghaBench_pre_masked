
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pnv_phb {int opal_id; } ;
struct pci_dev {int dev; int devfn; int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,long,int ,int) ;
 struct pci_controller* FUNC_2 (int ) ;

int FUNC_3(struct pci_dev *VAR_2, long VAR_3,
   uint64_t VAR_4, int VAR_5)
{
 struct pci_controller *VAR_6 = FUNC_2(VAR_2->bus);
 struct pnv_phb *VAR_7 = VAR_6->private_data;
 int VAR_8;

 if (VAR_5 != VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7->opal_id, VAR_2->devfn, VAR_3,
   VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_0(&VAR_2->dev, "Can't configure host TL: %d\n", VAR_8);
  return -VAR_0;
 }
 return 0;
}
