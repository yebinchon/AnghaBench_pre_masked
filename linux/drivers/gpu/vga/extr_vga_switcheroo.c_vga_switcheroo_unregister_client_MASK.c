
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vga_switcheroo_client {int list; } ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int registered_clients; int active; int clients; } ;


 scalar_t__ FUNC_0 (struct vga_switcheroo_client*) ;
 struct vga_switcheroo_client* FUNC_1 (int *,struct pci_dev*) ;
 int FUNC_2 (struct vga_switcheroo_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_8(struct pci_dev *VAR_2)
{
 struct vga_switcheroo_client *VAR_3;

 FUNC_4(&VAR_0);
 VAR_3 = FUNC_1(&VAR_1.clients, VAR_2);
 if (VAR_3) {
  if (FUNC_0(VAR_3))
   VAR_1.registered_clients--;
  FUNC_3(&VAR_3->list);
  FUNC_2(VAR_3);
 }
 if (VAR_1.active && VAR_1.registered_clients < 2) {
  FUNC_6("disabled\n");
  FUNC_7(&VAR_1);
  VAR_1.active = 0;
 }
 FUNC_5(&VAR_0);
}
