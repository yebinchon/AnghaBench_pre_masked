
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
typedef enum vga_switcheroo_client_id { ____Placeholder_vga_switcheroo_client_id } vga_switcheroo_client_id ;
struct TYPE_2__ {scalar_t__ dhandle; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static enum vga_switcheroo_client_id FUNC_1(struct pci_dev *VAR_3)
{
 if (VAR_2.dhandle == FUNC_0(&VAR_3->dev))
  return VAR_1;
 else
  return VAR_0;
}
