
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 u32 VAR_1;
 FUNC_0 (VAR_0, 0x28, &VAR_1);
 if (VAR_1 != 0x80) {
  VAR_1 = 0x80;
  FUNC_1 (VAR_0, 0x28, VAR_1);
 }
}
