
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct driver_data {int dummy; } ;


 int FUNC_0 (struct driver_data*) ;
 struct driver_data* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct driver_data *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_1);
}
