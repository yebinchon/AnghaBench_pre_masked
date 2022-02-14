
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 if ((VAR_3->class >> 8) != VAR_1)
  return -VAR_0;
 return FUNC_0(VAR_3, &VAR_2, ((void*)0));
}
