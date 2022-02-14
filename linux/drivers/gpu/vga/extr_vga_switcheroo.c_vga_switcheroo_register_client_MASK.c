
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_switcheroo_client_ops {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,struct vga_switcheroo_client_ops const*,int ,int *,int,int) ;
 struct pci_dev* FUNC_1 () ;

int FUNC_2(struct pci_dev *VAR_1,
       const struct vga_switcheroo_client_ops *VAR_2,
       bool VAR_3)
{
 return FUNC_0(VAR_1, VAR_2, VAR_0, ((void*)0),
          VAR_1 == FUNC_1(),
          VAR_3);
}
