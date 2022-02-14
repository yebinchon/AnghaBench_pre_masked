
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_client_ops {int dummy; } ;
struct vga_switcheroo_client {int id; int active; int driver_power_control; int list; struct pci_dev* vga_dev; struct vga_switcheroo_client_ops const* ops; struct pci_dev* pdev; int pwr_state; } ;
struct pci_dev {int dummy; } ;
typedef enum vga_switcheroo_client_id { ____Placeholder_vga_switcheroo_client_id } vga_switcheroo_client_id ;
struct TYPE_2__ {int registered_clients; int clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vga_switcheroo_client*) ;
 struct vga_switcheroo_client* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_5,
      const struct vga_switcheroo_client_ops *VAR_6,
      enum vga_switcheroo_client_id VAR_7,
      struct pci_dev *VAR_8,
      bool VAR_9,
      bool VAR_10)
{
 struct vga_switcheroo_client *VAR_11;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->pwr_state = VAR_2;
 VAR_11->pdev = VAR_5;
 VAR_11->ops = VAR_6;
 VAR_11->id = VAR_7;
 VAR_11->active = VAR_9;
 VAR_11->driver_power_control = VAR_10;
 VAR_11->vga_dev = VAR_8;

 FUNC_3(&VAR_3);
 FUNC_2(&VAR_11->list, &VAR_4.clients);
 if (FUNC_0(VAR_11))
  VAR_4.registered_clients++;

 if (FUNC_7()) {
  FUNC_5("enabled\n");
  FUNC_6();
 }
 FUNC_4(&VAR_3);
 return 0;
}
