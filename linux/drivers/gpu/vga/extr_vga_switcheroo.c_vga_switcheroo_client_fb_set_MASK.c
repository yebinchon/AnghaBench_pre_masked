
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_client {struct fb_info* fb_info; } ;
struct pci_dev {int dummy; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int clients; } ;


 struct vga_switcheroo_client* FUNC_0 (int *,struct pci_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_3(struct pci_dev *VAR_2,
     struct fb_info *VAR_3)
{
 struct vga_switcheroo_client *VAR_4;

 FUNC_1(&VAR_0);
 VAR_4 = FUNC_0(&VAR_1.clients, VAR_2);
 if (VAR_4)
  VAR_4->fb_info = VAR_3;
 FUNC_2(&VAR_0);
}
