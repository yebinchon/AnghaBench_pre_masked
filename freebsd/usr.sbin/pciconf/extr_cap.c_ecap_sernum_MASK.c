
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct pci_conf {int pc_sel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_2, struct pci_conf *VAR_3, uint16_t VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6, VAR_7;

 FUNC_0("Serial %d", VAR_5);
 if (VAR_5 < 1)
  return;
 VAR_7 = FUNC_1(VAR_2, &VAR_3->pc_sel, VAR_4 + VAR_1, 4);
 VAR_6 = FUNC_1(VAR_2, &VAR_3->pc_sel, VAR_4 + VAR_0, 4);
 FUNC_0(" %08x%08x\n", VAR_6, VAR_7);
}
