
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
   int VAR_6, u32 *VAR_7)
{
 FUNC_2(FUNC_0(VAR_3, VAR_4, VAR_5), VAR_1);
 switch (VAR_6) {
 case 1:
  *VAR_7 = (FUNC_1(VAR_2) >> ((VAR_5 & 3) * 8)) & 0xFF;
  break;
 case 2:
  *VAR_7 = (FUNC_1(VAR_2) >> ((VAR_5 & 2) * 8)) & 0xFFFF;
  break;
 case 4:
  *VAR_7 = FUNC_1(VAR_2);
  break;
 }
 return VAR_0;
}
