
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_0,
      const struct pci_device_id *VAR_1)
{
 FUNC_1(0, "\n");


 return FUNC_0(VAR_0, VAR_1->driver_data);
}
