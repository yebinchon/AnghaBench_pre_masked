
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int class; scalar_t__ devfn; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,struct pci_dev*,int *,int *) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_3,
        const struct pci_device_id *VAR_4)
{
 struct pci_dev *VAR_5;
 int VAR_6 = -VAR_0;



 if ((VAR_3->class >> 8) == VAR_1 &&
     FUNC_0(VAR_3->devfn) == 1) {
  VAR_5 = FUNC_3(VAR_3->bus, VAR_3->devfn + 1);
  VAR_6 = FUNC_1(VAR_3, VAR_5, &VAR_2, ((void*)0));
  if (VAR_6)
   FUNC_2(VAR_5);
 }
 return VAR_6;
}
