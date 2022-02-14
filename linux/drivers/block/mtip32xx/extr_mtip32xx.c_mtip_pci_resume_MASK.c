
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct driver_data {int dd_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct driver_data*) ;
 struct driver_data* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_3)
{
 int VAR_4 = 0;
 struct driver_data *VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 if (!VAR_5) {
  FUNC_1(&VAR_3->dev,
   "Driver private datastructure is NULL\n");
  return -VAR_0;
 }


 FUNC_6(VAR_3, VAR_2);


 FUNC_4(VAR_3);


 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_3->dev,
   "Failed to enable card during resume\n");
  goto err;
 }
 FUNC_5(VAR_3);





 VAR_4 = FUNC_2(VAR_5);
 if (VAR_4 < 0)
  FUNC_1(&VAR_3->dev, "Unable to resume\n");

err:
 FUNC_0(VAR_1, &VAR_5->dd_flag);

 return VAR_4;
}
