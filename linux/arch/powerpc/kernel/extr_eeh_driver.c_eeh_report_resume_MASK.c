
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; int name; } ;
struct pci_dev {int dummy; } ;
struct eeh_dev {int pdev; int in_error; } ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
struct TYPE_4__ {int (* notify_resume ) (scalar_t__) ;} ;
struct TYPE_3__ {int (* resume ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct eeh_dev*) ;
 int FUNC_1 (struct eeh_dev*,char*,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static enum pci_ers_result FUNC_5(struct eeh_dev *VAR_3,
          struct pci_dev *VAR_4,
          struct pci_driver *VAR_5)
{
 if (!VAR_5->err_handler->resume || !VAR_3->in_error)
  return VAR_0;

 FUNC_1(VAR_3, "Invoking %s->resume()", VAR_5->name);
 VAR_5->err_handler->resume(VAR_4);

 FUNC_2(VAR_3->pdev, VAR_1);




 return VAR_0;
}
