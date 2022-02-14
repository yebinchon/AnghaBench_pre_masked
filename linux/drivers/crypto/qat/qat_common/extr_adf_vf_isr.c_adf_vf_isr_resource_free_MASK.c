
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct adf_accel_dev {int dummy; } ;


 struct pci_dev* FUNC_0 (struct adf_accel_dev*) ;
 int FUNC_1 (struct adf_accel_dev*) ;
 int FUNC_2 (struct adf_accel_dev*) ;
 int FUNC_3 (struct adf_accel_dev*) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct adf_accel_dev *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_5(VAR_1->irq, ((void*)0));
 FUNC_4(VAR_1->irq, (void *)VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
