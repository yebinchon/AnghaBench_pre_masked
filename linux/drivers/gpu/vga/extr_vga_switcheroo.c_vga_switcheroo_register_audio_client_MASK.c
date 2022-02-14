
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vga_switcheroo_client_ops {int (* gpu_bound ) (struct pci_dev*,int) ;} ;
struct pci_dev {int dummy; } ;
typedef enum vga_switcheroo_client_id { ____Placeholder_vga_switcheroo_client_id } vga_switcheroo_client_id ;
struct TYPE_4__ {TYPE_1__* handler; scalar_t__ active; } ;
struct TYPE_3__ {int (* get_client_id ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,struct vga_switcheroo_client_ops const*,int,struct pci_dev*,int,int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

int FUNC_5(struct pci_dev *VAR_5,
   const struct vga_switcheroo_client_ops *VAR_6,
   struct pci_dev *VAR_7)
{
 enum vga_switcheroo_client_id VAR_8 = VAR_2;
 FUNC_0(&VAR_3);
 if (VAR_4.active) {
  VAR_8 = VAR_4.handler->get_client_id(VAR_7);
  if (VAR_8 < 0) {
   FUNC_1(&VAR_3);
   return -VAR_0;
  }

  if (VAR_6->gpu_bound)
   VAR_6->gpu_bound(VAR_5, VAR_8);
 }
 FUNC_1(&VAR_3);

 return FUNC_2(VAR_5, VAR_6, VAR_8 | VAR_1, VAR_7,
          0, 1);
}
