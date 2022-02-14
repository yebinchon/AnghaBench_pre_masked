
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 unsigned VAR_1;

 FUNC_2(0x80003840, 0xCF8);

 VAR_1 = FUNC_0(0xCFC);

 VAR_1 |= 0x1600;
 FUNC_2(VAR_1, 0xCFC);
 FUNC_1(1, 0x92);
}
