
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct driver_data {int dd_flag; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct driver_data*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct driver_data* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_3, pm_message_t VAR_4)
{
 int VAR_5 = 0;
 struct driver_data *VAR_6 = FUNC_3(VAR_3);

 if (!VAR_6) {
  FUNC_0(&VAR_3->dev,
   "Driver private datastructure is NULL\n");
  return -VAR_0;
 }

 FUNC_6(VAR_1, &VAR_6->dd_flag);


 VAR_5 = FUNC_1(VAR_6);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->dev,
   "Failed to suspend controller\n");
  return VAR_5;
 }





 FUNC_4(VAR_3);
 FUNC_2(VAR_3);


 FUNC_5(VAR_3, VAR_2);

 return VAR_5;
}
