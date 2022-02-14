
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int * err_handler; } ;
struct pci_dev {int dummy; } ;
struct adf_accel_dev {int dummy; } ;


 struct pci_dev* FUNC_0 (struct adf_accel_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;

int FUNC_2(struct adf_accel_dev *VAR_1, struct pci_driver *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_0(VAR_1);

 VAR_2->err_handler = &VAR_0;
 FUNC_1(VAR_3);
 return 0;
}
