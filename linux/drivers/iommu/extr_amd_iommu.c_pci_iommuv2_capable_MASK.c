
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;





 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,int const) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_0)
{
 static const int VAR_1[] = {
  130,
  128,
  129,
 };
 int VAR_2, VAR_3;

 if (FUNC_0())
  return 0;

 for (VAR_2 = 0; VAR_2 < 3; ++VAR_2) {
  VAR_3 = FUNC_1(VAR_0, VAR_1[VAR_2]);
  if (VAR_3 == 0)
   return 0;
 }

 return 1;
}
