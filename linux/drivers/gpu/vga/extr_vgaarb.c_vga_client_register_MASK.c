
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_device {void (* irq_set_state ) (void*,int) ;unsigned int (* set_vga_decode ) (void*,int) ;void* cookie; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_1 ;
 struct vga_device* FUNC_2 (struct pci_dev*) ;

int FUNC_3(struct pci_dev *VAR_2, void *VAR_3,
   void (*VAR_4)(void *VAR_5, bool VAR_6),
   unsigned int (*VAR_7)(void *VAR_8,
             bool VAR_9))
{
 int VAR_10 = -VAR_0;
 struct vga_device *VAR_11;
 unsigned long VAR_12;

 FUNC_0(&VAR_1, VAR_12);
 VAR_11 = FUNC_2(VAR_2);
 if (!VAR_11)
  goto bail;

 VAR_11->irq_set_state = VAR_4;
 VAR_11->set_vga_decode = VAR_7;
 VAR_11->cookie = VAR_3;
 VAR_10 = 0;

bail:
 FUNC_1(&VAR_1, VAR_12);
 return VAR_10;

}
