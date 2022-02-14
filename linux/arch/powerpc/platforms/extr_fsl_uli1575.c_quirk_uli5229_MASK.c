
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,int,unsigned short*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned short) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4)
{
 unsigned short VAR_5;

 if (!FUNC_0())
  return;

 FUNC_2(VAR_4, VAR_0, VAR_1 |
  VAR_3 | VAR_2);


 FUNC_1(VAR_4, 0x4a, &VAR_5);
 FUNC_2(VAR_4, 0x4a, VAR_5 | 0x1000);
}
