
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5, int VAR_6, u32 *VAR_7)
{
 *VAR_7 = 0xffffffff;

 if (!FUNC_0(VAR_3->number, VAR_4))
  return VAR_1;

 switch (VAR_6) {
 case 1: *VAR_7 = FUNC_1(VAR_0+VAR_5); break;
 case 2: *VAR_7 = FUNC_3(VAR_0+VAR_5); break;
 case 4: *VAR_7 = FUNC_2(VAR_0+VAR_5); break;
 }

        return VAR_2;
}
