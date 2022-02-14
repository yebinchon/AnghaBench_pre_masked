
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; int name; } ;
struct pci_dev {int dummy; } ;
struct eeh_dev {int in_error; } ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
struct TYPE_2__ {int (* error_detected ) (struct pci_dev*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct eeh_dev*,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static enum pci_ers_result FUNC_3(struct eeh_dev *VAR_2,
         struct pci_dev *VAR_3,
         struct pci_driver *VAR_4)
{
 enum pci_ers_result VAR_5;

 if (!VAR_4->err_handler->error_detected)
  return VAR_0;

 FUNC_0(VAR_2, "Invoking %s->error_detected(IO frozen)",
        VAR_4->name);
 VAR_5 = VAR_4->err_handler->error_detected(VAR_3, VAR_1);

 VAR_2->in_error = 1;
 FUNC_1(VAR_3, VAR_0);
 return VAR_5;
}
