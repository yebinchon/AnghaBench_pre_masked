
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; int name; } ;
struct pci_dev {int dummy; } ;
struct eeh_dev {int dummy; } ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
struct TYPE_2__ {int (* error_detected ) (struct pci_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eeh_dev*,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static enum pci_ers_result FUNC_3(struct eeh_dev *VAR_3,
           struct pci_dev *VAR_4,
           struct pci_driver *VAR_5)
{
 enum pci_ers_result VAR_6;

 if (!VAR_5->err_handler->error_detected)
  return VAR_1;

 FUNC_0(VAR_3, "Invoking %s->error_detected(permanent failure)",
        VAR_5->name);
 VAR_6 = VAR_5->err_handler->error_detected(VAR_4,
       VAR_2);

 FUNC_1(VAR_4, VAR_0);
 return VAR_6;
}
