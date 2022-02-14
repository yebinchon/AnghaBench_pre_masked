
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {TYPE_1__* bus; } ;
struct hfi1_devdata {struct pci_dev* pcidev; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct hfi1_devdata *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pcidev->bus->self;
 u32 VAR_3, VAR_4;





 if (!VAR_2)
  return 0;

 FUNC_2(VAR_1->pcidev, VAR_0, &VAR_4);
 VAR_4 = FUNC_0(VAR_4);

 FUNC_2(VAR_2, VAR_0, &VAR_3);
 VAR_3 = FUNC_0(VAR_3);


 return (!!VAR_4 || FUNC_1(VAR_1)) && !!VAR_3;
}
