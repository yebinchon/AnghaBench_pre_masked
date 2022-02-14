
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_device {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct vga_device*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pci_dev* FUNC_3 () ;
 int VAR_0 ;
 struct vga_device* FUNC_4 (struct pci_dev*) ;

void FUNC_5(struct pci_dev *VAR_1, unsigned int VAR_2)
{
 struct vga_device *VAR_3;
 unsigned long VAR_4;


 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_3();
 if (VAR_1 == ((void*)0))
  return;
 FUNC_1(&VAR_0, VAR_4);
 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 == ((void*)0))
  goto bail;
 FUNC_0(VAR_3, VAR_2);
bail:
 FUNC_2(&VAR_0, VAR_4);
}
