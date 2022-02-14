
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,unsigned char*) ;

__attribute__((used)) static bool FUNC_1(struct pci_dev *VAR_2)
{
 unsigned char VAR_3;

 FUNC_0(VAR_2, VAR_0 + 3, &VAR_3);
 if (VAR_3 & VAR_1)
  return 0;
 return 1;
}
