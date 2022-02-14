
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_client {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef enum vga_switcheroo_state { ____Placeholder_vga_switcheroo_state } vga_switcheroo_state ;
struct TYPE_2__ {int clients; } ;


 int VAR_0 ;
 struct vga_switcheroo_client* FUNC_0 (int *,struct pci_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vga_switcheroo_client*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

enum vga_switcheroo_state FUNC_4(struct pci_dev *VAR_3)
{
 struct vga_switcheroo_client *VAR_4;
 enum vga_switcheroo_state VAR_5;

 FUNC_1(&VAR_1);
 VAR_4 = FUNC_0(&VAR_2.clients, VAR_3);
 if (!VAR_4)
  VAR_5 = VAR_0;
 else
  VAR_5 = FUNC_3(VAR_4);
 FUNC_2(&VAR_1);
 return VAR_5;
}
