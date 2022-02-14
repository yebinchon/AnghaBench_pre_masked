
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spa_data {int bdfn; int phb_opal_id; } ;
struct pnv_phb {int opal_id; } ;
struct pci_dev {int devfn; int dev; TYPE_1__* bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct spa_data*) ;
 struct spa_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int ,int) ;
 struct pci_controller* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*) ;

int FUNC_6(struct pci_dev *VAR_2, void *VAR_3, int VAR_4,
  void **VAR_5)
{
 struct pci_controller *VAR_6 = FUNC_4(VAR_2->bus);
 struct pnv_phb *VAR_7 = VAR_6->private_data;
 struct spa_data *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = (VAR_2->bus->number << 8) | VAR_2->devfn;
 VAR_10 = FUNC_3(VAR_7->opal_id, VAR_9, FUNC_5(VAR_3),
    VAR_4);
 if (VAR_10) {
  FUNC_0(&VAR_2->dev, "Can't setup Shared Process Area: %d\n", VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }
 VAR_8->phb_opal_id = VAR_7->opal_id;
 VAR_8->bdfn = VAR_9;
 *VAR_5 = (void *) VAR_8;
 return 0;
}
