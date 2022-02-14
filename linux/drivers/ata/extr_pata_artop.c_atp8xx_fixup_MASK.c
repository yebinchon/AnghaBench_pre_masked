
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{
 if (VAR_1->device == 0x0005)

  FUNC_1(VAR_1, 0x54, 0);
 else if (VAR_1->device == 0x0008 || VAR_1->device == 0x0009) {
  u8 VAR_2;





  FUNC_0(VAR_1, 0x49, &VAR_2);
  FUNC_1(VAR_1, 0x49, VAR_2 & ~0x30);




  FUNC_0(VAR_1, VAR_0, &VAR_2);
  if (VAR_2 <= 0x80)
   FUNC_1(VAR_1, VAR_0, 0x90);


  FUNC_0(VAR_1, 0x4a, &VAR_2);
  FUNC_1(VAR_1, 0x4a, (VAR_2 & ~0x01) | 0x80);
 }
}
