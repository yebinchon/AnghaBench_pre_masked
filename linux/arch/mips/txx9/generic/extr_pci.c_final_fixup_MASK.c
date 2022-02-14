
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,unsigned char) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_8)
{
 unsigned char VAR_9;


 if (FUNC_1(VAR_8, VAR_2, &VAR_9) == VAR_1 &&
     (VAR_9 & VAR_3)) {
  unsigned long VAR_10;
  FUNC_2(VAR_8, VAR_6);
  FUNC_5("PCI: %s BIST...", FUNC_0(VAR_8));
  FUNC_3(VAR_8, VAR_2, VAR_5);
  VAR_10 = VAR_7 + VAR_0 * 2;
  do {
   FUNC_1(VAR_8, VAR_2, &VAR_9);
   if (FUNC_6(VAR_7, VAR_10))
    break;
  } while (VAR_9 & VAR_5);
  if (VAR_9 & (VAR_4 | VAR_5))
   FUNC_4("failed. (0x%x)\n", VAR_9);
  else
   FUNC_4("OK.\n");
 }
}
