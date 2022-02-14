
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int number; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned long
FUNC_2(struct pci_bus *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6 = 0;

 if (VAR_4->number == 0) {
  if (FUNC_1(VAR_5) == 0)



   VAR_6 = VAR_0;
  else {
   VAR_5 -= 1 << 3;

   if (VAR_5 < FUNC_0(VAR_1, 0))
    VAR_6 = VAR_2 | 0xc00000 | (VAR_5 << 8);
  }
 } else
  VAR_6 = VAR_3 | (VAR_4->number << 16) | (VAR_5 << 8);

 return VAR_6;
}
