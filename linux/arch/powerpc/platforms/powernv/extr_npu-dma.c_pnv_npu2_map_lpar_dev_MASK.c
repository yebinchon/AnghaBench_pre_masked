
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {int opal_id; } ;
struct pci_dev {int dev; int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,unsigned long) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ,unsigned long,int ) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 struct pci_controller* FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (struct pci_dev*,int ) ;

int FUNC_7(struct pci_dev *VAR_1, unsigned int VAR_2,
  unsigned long VAR_3)
{
 int VAR_4;
 struct pci_dev *VAR_5 = FUNC_6(VAR_1, 0);
 struct pci_controller *VAR_6;
 struct pnv_phb *VAR_7;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5->bus);
 VAR_7 = VAR_6->private_data;

 FUNC_0(&VAR_1->dev, "Map LPAR opalid=%llu lparid=%u\n",
   VAR_7->opal_id, VAR_2);




 VAR_4 = FUNC_3(VAR_7->opal_id, FUNC_5(VAR_1), VAR_2,
    0 );
 if (VAR_4) {
  FUNC_1(&VAR_1->dev, "Error %d mapping device to LPAR\n", VAR_4);
  return VAR_4;
 }

 FUNC_0(&VAR_1->dev, "init context opalid=%llu msr=%lx\n",
   VAR_7->opal_id, VAR_3);
 VAR_4 = FUNC_2(VAR_7->opal_id, 0 , VAR_3,
        FUNC_5(VAR_1));
 if (VAR_4 < 0)
  FUNC_1(&VAR_1->dev, "Failed to init context: %d\n", VAR_4);
 else
  VAR_4 = 0;

 return 0;
}
