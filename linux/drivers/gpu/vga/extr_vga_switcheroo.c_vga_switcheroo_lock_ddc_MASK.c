
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
typedef enum vga_switcheroo_client_id { ____Placeholder_vga_switcheroo_client_id } vga_switcheroo_client_id ;
struct TYPE_4__ {int old_ddc_owner; TYPE_1__* handler; int mux_hw_lock; } ;
struct TYPE_3__ {int (* switch_ddc ) (int) ;int (* get_client_id ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_1 ;

int FUNC_3(struct pci_dev *VAR_2)
{
 enum vga_switcheroo_client_id VAR_3;

 FUNC_0(&VAR_1.mux_hw_lock);
 if (!VAR_1.handler || !VAR_1.handler->switch_ddc) {
  VAR_1.old_ddc_owner = -VAR_0;
  return -VAR_0;
 }

 VAR_3 = VAR_1.handler->get_client_id(VAR_2);
 VAR_1.old_ddc_owner = VAR_1.handler->switch_ddc(VAR_3);
 return VAR_1.old_ddc_owner;
}
