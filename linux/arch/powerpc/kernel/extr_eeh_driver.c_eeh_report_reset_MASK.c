
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; int name; } ;
struct pci_dev {int dummy; } ;
struct eeh_dev {int in_error; } ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
struct TYPE_2__ {int (* slot_reset ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct eeh_dev*,char*,int ) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static enum pci_ers_result FUNC_2(struct eeh_dev *VAR_1,
         struct pci_dev *VAR_2,
         struct pci_driver *VAR_3)
{
 if (!VAR_3->err_handler->slot_reset || !VAR_1->in_error)
  return VAR_0;
 FUNC_0(VAR_1, "Invoking %s->slot_reset()", VAR_3->name);
 return VAR_3->err_handler->slot_reset(VAR_2);
}
