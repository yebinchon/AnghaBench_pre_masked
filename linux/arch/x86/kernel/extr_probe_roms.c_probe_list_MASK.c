
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct pci_dev*,unsigned short,unsigned short) ;
 scalar_t__ FUNC_1 (unsigned char const*,unsigned short) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_0, unsigned short VAR_1,
         const unsigned char *VAR_2)
{
 unsigned short VAR_3;

 do {
  if (FUNC_1(VAR_2, VAR_3) != 0)
   VAR_3 = 0;

  if (VAR_3 && FUNC_0(VAR_0, VAR_1, VAR_3))
   break;

  VAR_2 += 2;
 } while (VAR_3);

 return !!VAR_3;
}
