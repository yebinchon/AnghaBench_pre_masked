
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {int opal_id; } ;
struct pci_dev {int dev; int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct pci_controller* FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (struct pci_dev*,int ) ;

int FUNC_7(struct pci_dev *VAR_1)
{
 int VAR_2;
 struct pci_dev *VAR_3 = FUNC_6(VAR_1, 0);
 struct pci_controller *VAR_4;
 struct pnv_phb *VAR_5;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_3->bus);
 VAR_5 = VAR_4->private_data;

 FUNC_0(&VAR_1->dev, "destroy context opalid=%llu\n",
   VAR_5->opal_id);
 VAR_2 = FUNC_2(VAR_5->opal_id, 0 ,
           FUNC_5(VAR_1));
 if (VAR_2 < 0) {
  FUNC_1(&VAR_1->dev, "Failed to destroy context: %d\n", VAR_2);
  return VAR_2;
 }


 FUNC_0(&VAR_1->dev, "Map LPAR opalid=%llu lparid=0\n", VAR_5->opal_id);
 VAR_2 = FUNC_3(VAR_5->opal_id, FUNC_5(VAR_1), 0 ,
    0 );
 if (VAR_2)
  FUNC_1(&VAR_1->dev, "Error %d mapping device to LPAR\n", VAR_2);

 return VAR_2;
}
