
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_device {scalar_t__ set_vga_decode; } ;
struct pci_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (struct vga_device*,unsigned int) ;
 struct vga_device* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2,
          unsigned int VAR_3,
          bool VAR_4)
{
 struct vga_device *VAR_5;
 unsigned long VAR_6;

 VAR_3 &= VAR_0;

 FUNC_0(&VAR_1, VAR_6);
 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 == ((void*)0))
  goto bail;


 if (VAR_4 && VAR_5->set_vga_decode)
  goto bail;


 FUNC_2(VAR_5, VAR_3);





bail:
 FUNC_1(&VAR_1, VAR_6);
}
