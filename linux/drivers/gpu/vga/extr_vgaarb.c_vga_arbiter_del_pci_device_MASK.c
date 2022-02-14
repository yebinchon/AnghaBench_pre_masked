
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_device {int decodes; int list; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vga_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct pci_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct pci_dev* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 struct vga_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static bool FUNC_8(struct pci_dev *VAR_7)
{
 struct vga_device *VAR_8;
 unsigned long VAR_9;
 bool VAR_10 = 1;

 FUNC_2(&VAR_5, VAR_9);
 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 == ((void*)0)) {
  VAR_10 = 0;
  goto bail;
 }

 if (VAR_4 == VAR_7)
  FUNC_5(((void*)0));

 if (VAR_8->decodes & (VAR_0 | VAR_1))
  VAR_3--;


 FUNC_1(&VAR_8->list);
 VAR_2--;



 FUNC_4(VAR_7);


 FUNC_7(&VAR_6);
bail:
 FUNC_3(&VAR_5, VAR_9);
 FUNC_0(VAR_8);
 return VAR_10;
}
