
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_bus*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_2, unsigned int VAR_3,
     int VAR_4, int VAR_5, u32 *VAR_6)
{
 FUNC_3(VAR_2, VAR_3, VAR_4);

 switch (VAR_5) {
 case 1:
  *VAR_6 = FUNC_0(VAR_1 + (VAR_4 & 3));
  break;
 case 2:
  *VAR_6 = FUNC_2(VAR_1 + (VAR_4 & 2));
  break;
 case 4:
  *VAR_6 = FUNC_1(VAR_1);
  break;
 }
 return VAR_0;
}
