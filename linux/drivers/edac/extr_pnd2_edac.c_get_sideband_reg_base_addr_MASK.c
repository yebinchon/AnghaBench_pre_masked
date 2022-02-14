
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int,int *) ;
 int FUNC_3 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,scalar_t__) ;

__attribute__((used)) static u64 FUNC_6(void)
{
 struct pci_dev *VAR_1;
 u32 VAR_2, VAR_3;
 u8 VAR_4;

 VAR_1 = FUNC_2(VAR_0, 0x19dd, ((void*)0));
 if (VAR_1) {

  FUNC_3(VAR_1, 0xe1, &VAR_4);
  if (VAR_4)
   FUNC_5(VAR_1, 0xe1, 0);

  FUNC_4(VAR_1, 0x10, &VAR_3);
  FUNC_4(VAR_1, 0x14, &VAR_2);
  VAR_3 &= 0xfffffff0;


  if (VAR_4)
   FUNC_5(VAR_1, 0xe1, VAR_4);

  FUNC_1(VAR_1);
  return (FUNC_0(VAR_2, 32) | FUNC_0(VAR_3, 0));
 } else {
  return 0xfd000000;
 }
}
