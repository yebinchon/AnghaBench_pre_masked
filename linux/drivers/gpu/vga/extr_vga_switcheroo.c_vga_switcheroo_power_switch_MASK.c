
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vga_switcheroo_client {int id; int driver_power_control; } ;
struct pci_dev {int dummy; } ;
typedef enum vga_switcheroo_state { ____Placeholder_vga_switcheroo_state } vga_switcheroo_state ;
struct TYPE_4__ {TYPE_1__* handler; int clients; } ;
struct TYPE_3__ {int (* power_state ) (int ,int) ;} ;


 struct vga_switcheroo_client* FUNC_0 (int *,struct pci_dev*) ;
 int FUNC_1 (int ,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1,
     enum vga_switcheroo_state VAR_2)
{
 struct vga_switcheroo_client *VAR_3;

 if (!VAR_0.handler->power_state)
  return;

 VAR_3 = FUNC_0(&VAR_0.clients, VAR_1);
 if (!VAR_3)
  return;

 if (!VAR_3->driver_power_control)
  return;

 VAR_0.handler->power_state(VAR_3->id, VAR_2);
}
