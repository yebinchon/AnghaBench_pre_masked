
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct pci_bus*,int,int,int,int*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_2, u32 VAR_3,
      int VAR_4, int VAR_5, u32 *VAR_6)
{
 int VAR_7;

 if (FUNC_2(VAR_2->number, FUNC_0(VAR_3)) == 0) {
  *VAR_6 = 0xffffffff;
  return VAR_1;
 }






 if (VAR_4 >= 0x100) {
  *VAR_6 = 0xffffffff;
  return VAR_1;
 }

 VAR_7 = FUNC_1(VAR_0,
        VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
