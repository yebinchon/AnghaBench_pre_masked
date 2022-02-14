
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,char*) ;
 int FUNC_1 (struct pci_dev*,struct pci_device_id const*,int *) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1, const struct pci_device_id *VAR_2)
{
 FUNC_0(VAR_1, 0, "mgag200drmfb");

 return FUNC_1(VAR_1, VAR_2, &VAR_0);
}
