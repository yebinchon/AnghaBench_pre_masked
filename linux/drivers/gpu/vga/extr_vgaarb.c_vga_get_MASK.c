
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_entry_t ;
struct vga_device {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct vga_device* FUNC_1 (struct vga_device*,unsigned int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;
 struct pci_dev* FUNC_11 () ;
 int VAR_6 ;
 int VAR_7 ;
 struct vga_device* FUNC_12 (struct pci_dev*) ;

int FUNC_13(struct pci_dev *VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct vga_device *VAR_11, *VAR_12;
 unsigned long VAR_13;
 wait_queue_entry_t VAR_14;
 int VAR_15 = 0;

 FUNC_10();

 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_11();
 if (VAR_8 == ((void*)0))
  return 0;

 for (;;) {
  FUNC_8(&VAR_6, VAR_13);
  VAR_11 = FUNC_12(VAR_8);
  if (VAR_11 == ((void*)0)) {
   FUNC_9(&VAR_6, VAR_13);
   VAR_15 = -VAR_0;
   break;
  }
  VAR_12 = FUNC_1(VAR_11, VAR_9);
  FUNC_9(&VAR_6, VAR_13);
  if (VAR_12 == ((void*)0))
   break;
  FUNC_3(&VAR_14, VAR_5);
  FUNC_2(&VAR_7, &VAR_14);
  FUNC_6(VAR_10 ?
      VAR_2 :
      VAR_4);
  if (VAR_10 && FUNC_7(VAR_5)) {
   FUNC_0(VAR_3);
   FUNC_4(&VAR_7, &VAR_14);
   VAR_15 = -VAR_1;
   break;
  }
  FUNC_5();
  FUNC_4(&VAR_7, &VAR_14);
 }
 return VAR_15;
}
