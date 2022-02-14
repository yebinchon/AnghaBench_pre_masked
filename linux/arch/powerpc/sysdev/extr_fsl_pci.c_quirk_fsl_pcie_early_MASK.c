
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_4)
{
 u8 VAR_5;


 if (!FUNC_0(VAR_4))
  return;


 FUNC_1(VAR_4, VAR_1, &VAR_5);
 if ((VAR_5 & 0x7f) != VAR_2)
  return;

 VAR_4->class = VAR_0 << 8;
 VAR_3 = 1;
 return;
}
