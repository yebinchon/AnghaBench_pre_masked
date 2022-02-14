
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5, int VAR_6, u32 VAR_7)
{
 if (!FUNC_0(VAR_3->number, VAR_4))
  return VAR_1;

 switch (VAR_6) {
 case 1: FUNC_1(( u8)VAR_7, VAR_0+VAR_5); break;
 case 2: FUNC_3((u16)VAR_7, VAR_0+VAR_5); break;
 case 4: FUNC_2((u32)VAR_7, VAR_0+VAR_5); break;
 }

        return VAR_2;
}
