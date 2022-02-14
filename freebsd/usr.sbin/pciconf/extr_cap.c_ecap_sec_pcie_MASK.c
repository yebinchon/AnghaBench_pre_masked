
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct pci_conf {int pc_sel; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, struct pci_conf *VAR_1, uint16_t VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4;

 FUNC_0("PCIe Sec %d", VAR_3);
 if (VAR_3 < 1)
  return;
 VAR_4 = FUNC_1(VAR_0, &VAR_1->pc_sel, VAR_2 + 8, 4);
 FUNC_0(" lane errors %#x\n", VAR_4);
}
