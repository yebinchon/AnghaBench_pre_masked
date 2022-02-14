
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {scalar_t__ err_handler; } ;
struct pci_dev {int dummy; } ;
struct eeh_dev {int physfn; } ;
struct TYPE_2__ {int vf_index; } ;


 struct pci_dev* FUNC_0 (struct eeh_dev*) ;
 TYPE_1__* FUNC_1 (struct eeh_dev*) ;
 int FUNC_2 (struct eeh_dev*,char*) ;
 struct pci_driver* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void *FUNC_6(struct eeh_dev *VAR_0)
{
 struct pci_driver *VAR_1;
 struct pci_dev *VAR_2 = FUNC_0(VAR_0);

 if (!(VAR_0->physfn)) {
  FUNC_2(VAR_0, "Not for VF\n");
  return ((void*)0);
 }

 VAR_1 = FUNC_3(VAR_2);
 if (VAR_1) {
  if (VAR_1->err_handler) {
   FUNC_4(VAR_2);
   return ((void*)0);
  }
  FUNC_4(VAR_2);
 }




 return ((void*)0);
}
